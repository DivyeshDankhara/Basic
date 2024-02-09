#include <stdio.h>
int main()
{
    int i,len,a;
    char str[100];

    printf("Enter string you want reverse :-> ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }

    //printf("%d\n",len);

    for(i=0;i<len/2;i++)
    {
        a = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = a;
    }

    for(i=0;i<len;i++)
    {
        printf("%c",str[i]);
    }

    return 0;
}