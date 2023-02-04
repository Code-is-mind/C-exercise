#include <stdio.h>

  int main(void)
{
    int *ptr, i, n1, n2;
    printf("Enter size of array:");
    scanf("%d",&n1);
    
    ptr = (int*) malloc(n1 * sizeof(int));
    for (i=0; i<n1; i++)
    {
        printf("Input value=");
        scanf("%d",ptr+i);
    }
    
    printf("\nEnter new size of array:");
    scanf("%d",&n2);
    
    ptr =(int*) realloc(ptr, n2 * sizeof(int));
    
    for (i=n1; i<n2+n1; i++)
    {
        printf("Input New Value=");
        scanf("%d",ptr+i);
    }
    for (i=0; i<n2+n1; i++)
    {
        printf("%d      ",*ptr+i);
    }
    
}
