#include <stdio.h>
int main()
{
    int name[6]={'s','k','i','l','l'};
    //char name1[]="skill";
    char name1[50];

    printf("Enter the string :-> ");
    gets(name1);
    puts(name1);

    int i=0;
    while (name[i]!='\0')
    {
        printf("%c",name[i]);
        i++;
    }
    
}