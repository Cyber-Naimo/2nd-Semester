#include<iostream>
using namespace std;
class Shape
{
	public:
	virtual void  calculateArea() = 0;
};
class Triangle:public Shape
{
	int l,b;
	public:
		Triangle()
		{
		}
		Triangle(int l,int b):l(l),b(b)
		{
		}
		void  calculateArea()
		{
			cout<<"AREA OF TRIANGLE IS:"<<(0.5*l*b)<<endl;
		}
};
class Rectangle:public Shape
{
	int l;
	public:
		Rectangle()
		{
		}
		Rectangle(int l):l(l)
		{
		}
		void  calculateArea()
		{
			cout<<"AREA OF RECTANGLE IS:"<<l*l<<endl;
		}
	
};
int main()
{
	Triangle t(6,5);
	t.calculateArea();
	Rectangle r(3);
	r.calculateArea();
}
