#include<stdio.h>
int main()
{
    float salary,hra,da,grosssalary;

    printf("Enter tha salary :- ");
    scanf("%f",&salary);

    if(salary<=5000)
    {
        hra=salary*0.08;
        da=salary*0.20;
    }
    else if(5000<salary&&salary<=10000)
    {
        hra=salary*0.12;
        da=salary*0.30;
    }
    else if(10000<salary&&salary<=15000)
    {
        hra=salary*0.15;
        da=salary*0.40;
    }
    else if(15000<salary)
    {
        hra=salary*0.20;
        da=salary*0.50;
    }

    printf("Salary :-> %.2f\n",salary);
    printf("HRA is :-> %.2f\n",hra);
    printf("DA is :-> %d.2f",da);

    grosssalary=salary+hra+da;

    printf("Gross Salary Is :-> %.2f",grosssalary);
    return 0;
}