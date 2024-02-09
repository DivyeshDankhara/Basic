#include <stdio.h>
int main()
{
    float s1,s2,s3,total,per;

    printf("Enter the mark Subject 1 :-> ");
    scanf("%f",&s1);
    printf("Enter the mark Subject 2 :-> ");
    scanf("%f",&s2);
    printf("Enter the mark Subject 3 :-> ");
    scanf("%f",&s3);

    total = s1 + s2 + s3;

    per = (total*100)/300;

    printf("Total is :-> %f\n",total);
    printf("Percentage is :-> %f",per);

    return 0;
}