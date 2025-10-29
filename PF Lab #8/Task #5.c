#include <stdio.h>
int main()
{

int x=4;
for(int lines=1; lines<6; lines++)
{
	for(int space=x; space>0; space--)
	{
		printf(" ");
	}
	x-=1;
	
	for(int stars=1; stars<=lines; stars++)
	{
		printf("* ");
	}
	printf("\n");
	
}
int y=4;
for(int lines=1; lines<5; lines++)
{
	for(int space=1; space<=lines; space++)
	{
		printf(" ");
	}
	
	
	for(int stars=y; stars>0; stars--)
	{
		printf("* ");
	}
	y-=1;
	printf("\n");
	
}
	
return 0;
}
