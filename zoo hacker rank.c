#include<stdio.h>
int main()
{
    int i,count=0;
    int count1=0;
	char s[19];
	scanf("%s",&s);
    for (i = 0; s[i]; i++)
    {
    	if(s[i]== 'z')
    	{
    		count++;
		}
		if(s[i]== 'o')
		{
			count1++;
		}
	}
	if((2*count)==count1)
	{
		printf("\nYes");
	}
	else
	{
		printf("\nNo");
	}
return 0;	
}
