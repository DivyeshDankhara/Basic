#include <stdio.h>
int main()
{
    int a[]={10,20,30};
    int b[5];

    printf("%d\n",a[0]);
    printf("%d\n",a[1]);
    printf("%d\n",a[2]);

    for(int i=0;i<5;i++)
    {
        printf("Enter the value b[%d] : ",i);
        scanf("%d",&b[i]);
    }

    for(int i=0;i<5;i++)
    {
        printf("Value of b[%d] : %d\n",i,b[i]);
    }
    return 0;
}