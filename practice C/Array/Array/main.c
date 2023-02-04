#include <stdio.h>

int main()
{
    int id;
    char name[20];
    char sex;
    float total,bonus,salary;
    printf("=====FILL YOUR IDINTITY======\n");
    printf("Input id:");scanf("%d",&id);
    fflush(stdin);
    printf("Input Nmae:");gets(name);
    printf("Input Sex:");scanf("%c",&sex);
    printf("Input salary:");scanf("%f",&salary);
    if (strcmp(&sex,"F")==0 && salary<=100)
    {
        bonus = salary*0.2;
        total = bonus + salary;
    }
    else if (strcmp(&sex,"M")==0 && salary<=100)
    {
        bonus= salary*0.15;
        total = salary + bonus;
    }
    else
    {
        bonus = salary*0.1;
        total = salary+bonus;
    }
    printf("Name =%s\n",name);
       printf("salary =%.2f\n",salary);
       printf("bonus =%.2f\n",bonus);
       printf("total =%.2f\n",total);
       return 0;
}
