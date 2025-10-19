#include <stdio.h>
#include <math.h>

int main()
{
 int num[10]={5,3,5,6,9,57,45,2,10,15};
 int temp;
for(int i=0; i<9; i++)
 {
 	for(int j=0; j<(9-i); j++)
 	{
	 
 	if(num[j] > num[j+1] )
	 {
	 	temp=num[j];
	 	num[j]=num[j+1];
	 	num[j+1]=temp;	
	}
}
  	
 }
 int sum, median;
 sum=num[5]+num[6];
 median= sum/2;	

int k;
for(k=0; k<10; k++)
{
	printf("%d ",num[k]);
}
printf("\nMedain is: %d",median);
 return 0;
}
