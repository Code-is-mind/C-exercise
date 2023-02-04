#include <stdio.h>

int main()
{
    int a[100];
    int i,n,op,ssearch,up;
    do{
        printf("\n1. Input \n");
        printf("2. Output \n");
        printf("3. Search \n");
        printf("4. Update \n");
        printf("Please Choose Option (1-4)");
        scanf("%d",&op);
        
        switch(op)
        {
            case 1:{
                printf("Input N=");scanf("%d",&n);
                for (i=0; i<n; i++) {
                    printf("Input Array =");scanf("%d",&a[i]);
                }
            }break;
            case 2:{
                for (i=0; i<n; i++) {
                    printf("%d  ",a[i]);
                }
            }break;
            case 3:{
                printf("Input value to Search =");scanf("%d",&ssearch);
                for (i=0; i<n; i++) {
                    if(ssearch == a[i])
                    {
                        printf("Search found = %d \n",a[i]);
                    }
                }
            }break;
            case 4:{
                printf("Input value to update =");scanf("%d",&up);
                for (i=0; i<n; i++) {
                    if(up == a[i])
                    {
                        printf("Input New value=");scanf("%d",&a[i]);
                    }
                }
            }break;
        }
     }while(op!=0);
}
