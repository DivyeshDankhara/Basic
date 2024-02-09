#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,len=0,len1=0;
    char s1[100],s2[100],s3[100];

    printf("Entre the String 1 :-> ");
    gets(s1);
    printf("Enter the String 2 :-> ");
    gets(s2);

    for(i=0;s1[i]!='\0';i++)
    {
        len++;
    }

    i=0;
    while (s1[i]!='\0')
    {
        s3[i] = s1[i];
        j=0;
        while (s2[j]!='\0')
        {
            s3[len + j] = s2[j];
            ++j;
        }
        ++i;
    }

    puts(s3);

    return 0;
}