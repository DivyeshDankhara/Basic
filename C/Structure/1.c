#include <stdio.h>

struct Divyesh
{
    char name[10];
    int marks[3];
    float total;
    float percentage;
};

struct Divyesh student[5];

int main()
{

    for (int i = 0; i < 5; i++)
    {   
        printf("Enter the student name :-> ");
        gets(student[i].name);
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the mark subject%d :-> ",j+1);
            scanf("%d",&student[i].marks[j]);

            student[i].total += student[i].marks[j];
        }
        student[i].percentage = student[i].total/3;
        getchar();
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Student name is :-> ");
        puts(student[i].name);
        for (int j = 0; j < 3; j++)
        {
            printf("Mark of subject%d is :-> %d\n",j+1,student[i].marks[j]);
        }
        printf("Total is :-> %f\n",student[i].total);
        printf("Percentage is :-> %f\n",student[i].percentage);
    }

    
    return 0;
}