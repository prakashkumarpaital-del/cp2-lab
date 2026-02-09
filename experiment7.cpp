//Develop a program to count occurrences of a specific character in a string. 
#include<stdio.h>
#include<string.h>
int main() {
    char str[100],target;
    int i,count=0;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character to count:");
    scanf("%c",target);
    for(i=0;str[i]!=0;i++)
    {
    	if(str[i]==target)
    	{
    		count++;
    	}
    }
    printf("Occurrence of %c is:%d/n",count);
    
}

