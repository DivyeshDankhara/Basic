#include <stdio.h>
int main()
{
    int i,j,a[3],sum=0;

    for(i=0;i<5;i++)
    {
        printf("Student %d details\n",i+1);
        for(j=0;j<3;j++)
        {
            printf("Enter the mark Student %d and Sub %d :-> ",i+1,j+1);
            scanf("%d",&a[i]);

            sum = sum + a[i];
        }
        printf("[1] Total :-> %d\n",sum);
        float per = sum/3;
        printf("[2] Percentage is :-> %.2f\n",per);

        if(per<=100&&per>90)
        {
            printf("[3] Grade is :- A\n");
        }
        else if(per<=90&&per>70)
        {
            printf("[3] Grade is :- B\n");
        }
        else if(per<=70&&per>50)
        {
            printf("[3] Grade is :- C\n");
        }
        else if(per<=50&&per>30)
        {
            printf("[3] Grade is :- D\n");
        }
        else if(per<=30&&per>=0)
        {
            printf("[3] Grade is :- Fail\n");
        }

        printf("                                 \n");
        printf("---------------------------------\n");
        printf("                                 \n");

        sum=0;
        per=0;
    
    }
    return 0;
}