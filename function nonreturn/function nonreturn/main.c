#include <stdio.h>
int sum(int n)
{
    int i,sum=0;
    for (i=1; i<=n; i++)
    {
        sum+=i;
        printf("%d +",i);
        
    }
    return sum;
}
int main()
{
    int n;
    printf("Input N=");scanf("%d",&n);
    printf("Sum=%d\n",sum(n));
}
