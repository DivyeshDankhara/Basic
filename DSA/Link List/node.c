#include <stdio.h>

struct node
{
    int data;
    char ch;
    struct node *ptr;
};

int main()
{
    struct node a,b,c;

    a.data = 10;
    a.ch = 'A';
    a.ptr = NULL;

    b.data = 20;
    b.ch = 'a';
    b.ptr = NULL;

    c.data = 30;
    c.ch = 'B';
    c.ptr = NULL;

    printf("A data:-> %d, ch:-> %c\n",a.data,a.ch);
    printf("B data:-> %d, ch:-> %c\n",b.data,b.ch);
    printf("C data:-> %d, ch:-> %c\n",c.data,c.ch);

    a.ptr = &b;
    printf("B data:-> %d, ch:-> %c\n",a.ptr->data,a.ptr->ch);

    b.ptr = &c;
    printf("C data:-> %d, ch:-> %c\n",b.ptr->data,b.ptr->ch);

    c.ptr = &a;
    printf("A data:-> %d, ch:-> %c\n",c.ptr->data,c.ptr->ch);
}