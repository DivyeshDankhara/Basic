#include<stdio.h>
int main()
{
    float income,tax;

    printf("Enter the income :- ");
    scanf("%f",&income);

    if(0<income&&income<=2500)
    {
        tax=income*0/100;
    }
    else if(2500<income&&income<=5000)
    {
        tax=(income-2500)*10/100;
    }
    else if(5000<income&&income<=10000)
    {
        tax=250+(income-5000)*20/100;
    }
    else if(10000<income)
    {
        tax=1250+(income-10000)*30/100;
    }

    printf("Income Tax Is :-> %.2f",tax);
    
    return 0;
}