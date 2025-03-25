#include<iostream.h>
#include<conio.h>

class Base
{
	public:
		virtual void show()=0;
};
class Derived:public Base
{
	public:
	void show()
	{
		cout<<"\nShow Defined In Derived Class";
	}
	Derived()
	{
		cout<<"\nDerived's Constructor Called";
	}
};
void main()
{
	clrscr();
	Derived d;
	d.show();
	getch();
}