#include<iostream>
using namespace std;
class Gift							// PART A	
{
	protected:
	string CatId;
	bool taxApplicable;
	int price,quantity,tax;			// PART B
	public:
	static int Applicabletax;			//as per need variable
	static int revenue;
		Gift()
		{
		}
		Gift(int price,int quantity):price(price),quantity(quantity)
		{
		}
		void setCatId(string id)			// PART B
		{
			CatId=id;
		}
		string getCatId()
		{
			return CatId;
		}
		void setprice(int price)
		{
			this->price=price;
		}
		int getprice()
		{
			return price;
		}
		void setquantity(int quantity)
		{
			this->quantity=quantity;
		}
		int getquantity()
		{
			return quantity;
		}
		void setrevenue(int revenue)
		{
			this->revenue=revenue;
		}
		int getrevenue()
		{
			return revenue;
		}
		virtual int Bill()=0;
		
};
int Gift :: revenue=0;						// initial profit
int Gift::Applicabletax =0;					// INITIAL TAX

class Flower: virtual public Gift					// PART A			
{
	string Floral_Type;
	int Flower_Bill;				// PART B
	public:			
	static int stock;
		Flower()
		{	
		}
		
		Flower(int quantity,string type)		// PART B
		{
			setFloraltype(type);					//can be Rose, Tulip or Daisy.
			setquantity(quantity);
			setCatId("FL1");
			setprice(50);
			stock=stock-quantity;				//	PART F
			revenue+=getquantity()*getprice();			//	PART F
			setrevenue(revenue);	
			Flower_Bill=getquantity()*getprice();	
		}
		// copy constructor
		Flower(Flower &f)						// PART G
		{
			
			setFloraltype(f.getFloraltype());
			setquantity(f.getquantity());
			setCatId(f.getCatId());
			setprice(f.getprice());
			stock=stock-f.getprice();
			revenue+=f.getquantity()*f.getprice();
			
		}
		void setFloraltype(string type)
		{
			Floral_Type=type;
		}
		string getFloraltype()
		{
			return Floral_Type;
		}
		int Bill()					//PART C
		{
			return Flower_Bill;
		}
};
int Flower:: stock=100;			// initial no of flowers

class Perfume:virtual public Gift									// PART A
{
	string Brand;
	int Perfume_Bill;						// PART B
	const int tax= 0.07;
	public:
		static int stock;
		Perfume()
		{
		}
		Perfume(int quantity,string Brand)			// PART B
		{
			setBrand(Brand);
			setquantity(quantity);
			setCatId("PF1");
			if(Brand=="GUCCI")
			{
				setprice(1200);
			}
			else if(Brand=="VERSACE")
			{
				setprice(1100);
			}
			else if(Brand=="CHANEL")
			{
				setprice(950);
			}
			stock=stock-quantity;				//	PART F
			revenue=getquantity()*getprice();		//	PART F
			setrevenue(revenue);
			Applicabletax=Applicabletax+(0.07*getrevenue());
			Perfume_Bill=getquantity()*getprice();
		}
		void setBrand(string brand)
		{
			Brand=brand;
		}
		string getBrand()
		{
			return Brand;
		}
		
		int Bill()				//PART C
		{
			
			return Perfume_Bill;
		}
};
int Perfume:: stock=100;				// initial no of perfume

class ChocolateCake:virtual public Gift						// PART A	
{
	string MsgOnCake;				// PART B
	int weight;					// in pounds
	int Cake_Bills;				// variable as per need
	const int tax= 0.04;
	public:
	static int stock;
		ChocolateCake()
		{
		}
		ChocolateCake(int quantity,string message,int weight)				// PART B
		{
			setMsgOnCake(message);
			setquantity(quantity);
			setCatId("CK1");
			setprice(700);
			setweight(weight);
			stock=stock-quantity;							//	PART F
			revenue+=getquantity()*getprice()*getweight();		//PART F
			setrevenue(revenue);
			Applicabletax=Applicabletax+(0.04*getrevenue());
			Cake_Bills=getquantity()*getprice()*getweight();
		}
		void setMsgOnCake(string message)
		{
			MsgOnCake=message;
		}
		string getMsgOnCake()
		{
			return MsgOnCake;
		}
		void setweight(int w)
		{
			weight=w;
		}
		int getweight()
		{
			return weight;
		}
		int Bill()				//PART C
		{	
			return Cake_Bills;
		}
};
int ChocolateCake::stock=100;

class HappyBundle:public Flower,public Perfume,public ChocolateCake					// PART A
{

