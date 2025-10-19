#include &lt;stdio.h&gt;
int main()
{

int num[10]={1,2,3,4,5,6,7,8,9,10};
int sumeven=0, sumodd=0, counteven=0, countodd=0;
for (int i=0;i&lt;10;i++)
{
if((num[i] % 2) == 0)
{
counteven=counteven+1;
sumeven=sumeven+num[i];
}
else if((num[i] % 2) == 1)
{
countodd=countodd+1;
sumodd=sumodd+num[i];
}

}
if (counteven==0)
{
printf(&quot;No even number n=inputted.\n&quot;);
}
else
{
printf(&quot;Even sum is: %d\n&quot;,sumeven);
}
if (countodd==0)
{
printf(&quot;No odd number n=inputted.\n&quot;);
}

else
{
printf(&quot;Odd sum is: %d\n&quot;,sumodd);
}

return 0;
}
