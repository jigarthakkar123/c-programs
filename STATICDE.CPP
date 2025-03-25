#include<iostream.h>
#include<conio.h>

class StaticDemo
{
		static int a;
	public:
		void setValue()
		{
			cout<<"\nEnter A : ";
			cin>>a;
		}
		void getValue()
		{
			cout<<"\nA : "<<a;
		}
};
int StaticDemo::a;
void main()
{
	clrscr();
	StaticDemo s1;
	StaticDemo s2;
	StaticDemo s3;

	s1.setValue();
	s2.setValue();
	s3.setValue();

	s1.getValue();
	s2.getValue();
	s3.getValue();
	getch();
}