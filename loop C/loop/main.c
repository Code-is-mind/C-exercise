#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,op;
    int sum=0;
    printf("1. Loop One\n");
    printf("2. Loop two\n");
    printf("3. Loop Three\n");
    printf("4. Loop Four\n");
    printf("5. Loop Five\n");
    printf("Please Choose One=");
    scanf("%d",&op);
    printf("Input N=");scanf("%d",&n);
    switch (op)
    {
        case 1:{
            sum=0;
            for (i=1; i<n; i++)
            {
                sum=sum+i;
                printf("%d  ",sum);
            }
            printf("Sum Loop 1=%d\n",sum);
        }break;
case 2:{sum=0;
    for (i=1; i<n; i++) {
        sum=sum+sqrt(i);
         printf("%d  ",sum);
    }
    printf("Sum Loop 2=%d\n",sum);
}break;
        case 3:{sum=0;
            for (i=1; i<=n; i++) {
                sum=sum+pow(i,2);
                 printf("%d  ",sum);
            }
            printf("Sum Loop3=%d",sum);
        }break;
        case 4:{sum=0;
            for (i=1; i<n; i++)
            {
                sum=sum+pow(i, 3);
            }
            printf("Sum Loop 4=%d\n",sum);
        }break;
        case 5:{sum=0;
            for (i=1; i<n; i++)
            {
                sum=sum+cos(i);
            }
            printf("Sum Loop 5=%d\n",sum);
        }break;
    }
}