	public:
		int bill;
		HappyBundle()				// PART B
		{
		}
		HappyBundle(string Floral_Type,string Brand):Flower (2,Floral_Type),Perfume(2,Brand)		// PART B
		{
			setCatId("HAPPY BUNDLE DEAL 1");
			bill=Flower::Bill()+Perfume::Bill();
			
		}
		HappyBundle(string Floral_Type,string MsgOnCake,int weight):Flower (2,Floral_Type),ChocolateCake(2,MsgOnCake,weight)
		{
			setCatId("HAPPY BUNDLE DEAL 2");
			bill=Flower::Bill()+ChocolateCake::Bill();
		}
		HappyBundle(string MsgOnCake,int weight,string Brand):ChocolateCake (2,MsgOnCake,weight),Perfume (2,Brand)
		{
		
			setCatId("HAPPY BUNDLE DEAL 3");
			bill=ChocolateCake::Bill() + Perfume::Bill();
		}
		int Bill()				//PART C
		{	
			return bill;
		}
	int operator>(const HappyBundle &ob1)					// > operator overloading			PART E
			{
				int temp;
				temp = bill > ob1.bill? bill : ob1.bill;			// condition for finding max bill
				return temp;
			}
			
};

class NineTails				// PART H
{
	string contact,adress,email;
	int tax,revenue;
	
	public:
		NineTails()
		{
			tax=Gift::Applicabletax;
			revenue=Gift::revenue;
			contact="0316260****";
			adress="348 Block C";
			email="k214540@nu.edu.pk";
		}
		friend class TaxationDepartment;
		
};
class TaxationDepartment		//   PART H
{
	NineTails n;
	public:
	void TaxCalculation()
	{
		cout << "APPLICABLE TAX:" << n.tax << endl;
		cout << "REVENUE: " << n.revenue << endl;			// PART F
	}
};

int main ()
{
			int choice,ch,quantity,weight;
			string message;
			
			HappyBundle deal1("ROSE","GUCCI");
			HappyBundle deal2("ROSE","NAIMAT",1);
			HappyBundle deal3("HAPPY BIRTHDAY NAIMAT",2,"GUCCI");
			
/*			    Gift *g=new Perfume (3,"GUCCI");					PART D
				cout << "Perfume: " << g->Bill() << endl;			*/
				

/*				int deal4;							//PART E			
				deal4=deal1>deal2;
				if(deal4>deal3.Bill())
				{
					cout<<"DEAL 2 GIVE MORE PROFIT THEN OTHERS:";
				}
				else
				{
					cout<<"DEAL 3 GIVE MORE PROFIT THEN OTHERS:";
					
				}				*/							

	cout<<"\n\n\t\t\t\t\tWELCOME TO THE NAIMAT GIFT CENTER:\n";
	while(choice!=5)
	{
	
	cout<<"\n\t\t\t\t1)-ENTER 1 FOR PURCHASING CAKE:\n\t\t\t\t2)-ENTER 2 FOR PURCHASING FLOWERS\n\t\t\t\t3)-ENTER 3 FOR PURCHASING PEFRFUME:\n\t\t\t\t4)-ENTER 4 FOR HAPPY BUNDLE:\n\t\t\t\t5)-ENTER 5 FOR EXIT:\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
				cout<<"HOW MANY CAKES YOU WANT?\n";
				cin>>quantity;
				cout<<"ENTER THE MESSAGE YOU WANT TO WRITE:\n";
				cin>>message;
				cout<<"ENTER WEIGHT IN POUNDS OF CAKE:";
				cin>>weight;
				ChocolateCake c(quantity,message,weight);
				cout<<endl<<"YOUR BILL IS:"<<c.Bill();
				break;
			}
		case 2:
			{
				cout<<"ENTER THE QUANTITY OF FLOWERS YOU WANT?";
				cin>>quantity;
				cout<<"ENTER FLOWER NAME:";
				cin>>message;
				Flower f(quantity,message);
				cout<<endl<<"YOUR BILL IS:"<<f.Bill();
				break;				
			}
		case 3:
			{
				cout<<"ENTER THE PERFUME BRAND NAME:\n";
				cin>>message;
				cout<<"ENTER THE QUANTITY OF PERFUMES YOU WANT?";
				cin>>quantity;
				Perfume p(quantity,message);
				cout<<endl<<"YOUR BILL IS:"<<p.Bill();
				break;
			}
		case 4:
			{
				cout<<"\n\n\t\t\tTHERE ARE 3 DEALS IN HAPPY BUNDLE:\n\n";
				cout<<"\t\t\t\t1)-ENTER 1 FOR PURFUME AND FLOWER BUNDLE:\n\t\t\t\t2)-ENTER 2 FOR FLOWER AND CHOCOLATE BUNDLE:\n\t\t\t\t3)-ENTER 3 FOR PERFUME AND CHOCOLATE BUNDLE:\n";
				cin>>ch;
				if(ch==1)
				{
				
					cout<<endl<<"DEAL 1 BILL IS:"<<deal1.Bill();
				}
				else if(ch==2)
				{
				
					cout<<endl<<"DEAL 2 BILL IS:"<<deal2.Bill();
				}
				else if (ch==3)
				{
					
					cout<<endl<<"DEAL 3 BILL IS:"<<deal3.Bill();
					
				}
				else
				{
					cout<<"\nTHERE ARE NOT MORE DEALS AVAILABLE COME BACK LATER:";
				}
				break;
			}
		default:
			{
				cout<<"\nTHANK YOU FOR USING OUR SERVICE:";
			}
			
	}
}

}


