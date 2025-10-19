#include <stdio.h>
#include <string.h>

int main()
{
	int length;
	printf("Enter your array length: \n");
	scanf("%d",&length);
	
	int arr[length];
	printf("Enter your data: \n");
	for(int i=0; i<length; i++)
	{
		scanf("%d",&arr[i]);	
	}
	
	for(int i=0; i<length; i++)
	{
		printf("%d ",arr[i]);	
	}
	int index, num;
	printf("\nEnter the element index and modified number: \n");
	scanf("%d%d",&index,&num);
	
	arr[index]=num;
	
	printf("Your modified data is as follows: \n");
	for(int i=0; i<length; i++)
	{
		printf("%d ",arr[i]);	
	}	
		
return 0;
}	
