#include<iostream.h>
#include<conio.h>

void main()
{
	int a,b,x;
	clrscr();
	cout<<"\nEnter A : ";
	cin>>a;
	cout<<"\nEnter B : ";
	cin>>b;
	x=(a>b)?a:b;
	cout<<"\nMax Value Is : "<<x;
	getch();
}
