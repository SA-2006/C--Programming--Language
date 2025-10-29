#include <stdio.h>
int main()
{
    int original[3][3], transpose[3][3];

    printf("Enter elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &original[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose[j][i] = original[i][j];
        }
    }

    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", original[i][j]);
        }
        printf("\n");
    }

    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    
    int temp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
        	if (j==0)
        	{
        		temp=transpose[i][j];
        		transpose[i][j]=transpose[i][j+2];
        		transpose[i][j+2]=temp;
			}
		}
	} 
	int same=1;
	for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
        	if(original[i][j]!=transpose[i][j])
        	{
        		same=0;
        		break;
			}
		}
	} 
	if(same==1)
	{
		printf("Matric has a 90 degree rotaional symmetry.\n");
	} 
	printf("Rotated matric:\n");
	for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
        	printf("%d ", transpose[i][j]);
		}
		printf("\n");
	} 

    return 0;
}

