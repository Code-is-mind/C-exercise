#include <stdio.h>

struct student {
    char name[20];
    int roll;
    float score;
};
int main()
{
    struct student *p;
    int n, i;
    printf("Enter total number of elements:");
    scanf("%d",&n);
    
    p=(struct student*)malloc(n*sizeof(struct student));
    if(p==NULL)
    {
        printf("Insufficient Memory, Exiting... \n");
        return 0;
    }
    for (i=0; i<n; i++)
    {
        printf("\nEnter detail of student [%3d]:\n",i+1);
        printf("Enter name:");scanf(" ");
        gets((p+i)->name);
        printf("enter roll number: ");scanf("%d",&(p+i)->roll);
        printf("Enter score: ");scanf("%f",&(p+i)->score);
    }
    printf("\nEnter details are:\n");
    for (i=0; i<n; i++)
    {
        printf("%30s\t %5d\t %.2f\n",(p+i)->name, (p+i)->roll, (p+i)->score);
    }
}


