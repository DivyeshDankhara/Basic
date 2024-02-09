#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    char name[20];
    float sub1;
    float sub2;
    float sub3;
    float total;
    float per;
};

struct Student s[10];

int main()
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter Id :-> ");
        scanf("%d",&s[i].id);
        getchar();
        printf("Enter Name :-> ");
        gets(s[i].name);
        printf("Enter mark Subject 1 :-> ");
        scanf("%f",&s[i].sub1);
        printf("Enter mark Subject 2 :-> ");
        scanf("%f",&s[i].sub2);
        printf("Enter mark Subject 3 :-> ");
        scanf("%f",&s[i].sub3);

        s[i].total=s[i].sub1+s[i].sub2+s[i].sub3;
        s[i].per=(s[i].total*100)/300;
    }

    for(i=0;i<3;i++)
    {
        printf("Id :-> %d\n",s[i].id);
        printf("Name :-> %s\n",s[i].name);
        printf("Total :-> %.2f\n",s[i].total);
        printf("Percentage :-> %.2f\n",s[i].per);
    }
}