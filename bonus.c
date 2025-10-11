#include <stdio.h>
int main()
{
int time, fee=1000,total=0;

printf("How many years degree program is it?\n");
scanf("%d",&time);

for(int i=1; i<=time; i++)
{
	fee=fee*1.17;
	printf("Your year %d fee is: %d\n",i,fee);
	total=total+fee;
}
printf("Your total fee for all years is: %d ",total);

return 0;
}
