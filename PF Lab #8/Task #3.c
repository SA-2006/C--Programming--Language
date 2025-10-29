#include <stdio.h>
int main()
{
	int n;
	printf("Enter the matric size: ");
	scanf("%d",&n);
	
	int arr[n][n];
	
	for(int row=0; row<n; row++)
	{
		for(int col=0; col<n; col++)
		{
			printf("Enter number: ");
			scanf(" %d",&arr[row][col]);
		}
	}
	
	for(int row=0; row<n; row++)
	{
		for(int col=0; col<n; col++)
		{
			printf("%d ",arr[row][col]);
			
		}
		printf("\n");
	}
	int sumd1=0, sumd2=0;
	if(n % 2 ==0)
	{
	for(int row=0; row<n; row++)
	{
		for(int col=0; col<n; col++)
		{
			if(row==col)
			{
				sumd1+=arr[row][col];	
			}
			if((row+col)==(n-1))
			{
				sumd2+=arr[row][col];
			}
			
		}
	}
	}
	else
	{
		for(int row=0; row<n; row++)
	{
		for(int col=0; col<n; col++)
		{
			if((row==col) && ((row !=(n/2))) && (col !=(n/2)))
			{
				sumd1+=arr[row][col];	
			}
			if(((row+col)==(n-1)) && ((row !=(n/2))) && (col !=(n/2)))
			{
				sumd2+=arr[row][col];
			}
			
		}
	}	
	}
	printf("Main diagonal sum is: %d\n", sumd1);
	printf("Secondary diagonal sum is: %d\n", sumd2);
	printf("Total sum is: %d\n", (sumd1+sumd2));
return 0;	
}
