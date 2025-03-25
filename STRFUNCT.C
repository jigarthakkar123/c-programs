#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str1[50],str2[50],str3[50];
	int l1,x;
	clrscr();
	printf("\nEnter String 1 : ");
	gets(str1);
	//scanf("%s",str1);
	printf("\nGiven String 1 Is %s",str1);
	l1=strlen(str1);
	printf("\nLength Of String 1 Is %d",l1);

	printf("\nEnter String 2 : ");
	gets(str2);
	printf("\nGiven String 2 Is %s",str2);
	x=strcmp(str1,str2);
	//printf("\nX : %d",x);
	if(x==0)
	{
		printf("\nBoth String Are Same");
	}
	else
	{
		printf("\nBoth String Are Different");
	}
	strcpy(str3,str1);
	printf("\nAfter Copy String 3 Is %s",str3);

	strcat(str1,str2);
	printf("\nAfter Concatnation String 1 Is %s",str1);

	strrev(str1);
	printf("\nAfter Reverse String 1 Is %s",str1);
	getch();
}
