#include <stdio.h>
int main()
{
	int even=0, odd=0, pos=0, neg=0, zero=0;
	int arr[3][3];
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("Enter number: \n");
			scanf("%d",&arr[i][j]);
			
			if(arr[i][j] == 0)
			{
				zero+=1;
				even+=1;
			}
			else if(arr[i][j] > 0)
			{
				pos+=1;
				if(arr[i][j] % 2 == 0)
				{
					even+=1;
				}
				else
				{
					odd+=1;
				}
			}
			else
			{
				neg+=1;
				if(arr[i][j] % 2 == 0)
				{
					even+=1;
				}
				else
				{
					odd+=1;
				}
			}
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
	
	printf("Positive: %d\n",pos);
	printf("Negative: %d\n",neg);
	printf("Zero: %d\n",zero);
	printf("Odd: %d\n",odd);
	printf("Even: %d\n",even);
	
return 0;
}
