#include<iostream.h>
#include<conio.h>
using namespace std;
void main()
{
	clrscr();
	int a,b,c;
	int add(int a,int b);
	cout<<" two number";
	cin>>a>>b;
	c=add(a,b);
	cout<<"addition is "<<c;
	getch();
}
int add(int x,int y)
{
	int z;
	z=x+y;
	return z;
}