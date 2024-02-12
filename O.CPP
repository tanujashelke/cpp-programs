#include<iostream.h>
#include<conio.h>
class number
{
int x;
int y;
public:
void accept(int a,int b)
{
x=a;
y=b;
}
void display()
{
cout<<"x="<<x<<"\n";
cout<<"y="<<y<<"\n";
}
void operator -()
{
x=-x;
y=-y;
}
};
int main()
{
number n;
clrscr();
n.accept(18,67);
n.display();
-n;
cout<<"\n after unary  minus handled variablee are:"<<"\n";
n.display();
getch();
return 0;
}
