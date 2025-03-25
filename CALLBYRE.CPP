#include<iostream.h>
#include<conio.h>

void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

void main()
{
	int a,b;
	clrscr();
	cout<<"\nEnter A : ";
	cin>>a;
	cout<<"\nEnter B : ";
	cin>>b;
	cout<<"\nBefore Swap A : "<<a<<" & B : "<<b;
	swap(&a,&b);
	cout<<"\nAfter Swap A : "<<a<<" & B : "<<b;
	getch();
}