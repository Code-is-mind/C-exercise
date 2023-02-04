#include <stdio.h>
int main()
{
    int a[100];
    int n,i;
    printf("Input number=");scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        printf("Input Araay:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
}
