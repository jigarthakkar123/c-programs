#include<iostream.h>
#include<conio.h>

class Student
{
	int rno;
	char *sname;
	public:
		Student()
		{
			cout<<"\nEnter Roll No : ";
			cin>>rno;
			cout<<"\nEnter Student Name : ";
			cin>>sname;
		}
		Student(int r,char *s)
		{
			rno=r;
			sname=s;
		}
		Student(Student &s)
		{
			rno=s.rno;
			sname=s.sname;
		}
		void display()
		{
			cout<<"\nRoll No : "<<rno;
			cout<<"\nStudent Name : "<<sname;
		}
};
void main()
{
	clrscr();
	Student s1;
	s1.display();
	Student s2(2,"Ajay");
	s2.display();
	Student s3(s2);
	s3.display();
	getch();
}