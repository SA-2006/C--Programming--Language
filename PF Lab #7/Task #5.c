#include <stdio.h>
int main()
{
	int total=0, highest=0, lowest=0, hindex=0, lindex=0, sum=0, avg=0;
	printf("Enter the number of students:\n");
	scanf("%d",&total);
	
	int marks[total];
	
	for(int i=0; i<total; i++)
	{
		printf("Enter marks: \n");
		scanf(" %d",&marks[i]);
		sum=sum+marks[i];
		if(i==0)
		{
			highest=marks[0];
			lowest=marks[0];
			hindex = lindex = 0;
		}
		
		if(marks[i]>highest)
		{
			highest=marks[i];
			hindex=i;
		}
		else if(marks[i]<lowest)
		{
			lowest=marks[i];
			lindex=i;
		}
	
		
	}
	printf("The grades of the class are: \n");
	for(int i=0; i<total; i++)
	{
		printf("%d student scored %d. \n",(i+1),marks[i]);
	}
	avg=sum/total;
	printf("The highest grade is: %d of student number %d\n",highest,(hindex+1));
	printf("The lowest grade is: %d of student number %d\n",lowest,(lindex+1));
	printf("Average grade is: %d\n",avg);
	int upd;
	printf("Enter lowest students marks to modify:\n");
	scanf("%d",&upd);
	marks[lindex]=upd;
	
	printf("Updated grades are as follows: \n");
	for(int i=0; i<total; i++)
	{
		printf("%d marks are %d\n",(i+1),marks[i]);
		
	}
	
return 0;
}
