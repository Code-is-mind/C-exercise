#include <stdio.h>
struct employee{
    int code;
    char name[20];
    char sex;
    float salary;
};
int main()
{
    struct employee emp[20];
    int i,n = 0,op = 0;
    do {
        printf("\n>>>1.Input\n");
        printf(">>>2.Output\n");
        printf(">>>3.Search\n");
        printf(">>>4.Update\n");
        printf(">>>5.Sort big to small\n");
        printf(">>>6.Sort small to big\n");
        printf(">>>0. Exit...");
        printf("Please Choose Number (1-6)");scanf("%d",&op);
        switch(op)
        {
            case 1:{
                printf("Input N =");scanf("%d",&n);
                for (i=0; i<n; i++) {
                    printf("Input code =");scanf("%d",&emp[i].code);
                    fflush(stdin);
                    printf("Input name =");gets(emp[i].name);
                    printf("Input sex =");scanf("%c",&emp[i].sex);
                    printf("Input salary =");scanf("%f",&emp[i].salary);
                }
            }break;
            case 2:{
                for (i=0; i<n; i++) {
                    printf("Code = %d\n",emp[i].code);
                    printf("Name = %s\n",emp[i].name);
                    printf("Sex = %c\n",emp[i].sex);
                    printf("salary = %f\n",emp[i].salary);
                }
            }break;
            case 3:{
                int scode;
                printf("Input value to search =");scanf("%d",&scode);
                for (i=0; i<n; i++) {
                    if(scode==emp[i].code)
                    {
                        printf("Code = %d\n",emp[i].code);
                        printf("Name = %s\n",emp[i].name);
                        printf("Sex = %c\n",emp[i].sex);
                        printf("salary = %f\n",emp[i].salary);
                    }
                }
            }break;
            case 4:{
                int up;
                printf("Input value to update=");scanf("%d",&up);
                for (i=0; i<n; i++) {
                    if(up==emp[i].code)
                    {
                        printf("Input new code =");scanf("%d",&emp[i].code);
                        printf("Input new name =");gets(emp[i].name);
                        printf("Input new Sex =");scanf("%c",&emp[i].sex);
                        printf("Input new Salary =");scanf("%f",&emp[i].salary);
                    }
                }
            }break;
            case 5:{
                int bts,j;
                for (i=0; i<n; i++) {
                    for (j=i+1; j<n; j++) {
                        if(emp[j].code > emp[i].code)
                        {
                            bts = emp[i].code;
                            emp[i].code = emp[j].code;
                            emp[j].code = bts;
                        }
                    }
                }
            }break;
            case 6:{
                int stb,j;
                for (i=0; i<n; i++) {
                    for (j=i+1; j<n; j++) {
                        if(emp[j].code < emp[i].code)
                        {
                            stb = emp[i].code;
                            emp[i].code = emp[j].code;
                            emp[j].code = stb;
                        }
                    }
                }
            }
        }
    } while (op!=0);
}
