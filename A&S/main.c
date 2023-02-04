#include <stdio.h>
struct student_college_detail
{
    int college_id;
    char college_name[30];
};
struct student_detail
{
    int id;
    char name[20];
    float score;
    struct student_college_detail clg_data;
}stu_data, *stu_data_ptr;
int main()
{
    struct student_college_detail stu_data = {
        1001, "Chan vertey",90.5, 2019, "ETEC CENTER"
    };
    stu_data_ptr = &stu_data;
    printf("Id is: %d\n", stu_data_ptr->id);
    printf("Name is: %s\n", stu_data_ptr->name);
    printf("Score is: %f\n",stu_data_ptr->score);
    printf("College Id is: %d\n",stu_data_ptr->clg_data.college_id);
    printf("College name: %s\n",stu_data_ptr->clg_data.college_name);
}
