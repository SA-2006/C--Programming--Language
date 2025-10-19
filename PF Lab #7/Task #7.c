#include <stdio.h>
#include <math.h>
int main()
{
	int num[5];
	int result[5];
	
	for(int i=0; i<5; i++)
	{
		printf("Enter number: ");
		scanf("%d",&num[i]);
		
		result[i]=(((num[i]+10)*2)-5);	
	}
	printf("Your numbers: \n");
	for(int i=0; i<5; i++)
	{
		printf("%d ",num[i]);
	}
	printf("\nUpdated numbers: \n");
	for(int i=0; i<5; i++)
	{
		printf("%d ",result[i]);
	}
	
return 0;
}
