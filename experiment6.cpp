//Write a program to replace spaces in a string with hyphens
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i=0,count=0;
	printf("enter a string");
	gets (str);
	for(i=0;str[i]!=0;i++)
	{
		if(str[i]==' '){
			str[i]='-';
			
		}
		
	}
	printf("after replace:",str);
}
