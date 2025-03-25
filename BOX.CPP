#include<iostream.h>
#include<conio.h>

class Box
{
	double width,height,depth;
	public:
		Box()
		{
			cout<<"\nDefault Constructor Called\n";
			cout<<"\nEnter Width : ";
			cin>>width;
			cout<<"\nEnter Height : ";
			cin>>height;
			cout<<"\nEnter Depth : ";
			cin>>depth;
		}
		Box(double w,double h,double d)
		{
			cout<<"\nParameterized Constructor Called\n";
			width=w;
			height=h;
			depth=d;
		}
		Box(Box &b)
		{
			cout<<"\nCopy Constructor Called";
			width=b.width;
			height=b.height;
			depth=b.depth;
		}
		void volume()
		{
			cout<<"\nVolume : "<<width*height*depth;
		}
		~Box()
		{
			cout<<"\nDestructor Called";
		}
};
void main()
{
	clrscr();
	Box b1;
	b1.volume();
	Box b2(4,5,6);
	b2.volume();
	Box b3(b2);
	b3.volume();
	getch();
}


