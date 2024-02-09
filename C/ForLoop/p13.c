// _ _ _ _ _ * 
// _ _ _ _ _ * * 
// _ _ _ _ _ * * * 
// _ _ _ _ _ * * * * 
// _ _ _ _ _ * * * * * 
#include <stdio.h>

int main() {
    int n,i,j,k;

    printf("Enter the number of rows :-> ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
	{
        for (int j = 1; j <= n; j++) 
		{
            printf("_ ");
        }

        for (int k = 1; k <= i; k++) 
		{
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
