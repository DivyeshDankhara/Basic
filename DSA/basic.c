#include <stdio.h>

int main()
{
    //int a=1,b=2,c;

    // AND
    // c=a&&b;
    // printf("a: %d, b: %d, c: %d",a,b,c);
    // c=a&++b;
    // printf("a: %d, b: %d, c: %d",a,b,c);
    // c=--a&&++b;
    // printf("a: %d, b: %d, c: %d",a,b,c);
    // c=--a&&b;
    // printf("a: %d, b: %d, c: %d",a,b,c);
    // c=--a&&++b;
    // printf("a: %d, b: %d, c: %d",a,b,c);
    // c=++a&&++b;
    // printf("a: %d, b: %d, c: %d",a,b,c);

    //OR
    // c=a||b;
    // printf("a: %d, b: %d, c: %d",a,b,c);
    // c=++a||b;
    // printf("a: %d, b: %d, c: %d",a,b,c);
    // c=++a||++b;
    // printf("a: %d, b: %d, c: %d",a,b,c);
    // c=--a||++b;
    // printf("a: %d, b: %d, c: %d",a,b,c);

    int a=1,b=2,c=1,d;

    // d=--a&&++b&&++c;
    // printf("a: %d, b: %d, c: %d, d: %d",a,b,c,d);
    d=--a&&++b||++c;
    printf("a: %d, b: %d, c: %d, d: %d",a,b,c,d);

} 