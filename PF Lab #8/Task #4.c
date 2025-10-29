#include <stdio.h>
int main()
{
int arr[3][3];
printf("Enter the numbers of the array.\n");
for(int row=0; row<3; row++)
{
	for(int col=0; col<3; col++)
	{
		scanf("%d",&arr[row][col]);
	}
}

if((arr[1][0]==0) && (arr[2][0]==0) && (arr[2][1]==0))
{
	printf("This is an upper triangle.\n");
}
else if((arr[0][1]==0) && (arr[0][2]==0) && (arr[1][2]==0))
{
	printf("This is a lower triangle.\n");
}
else
{
	printf("This is neither triangle.\n");
}
	
return 0;
}
