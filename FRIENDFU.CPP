#include<iostream.h>
#include<conio.h>

class XYZ;

class ABC
{
	int a;
	public:
		ABC()
		{
			cout<<"\nEnter A : ";
			cin>>a;
		}
		friend void max(ABC &a,XYZ &x);
};
class XYZ
{
	int x;
	public:
		XYZ()
		{
			cout<<"\nEnter X : ";
			cin>>x;
		}
		friend void max(ABC &a,XYZ &x);
};
void max(ABC &a1,XYZ &x1)
{
	if(a1.a>x1.x)
	{
		cout<<a1.a<<" Is Max";
	}
	else
	{
		cout<<x1.x<<" Is Max";
	}
}
void main()
{
	clrscr();
	ABC a1;
	XYZ x1;
	max(a1,x1);
	getch();
}
