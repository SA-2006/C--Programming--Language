#include <stdio.h>

int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int combination(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int n;
    printf("Enter number of rows for Pascal's Triangle: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n - i - 1; space++)
        {
            printf("  ");
        }

        for (int j = 0; j <= i; j++)
        {
            printf("%4d", combination(i, j));
        }

        printf("\n");
    }

    return 0;
}

