#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()
{
	char *s1;
	int i;
	clrscr();
	printf("\nEnter String : ");
	gets(s1);
	printf("\nString 1 : %s",s1);
	for(i=0;i<13;i++)
	{
		printf("\ns1[%d] : %c : %u",i,s1[i],&s1[i]);
	}
	getch();
}