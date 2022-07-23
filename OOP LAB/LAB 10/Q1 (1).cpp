#include<iostream>
using namespace std;
class Bank
{
	public:
	virtual void DisplayInterest()=0;
};
class HMB:public Bank
{
	int a;
	public:
	HMB(int a)
	{
		this->a=a;
	}
	void DisplayInterest()
	{
		cout<<"INTEREST OF HMB IS:"<<a<<endl;
	}

};
class HBL:public Bank
{
	int a;
	public:
	HBL(int a)
	{
		this->a=a;
	}
	void DisplayInterest()
	{
		cout<<"INTEREST OF HBL IS:"<<a<<endl;
	}

};
class MCB:public Bank
{
	int a;
	public:
	MCB(int a)
	{
		this->a=a;
	}
	void DisplayInterest()
	{
		cout<<"INTEREST OF MCB IS:"<<a<<endl;
	}

};
int main()
{
	HMB a1(4);
	HBL a2(3);
	MCB a3(2);
	a1.DisplayInterest();
	a2.DisplayInterest();
	a3.DisplayInterest();
	
}
