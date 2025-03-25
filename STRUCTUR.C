#include<stdio.h>
#include<conio.h>

struct Student
{
	int rno,s1,s2,s3,total;
	char sname[50];
};
void main()
{
	struct Student *s1;
	clrscr();
	printf("\nEnter Student Name : ");
	gets(s1->sname);
	printf("\nEnter Roll No : ");
	scanf("%d",&s1->rno);
	printf("\nStudent Name : %s",s1->sname);
	printf("\nStudent Roll No : %d",s1->rno);
	getch();
}
