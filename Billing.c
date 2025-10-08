#include <stdio.h>
int main()
{
int cxrnum,items,price,quantity,cost,i,total,highestcxrnum;
float final,sales,highest=0;

printf("How many customers do you want to process?\n");
scanf(" %d", &cxrnum);

for(i=1;i<=cxrnum;i++)	
{
	total=0;
	printf("How many items has the %d customer purchased?\n",i);
	scanf(" %d",&items);
	
	while(items>0)
	{
		cost=0;
		printf("Input the price first and then quantity of the items: \n");
		scanf(" %d%d",&price,&quantity);
		cost=price*quantity;
		total=total+cost;
		items-=1;
	}
	
	if((total>=1000) && (total<3000))
	{
		final=total*0.95;
	}
	else if((total>=3000) && (total<5000))
	{
		final=total*0.90;
	}
	else if(total>=5000)
	{
		final=total*0.80;
	}
	else
	{
		final=total;
		printf("No discount applicable at this amount.\n");
	}
	printf("Your final amount after discount is: %.2f\n",final);
	
	sales=sales+final;
	
	
	if(final>highest)
	{
		highest=final;
		highestcxrnum=i;
	}
	
}
printf("The total sales of the day are: %f\n",sales);
printf("The customer with highest bill amount of %.2f has the customer number %d\n:",highest,highestcxrnum);

}
