#include<iostream>
using namespace std;
class Cal
{
	public:
		int one;
		int two;
		
		Cal(int one,int two):one(one),two(two){
		}
		int  ADD()
		{
			return (one+two);
		}
};
int main()
{

	Cal c(1,2);
	cout<<"SUM IS:"<<c.ADD();
}
