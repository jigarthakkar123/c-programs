#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *f;
	char s[100];
	clrscr();
	f=fopen("tops1.txt","w");
	if(f==NULL)
	{
		printf("\nFile Not Created");
	}
	else
	{
		printf("\nFile Created");
		fprintf(f,"This is file management demo using c programming language");
	}
	fclose(f);

	f=fopen("tops1.txt","a");
	fprintf(f,"\nThis file is now appended.\nThis is another line.");
	fclose(f);

	f=fopen("tops1.txt","r");
	//fgets(s,100,f);
	//printf("\n%s",s);
	while((fgets(s,100,f)!=NULL))
	{
		printf("\n%s",s);
	}
	fclose(f);
	f=fopen("tops2.txt","w");
	fprintf(f,"%s %d %d %d %d %d %lf","Jigar",1,70,70,70,210,70.0);
	fclose(f);
	getch();
}