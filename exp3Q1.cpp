//Write a program to define a structure for a student containing fields for name, rollnumber and marks.input and display
#include<stdio.h>
#include<string.h>
	struct student
	{
		char name[50];
		int roll;
		float marks;
	};
	main()
	{
		student s;
		printf("Enter student details");
		gets(s.name);
		scanf("%s\n%d\n%f",&s.name,&s.roll,&s.marks);
		printf("Name:%s\nRoll:%d\nMarks:%f"s.name,s.roll,s.marks);
    }

