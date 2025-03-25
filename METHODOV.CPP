#include<iostream.h>
#include<conio.h>

class Base
{
	public:
		virtual void show()
		{
			cout<<"\nShow From Base Class";
		}
};
class Derived:public Base
{
	public:
		void show()
		{
			cout<<"\nShow From Derived Class";
		}
};

void main()
{
	clrscr();
	Base *ptr;
	Derived d;
	Base b;
	ptr=&d;
	ptr->show();
	ptr=&b;
	ptr->show();
	getch();
}