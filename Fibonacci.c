#include <stdio.h>
int main()
{
	
int length,update,i,sum;
int first=0, second=1;
	
printf("How long do you want to print the fabonacci pattern?\n");
scanf(" %d",&length);
	
	if(length<1)
	{
	printf("Invalid length inputted.Therefore, no pattern generated.\n");
	}
	else if(length==1) 
	{
	printf("%d\n",first);	
	sum=0;
	}
	else if(length==2)
	{
	printf("%d %d\n",first,second);
	sum=1;
	}
	else
	{
	printf(" %d %d",first,second);
	sum=1;
	for(i=1;i<=(length-2);i+=1)
	{
	update=first+second;
	printf(" %d ",update);
	first=second;
	second=update;
	sum=sum+update;	
	}
	}
printf("\nThe sum of the sequence is: %d\n",sum);
	
return 0;
}
