#include <stdio.h>

int main()
{
    float length,area;

    printf("Enter the side of the square :-> ");
    scanf("%f",&length);

    area = length * length;

    printf("The area of the square is :-> %f",area);

    return 0;
}