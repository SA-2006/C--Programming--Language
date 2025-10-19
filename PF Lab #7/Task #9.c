#include <stdio.h>
#include <string.h>

int main()
{
	int arr1[5];
	int arr2[5];
	int merge[10];
	
	printf("Enter the first survey: \n");
	for(int i=0; i<5; i++)
	{
		scanf("%d",&arr1[i]);	
	}
	
	printf("Enter the second survey: \n");
	for(int i=0; i<5; i++)
	{
		scanf("%d",&arr2[i]);	
	}
	
	for(int i=0; i<10; i++)
	{
		if(i<5)
		{
			merge[i]=arr1[i];
		}
		else
		{
			merge[i]=arr2[i-5];
		}
	}
	printf("Your new array is: \n");
	for(int i=0; i<10; i++)
	{
		printf("%d ",merge[i]);	
	}
return 0;
}
