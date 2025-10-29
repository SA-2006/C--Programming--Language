#include <stdio.h>
int main()
{
	int space=4;
	for(int row=1; row<=5; row++)
	{
		for(int x=space; x>0; x--)
		{
			printf(" ");
		}
		space-=1;
		for(int num=1; num<=row; num++)
		{
			printf("%d",num);
		}
		printf("\n");
		
	}

return 0;
}
