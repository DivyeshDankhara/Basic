#include <stdio.h>
int main()
{
    int i,len;
    char str[100],str1[100];

    printf("Enter the String :-> ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }
    //printf("%d\n",len);

    for(i=0;str[i]!='\0';i++)
    {
        str1[len-1-i] = str[i];
    }

    for(i=0;i<len;i++)
    {
        printf("%c",str1[i]);
    }

    return 0;
}