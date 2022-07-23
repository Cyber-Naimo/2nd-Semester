#include<iostream>
using namespace std;
class Base
{
	private:
		int privatent;
	protected:
		int protecdident;
	public:
		int publicint;
		void setprivatent(int x)
		{
			privatent=x;	
		}
		int getprivatent()
		{
			return privatent;
		}
		void setprotectidint(int x)
		{
			protecdident=x;	
		}
		int getprotecdident()
		{
			return protecdident;
		}
		void setpublicint(int x)
		{
			publicint=x;	
		}
		int getpublicint()
		{
			return publicint;
		}
		
}; 
class PrivateChild: private Base
{
	public:
	void setprivatedata(int x)
	{
		setprivatent(x);
	}
	int getprivatedata()
	{
		cout<<"\nPRIVATENT:"<<getprivatent()<<endl;
	}
	
};
class ProtectedChild: protected Base
{
	public:
	void setprotecteddata(int x)
	{
		setprotectidint(x);
	}
	int getprotecteddata()
	{
		cout<<"PROTECTEDTIDINT:"<<getprotecdident()<<endl;
	}
};
class PublicChild:public Base
{
	
};
int main()
{
	int privatent,protect,publicint;
	PrivateChild p1;
	ProtectedChild p2;
	PublicChild p3;
	
	cout<<"ENTER THE VALUE OF PRIVATENT:\n";
	cin>>privatent;
	p1.setprivatedata(privatent);
	cout<<"ENTER THE VALUE OF PROTECTED:\n";
	cin>>protect;
	p2.setprotecteddata(protect);
	cout<<"ENTER THE VALUE OF PUBLICINT:\n";
	cin>>publicint;
	p3.setpublicint(publicint);
	p1.getprivatedata();
	p2.getprotecteddata();
	cout<<"PUBLIC:"<<p3.getpublicint()<<endl;
	
}
