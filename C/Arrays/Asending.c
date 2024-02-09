#include <stdio.h>
int main()
{
    int n,i,j,c=0,a[50];

    printf("Enter the rows :-> ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("a[%d] :-> ",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]<a[j])
            {
                c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }

    printf("------------\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d] :-> %d\n",i,a[i]);
    } 
    return 0;
}