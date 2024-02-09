#include <stdio.h>
int main()
{
    int a[10],odd=0,even=0,i;

    for(i=0;i<10;i++)
    {
        printf("Enter the value a[%d] :-> ",i);
        scanf("%d",&a[i]);

        if(a[i]%2==1)
        {
            odd = odd + a[i];
        }
        else
        {
            even = even + a[i];
        }
    }
    printf("Sum of Odd :-> %d\n",odd);
    printf("Sum of Even :-> %d",even);

    return 0;
}