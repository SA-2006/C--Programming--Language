#include &lt;stdio.h&gt;
#include &lt;string.h&gt;
int main()
{
char str[100];
char ch;
int count=0;
printf(&quot;Enter name: &quot;);
fgets(str, sizeof(str),stdin);
printf(&quot;You entered: %s&quot;, str);
printf(&quot;Chracter to find: &quot;);
scanf(&quot; %c&quot;,&amp;ch);

for (int i=0; i&lt;strlen(str); i++)
{
if(ch==str[i])
{
count=count+1;
}
}
if(count!=0)
{
printf(&quot;The character %c occured %d times.&quot;,ch,count);
}
else
{
printf(&quot;No such character found&quot;);
}

return 0;
}
