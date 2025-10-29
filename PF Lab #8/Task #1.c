#include <stdio.h>
int main()
{
	int arr[3][3];
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("Enter number: \n");
			scanf("%d",&arr[i][j]);
		}
	}
printf("Your array input.\n");	
for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
int arrt[3][3];	
for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			arrt[i][j]=arr[j][i];
		}
	}
		
printf("Your new array is:\n");	
for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d ",arrt[i][j]);
		}
		printf("\n");
	}

for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			if(arr[i][j]!=arrt[i][j])
			{break;
				printf("Not symmetric.");
					
			}
			
		}
		printf("\n");
	}
	printf("Symmetric.");
	


return 0;
}
