#include<iostream.h>
#include<conio.h>

class A
{
	public:
		inline int cube(int x)
		{
			return x*x*x;
		}
};
void main()
{
	int x;
	clrscr();
	A a1;
	cout<<"\nEnter Value Of X : ";
	cin>>x;
	cout<<"\nCube Of "<<x<<" Is : "<<a1.cube(x);
	getch();
}