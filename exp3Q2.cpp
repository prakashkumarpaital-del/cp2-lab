//define a structure to store a date (day, month, year) and display it in the format DD/MM/YYYY
#include<stdio.h>
#include<string.h>
typedef struct date
	{
		int day;
		int month;
		int year;
	};
	main()
	{
		struct date;
		printf("Enter day:");
		scanf("%d",&d.day);
		printf("Enter month:");
		scanf("%d",&d.month);
		printf("Enter year:");
		scanf("%d"&d.year);
		printf("Date:%02d%02d%04d\n"d.day,d.month,d.year);
	}

