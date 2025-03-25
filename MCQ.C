#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

void main()
{
	int marks=0,q,ans;

	clrscr();

	delay(2000);
	textcolor(5);
	cprintf("A. Who Inveted C Programming Language?");
	printf("\n\n\t");
	delay(1000);
	textcolor(3);
	cprintf("1. James Gosling");
	delay(1000);
	printf("\n\t");
	cprintf("2. Danish Ritchie");
	delay(1000);
	printf("\n\t");
	cprintf("3. Stuart Stroustrup");
	delay(1000);
	printf("\n\t");
	cprintf("4. Guido Van Rossum");
	delay(3000);
	printf("\n\n");
	textcolor(6);
	cprintf("Enter Your Choice : ");
	scanf("%d",&ans);
	if(ans==2)
	{
		marks++;
	}
	delay(3000);
	clrscr();
	textcolor(4);
	printf("\n\n");


	delay(2000);
	textcolor(5);
	cprintf("B. How many types of If available in C?");
	printf("\n\n\t");
	delay(1000);
	textcolor(3);
	cprintf("1. 2");
	delay(1000);
	printf("\n\t");
	cprintf("2. 3");
	delay(1000);
	printf("\n\t");
	cprintf("3. 4");
	delay(1000);
	printf("\n\t");
	cprintf("4. 5");
	delay(3000);
	printf("\n\n");
	textcolor(6);
	cprintf("Enter Your Choice : ");
	scanf("%d",&ans);
	if(ans==3)
	{
		marks++;
	}
	delay(3000);
	textcolor(4);
	clrscr();
	printf("\n\n");


	delay(1000);
	textcolor(5);
	cprintf("C. How many parameteres in for loop?");
	printf("\n\n\t");
	delay(1000);
	textcolor(3);
	cprintf("1. 2");
	delay(1000);
	printf("\n\t");
	cprintf("2. 1");
	delay(1000);
	printf("\n\t");
	cprintf("3. 4");
	delay(1000);
	printf("\n\t");
	cprintf("4. 3");
	delay(3000);
	printf("\n\n");
	textcolor(6);
	cprintf("Enter Your Choice : ");
	scanf("%d",&ans);
	if(ans==4)
	{
		marks++;
	}
	delay(3000);
	textcolor(4);
	clrscr();
	printf("\n\n");


	delay(2000);
	textcolor(5);
	cprintf("D. Which statement is incorrect in context to while loop?");
	printf("\n\n\t");
	delay(1000);
	textcolor(3);
	cprintf("1. Entry controlled loop");
	delay(1000);
	printf("\n\t");
	cprintf("2. Condition checks first");
	delay(1000);
	printf("\n\t");
	cprintf("3. while is a keyword");
	delay(1000);
	printf("\n\t");
	cprintf("4. There is a semicolon after while");
	delay(3000);
	printf("\n\n");
	textcolor(6);
	cprintf("Enter Your Choice : ");
	scanf("%d",&ans);
	if(ans==4)
	{
		marks++;
	}
	delay(3000);
	textcolor(4);
	clrscr();
	printf("\n\n");

	delay(2000);
	textcolor(5);
	cprintf("E. How many bytes occupied by int?");
	printf("\n\n\t");
	delay(1000);
	textcolor(3);
	cprintf("1. 2");
	delay(1000);
	printf("\n\t");
	cprintf("2. 4");
	delay(1000);
	printf("\n\t");
	cprintf("3. 8");
	delay(1000);
	printf("\n\t");
	cprintf("4. 1");
	delay(3000);
	printf("\n\n");
	textcolor(6);
	cprintf("Enter Your Choice : ");
	scanf("%d",&ans);
	if(ans==1)
	{
		marks++;
	}
	delay(3000);
	textcolor(4);
	printf("\n\n");


	cprintf("You Obtained Total %d Marks",marks);

	getch();
}

