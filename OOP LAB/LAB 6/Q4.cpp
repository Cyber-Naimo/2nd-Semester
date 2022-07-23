#include<iostream>
using namespace std;
class Item
{
	string name;
	int quantity;
	public:				// Accessor and Mutator for the field
		void setname(string name)
		{
			this->name=name;
		}
		string getname()
		{
			return name;
		}
		
		void setquan(int quantity)
		{
			this->quantity=quantity;
		}
		int getquantity()
		{
			return quantity;
		}
	
};


class Drinks:private Item
{
	int price;
	public:
		
	Drinks()
	{
		price=100;
	}

	void setquantity(int n)
	{
		setquan(n);
	}
	
	int calcualtetotalprice()
	{
		
		int total=getquantity()*price;
		int discount=total*0.05;
		total=total-discount;
		return total;
	}		
		
};		

class Bakedgoods : public Item
{
	protected:
	Bakedgoods(){ }	
	
};


class Cakes:private Bakedgoods
{
	int price;	
	public:
	
	Cakes()
	{
		setname("CAKES");	
		price=600;
	}		
	
	void setquantity(int n)
	{
		setquan(n);
	}
	
	int calcualtetotalprice()
	{
		
		int total=getquantity()*price;
		int discount=total*0.10;
		total=total-discount;	
		return total;
	}		
};

class Bread:private Bakedgoods
{
	int price;	
	public:
		
	Bread()
	{
		setname("BREAD");
		price=200;
	}
		
	void setquantity(int n)
	{
		setquan(n);
	}
	
	int calcualtetotalprice()
	{
		int total=getquantity()*price;
		int discount=total*0.10;
		total=total-discount;	
		return total;
	}	
};
int main()
{
	
	int choice,n;

	cout<<"\t\t\t\tWELCOME TO NAIMAT BAKERY:\n";
	do
	{
	
	cout<<"\n\nWHAT YOU WANT TO PURCHASE IN THE BAKERY:";
	cout<<"\nENTER 1 FOR BREAD:\nENTER 2 CAKES:\nENTER 3 FOR DRINKS\nENTER 4 FOR EXIT\n";
	cin>>choice;
	switch (choice)
	{
		case 1:
			{
				Bread a;		// bread object
				cout<<"ENTER THE  NUMBER OF QUANTITY:";
				cin>>n;
				a.setquantity(n);
				cout<<"TOTAL PRICE OF "<<n<<" BREADS ARE:"<<a.calcualtetotalprice()<<endl;	
				break;	
			}
			case 2:
			{
				Cakes b;
				cout<<"ENTER THE  NUMBER OF QUANTITY:";
				cin>>n;
				b.setquantity(n);	
				cout<<"TOTAL PRICE OF "<<n<<" CAKES ARE:"<<b.calcualtetotalprice()<<endl;
				break;	
			}
			case 3:
			{
				Drinks d;
				cout<<"ENTER THE  NUMBER OF QUANTITY:";
				cin>>n;
				d.setquantity(n);
				cout<<"TOTAL PRICE OF "<<n<<" DRINKS ARE:"<<d.calcualtetotalprice()<<endl;			
				break;	
			}
		
	}
	}while(choice!=4);
	cout<<"\nTHANK YOU FOR USING PROGRAM:";
}

	

 
