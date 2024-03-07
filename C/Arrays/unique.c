#include <stdio.h>

int main()
{
    int a[5],check=1;

    for(int i=0;i<5;i++)
    {
        printf("Enter thr number a[%d] :-> ",i);
        scanf("%d",&a[i]);
    }

    for(int i=0;i<5;i++)
    {
        check=1;
        for(int j=0;j<5;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(a[i]==a[j])
            {
                check=0;
                break;
            }
        }
        if(check==1)
        {
            printf("Unique number is :-> %d\n",a[i]);
        }
    }


    return 0;
}