#include &lt;stdio.h&gt;
int main()
{

int arr[10]={10,20,30,40,50,60,70,80,90,100};
int sub;

for (int i=0; i&lt;10;i++)
{
printf(&quot;%d &quot;,arr[i]);
}
printf(&quot;\n&quot;);
for (int i=0;i&lt;5;i++){

sub=arr[i];
arr[i]=arr[9-i];
arr[9-i]=sub;
// printf(&quot;%d &quot;,arr[i]);
}
//for (int i=5;i&lt;10;i++){
//
//
// printf(&quot;%d &quot;,arr[i]);
//}
printf(&quot;\n&quot;); int sum=0;

for(int i=0;i&lt;10;i++)
{
printf(&quot;%d &quot;,arr[i]);
sum=sum+arr[i];
}
printf(&quot;\nThe sum is: %d&quot;,sum);

return 0;
}
