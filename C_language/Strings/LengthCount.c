#include <stdio.h>
int main()
{
    int len=0,i;
    char str[50];

    printf("Enter the string :-> ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }
    printf("Length is :-> %d",len);
    return 0;
}