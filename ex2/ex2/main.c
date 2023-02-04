#include <stdio.h>
#include <math.h>
int main(void)
{
    float score1,score2,score3,score4,score5,total,average;
    printf("Enter marks of 5 subjects\n");
    scanf("%f %f %f %f %f",  &score1, &score2, &score3, &score4, &score5);
    total = (score1+score2+score3+score4+score5);
    average = total/5;
    

    if (average>=90 && average<=100)
    {
        
        printf("Grade A\n");
    }
    else if (average>=80 && average<90)
    {
        
        printf("Grade B\n");
    }
    else if (average>=70 && average<80)
    {
       
        printf("Grade C\n");
    }
    else if (average>=60 && average<70)
    {
     
        printf("Grade D\n");
    }
    else if (average>=50 && average<60)
    {
       
        printf("Grade E\n");
    }
    else
        
    {
       
        printf("Grade F\n");
    }
    printf("Total =%.2f\n",total);
    printf("average =%.2f\n",average);
    
        return 0;
}
