#include <stdio.h>
int main()
{
int span, yearly=1000, total=0;

printf("How many years degree program is it?\n");
scanf("%d",&span);

for(int i=1; i<=span; i++)
{
	yearly=yearly+yearly*0.17;
	printf("Your year %d fee is: %d\n",i,yearly);
	total=total+yearly;
}
printf("Your total fee for all years is: %d ",total);

return 0;
}
