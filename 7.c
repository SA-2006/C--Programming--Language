#include <stdio.h>
#include <math.h>
int main()
{
int a,b,result;


printf("Enter two numbers to perform the arithimatic operations:\n");
scanf(" %d%d",&a,&b);


printf("The sum of both number is: %d\n", (a+b));
printf("The difference of both number is: %d\n", (a-b));
printf("The product of both number is: %d\n", (a*b));
printf("The quotient of both number is: %d\n", (a/b));
printf("The remainder of both number is: %d\n", (a%b));
return 0;
}
