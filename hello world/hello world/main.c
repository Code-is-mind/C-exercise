#include <stdio.h>
int main()
{
    int a[100];
    int i,n,sum=0;
    
    printf("Input N=");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        printf("Enter Number %d:",i+1);
        scanf("%d",&a[i]);
    }
    for (i=0; i<n; i++)
    {
        printf("%d  ",a[i]);
        sum=sum+a[i];
    }
    printf("\n Sum of array =%d\n",sum);
    for (i=0; i<n; i++)
    {
        if(a[i]%2==0)
            printf("Even number %d\n",a[i]);
        else
            printf("Odd number %d\n",a[i]);
    
    }
}

