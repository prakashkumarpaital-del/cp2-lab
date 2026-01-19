#include <stdio.h>
#include <string.h>
int main()
 { 
    char s[20];
    int i,count=0;
    printf("enter a string\n");
    gets(s);
    for(i=0;s[i]!=0;i++)
	{
    count++;
    }
    printf("length=%s",s);
}

