#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5,total,per;

    printf("Enter The Mark Sub1 :-> ");
    scanf("%d",&sub1);
    printf("Enter The Mark Sub2 :-> ");
    scanf("%d",&sub2);
    printf("Enter The Mark Sub3 :-> ");
    scanf("%d",&sub3);
    printf("Enter The Mark Sub4 :-> ");
    scanf("%d",&sub4);
    printf("Enter The Mark Sub5 :-> ");
    scanf("%d",&sub5);

    total=sub1+sub2+sub3+sub4+sub5;
    printf("Total :-> %d\n",total);
    per=total/5;
    printf("Percentage :-> %d\n",per);

    if(per>75)
    {
        printf("%d  Grade A",per);
    }
    else if(60<per&&per<=75)
    {
        printf("%d  Grade B",per);
    }
    else if(45<per&&per<=60)
    {
        printf("%d  Grade C",per);
    }
    else if(35<=per&&per<=45)
    {
        printf("%d  Grade D",per);
    }
    else if(per<35)
    {
        printf("%d  Fail",per);
    }
    return 0;
}