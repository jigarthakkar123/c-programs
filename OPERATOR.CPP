#include<conio.h>
#include<iostream.h>

class OperatorOverload
{
	int x,y,z;
	public:
		void getData(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		void show()
		{
			cout<<"\nX : "<<x<<"\tY : "<<y<<"\tZ : "<<z;
		}
		void operator-()
		{
			x=-x;
			y=-y;
			z=-z;
		}
};

void main()
{
	clrscr();
	OperatorOverload o;
	o.getData(10,20,-30);
	o.show();
	-o;
	o.show();
	getch();
}
