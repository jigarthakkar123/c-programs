#include<stdio.h>
#include<conio.h>

void main()
{
	double *p1,*p2,*p3,n1,n2,n3;
	clrscr();
	printf("\nEnter N1 : ");
	scanf("%lf",&n1);
	p1=&n1;
	printf("\n n1 : %lf",n1);
	printf("\n p1 : %u",p1);
	printf("\n *p1 : %u",*p1);
	printf("\nEnter N2 : ");
	scanf("%lf",&n2);
	p2=&n2;
	printf("\n n2 : %lf",n2);
	printf("\n p2 : %u",p2);
	printf("\n *p2 : %u",*p2);
	printf("\nEnter N3 : ");
	scanf("%lf",&n3);
	p3=&n3;
	printf("\n n3 : %lf",n3);
	printf("\n p3 : %u",p3);
	printf("\n *p3 : %u",*p3);
	getch();
}