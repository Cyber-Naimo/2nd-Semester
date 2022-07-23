#include<iostream>
using namespace std;
class Store
{
	protected:
		int final_Bill;
	Store()
	{
	}
	Store(int a):final_Bill(a)
	{
	}
	virtual void FinalBill()=0;
};
class ImtiazStore:public Store
{
	 float discount=0.07;
	public:
		ImtiazStore(int a):Store(a)
		{
			discount=final_Bill*discount;
			final_Bill=final_Bill-discount;
		}
		void FinalBill()
		{

			cout<<"Final Bill of Imtiaz Store:"<<final_Bill<<endl;
		}
};
class BinHashim:public Store
{
	 float discount=0.05;
	public:
		BinHashim(int a):Store(a)
		{
			discount=final_Bill*discount;
			final_Bill=final_Bill-discount;
		}
		void FinalBill()
		{
			
			cout<<"Final Bill of Imtiaz Store:"<<final_Bill<<endl;
		}
		
};
int main()
{
	ImtiazStore a1(500);
	BinHashim a2(1000);
	a1.FinalBill();
	a2.FinalBill();
}
