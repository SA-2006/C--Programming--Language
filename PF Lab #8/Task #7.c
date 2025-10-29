#include <stdio.h>

int main()
{
    int n;

    // Choose matrix size
    printf("Enter matrix size (2 for 2x2 or 3 for 3x3): ");
    scanf("%d", &n);

    if (n != 2 && n != 3)
    {
        printf("Invalid size! Please enter 2 or 3.\n");
        return 0;
    }

    int A[n][n], B[n][n], C[n][n];

    // Input first matrix
    printf("\nEnter elements of first matrix (A):\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of second matrix (B):\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix to 0
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            C[i][j] = 0;

    // Matrix multiplication
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display first matrix
    printf("\nMatrix A:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Display second matrix
    printf("\nMatrix B:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // Display product matrix
    printf("\nProduct Matrix (A × B):\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
