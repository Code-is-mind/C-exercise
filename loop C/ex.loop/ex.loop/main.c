#include <stdio.h>
int sum(int n)
{
    int i, sum=0;
    for (i=1; i<n; i++)
    {
        sum+=i;
        printf("%d  + ",i);
    }
    return sum;
}
int main()
{
    int n;
    printf("Input Number of Loop=");scanf("%d",&n);
    printf("\nSum=%d",sum(n));
}
//void sum1()
//{
//    int i, sum = 0;
//    int n;
//    printf("Input N=");scanf("%d"
//                             ,&n);
//    for (i=1; i<n; i++) {
//        sum=sum+i;
//        printf("%d + ",i);
//    }
//    printf("Sum=%d",sum);
//}
//int main()
//{
//    sum1();
//}

//int main()
//{
//    int i,n;
//    int sum=0;
//    printf("INput N=");
//    scanf("%d",&n);
//    for(i=1;i<=n;i++)
//    {
//        sum=sum+i;
//        printf("%d +\b",i);
//    }
//    printf("\b=%d ",sum);
//}
