#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int i,count=0;
	printf("enter a string");
	gets(s);
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]==32)
		count++
	}
	printf("%d=length",i);
}
