#include <stdio.h>
#include <string.h>

int main()
{

	char words[100];
	printf("Enter the characters:");
	fgets(words, sizeof(words), stdin);
	
	int length = strlen(words); 
    printf("Length of string: %d\n", length);
    
    for(int i=0; i<length; i++)
    {
    	if(words[i]=='a')
    	{
    		words[i]='A';
		}
		else if(words[i]=='e')
    	{
    		words[i]='E';
		}
		else if(words[i]=='i')
    	{
    		words[i]='I';
		}
		else if(words[i]=='o')
    	{
    		words[i]='O';
		}
		else if(words[i]=='u')
    	{
    		words[i]='U';
		}
	}
	for(int i=0; i<length; i++)
    {
    	printf(" %c",words[i]);
	}
	
return 0;
}
