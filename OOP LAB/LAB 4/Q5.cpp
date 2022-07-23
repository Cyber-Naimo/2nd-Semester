#include<iostream>
using namespace std;

class Member
{
	int id;
	string name;
	public:
		void setid(int ID)
		{
			id=ID;
		}
		int getid()
		{
			return id;
		}
		void setname(string member)
		{
			name=member;
		}
		
};
class BookType
{
	private:
	string title;
	string publisher;
	int ISBN;
	int price;
	public:
		void setbookname(string name)
		{
     		title=name;
		}
		void getbookname()
		{
			cout<<"\nBOOK NAME:"<<title;
		}
		void setISBN(int num)
		{
			ISBN=num;
		}
		void showISBN()
		{
			cout<<"\nBOOK ISBN NO:"<<ISBN;
		}
		
		int getISBN()
		{
			return ISBN;
		}
			void setprice(int cost)
		{
			price=cost;
		}
	
		int getprice()
		{
			return price;
		}
		void searchbook(string nam)
		{
			if(title==nam)
			{
				cout<<"\nDATA FOUNDED";
				cout<<"\nBOOK NAME:"<<title;
			}
			
		}
		void searchbook_id(int id)
		{
			if(ISBN==id)
			{
				cout<<"\nDATA FOUNDED";
				cout<<"\nBOOK NAME:"<<title;
				cout<<"\nBOOK ID:"<<ISBN;
			}
		}

};

class MemberType 
{
	   private:	   	
       string name;
       int ID;
       int Amount_spent;
       
       public:	
       
       	void set_Id(int n) 
		{ 
		       ID = n;
		}
		int get_Id() 
		{  
		       return ID;
		}
        void set_name(string nam)
		{
		       name=nam;
		}
		string get_name() 
		{ 
		       return name;
		}
	
		
	
};



int main()
{
	BookType b;
	MemberType m;
	Member me;
	int id,quantity,isbn,price,new_price=0,bonus,money,choice,count=0,counetr=1,ne_price=0;;
	float average;
	string name,publisher,book,a,ans;
	cout<<"\t\t\t*******************WELCOME TO BOOK STORE:************************\n";
	
	cout<<"\nARE YOU A MEMBER OF BOOK STORE:";
	cin>>ans;
	cout<<"\nYOU HAVE TO PAY $10 DOLLAR:PAY 10 DOLLAR:";
	cin>>money;
	
	
	if(ans=="yes"||ans=="YES"&& money==10)
	{
		cout<<"\nENTER YOUR NAME:";
		cin>>name;
		me.setname(name);
		cout<<"\nENTER YOUR ID:";
		cin>>id;
		me.setid(id);
		
		do 
		{
		
			cout<<"\nENTER BOOK NAME:";
			cin>>book;
			b.setbookname(book);
			cout<<"\nENTER BOOK ISBN NUMBER:";
			cin>>isbn;
			b.setISBN(isbn);
			price=200;
			bonus=0.05*price;
			price=price-bonus;
			cout<<"\nYOU GET A DISCOUNT OF 5% YOU HAVE TO PAY:"<<price;
			new_price+=price;
			count+=1;
			cout<<"\nDO YOU WANT TO PURCHASE MORE:";
		    cin>>a;	
		    
		    
		
		}while(a=="yes");
		
			if(count==11)
			{
				average=new_price/10;
				cout<<"\nAVERAGE OF BOOK SELL IS:"<<average;
				price=0;
			}
		
		
	}
	else
	{
		cout<<"\nENTER YOUR NAME:";
		cin>>name;
		m.set_name(name);
		cout<<"\nENTER YOUR ID:";
		cin>>id;
		m.set_Id(id);
		
		do
		{
			int counter=1;
			cout<<"\nENTER BOOK NAME:";
			cin>>book;
			b.setbookname(book);
			cout<<"\nENTER BOOK ISBN NUMBER:";
			cin>>isbn;
			b.setISBN(isbn);
			price=200*counter;	
			cout<<"\n YOU HAVE TO PAY:"<<price;	
			ne_price+=price;
			cout<<"DO YOU WANT TO PURCHASE MORE BOOK:";
			cin>>a;
		}while(a=="yes");
		
	}
	do
	{
		cout<<"\t\t\t\n\n\nENTER 1 FOR ADD BOOK:\nENTER 2 FOR CHECK NUMBER OF BOOKS BOOK:\nENTER 3 FOR VIEWING SPENT AMOUNT:";
		cout<<"\nENTER 4 SEARCH BOOK BY NAME:\nENTER 5 SEARCH BOOK BY ISBN NUMBER:\nENTER 6 TO EXIT:\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					int pri;
					cout<<"\nENTER BOOK NAME:";
					cin>>book;
					b.setbookname(book);
					cout<<"\nENTER BOOK ISBN NUMBER:";
					cin>>isbn;
					b.setISBN(isbn);
					cout<<"\nENTER PRICE OF BOOK:\n";
					cin>>pri;
					b.setprice(pri);	
					cout<<"\n YOU HAVE TO PAY:"<<price;	
					break;
				}
			case 2:
				{
					int counter;
					cout<<"\nTHE NUMBER OF BOOK ARE:"<<count+counter;
					break;
				}
			case 3:
				{
					cout<<"\nTHE TOTAL SPENT AMOUNT ON BOOK BY MEMBERS ARE:"<<new_price;
					cout<<"\nTHE TOTAL SPENT AMOUNT ON BOOK BY CUSTOMERS  ARE:"<<ne_price;
					break;
				}
			case 4:
				{
					string n;
					cout<<"ENTER BOOK NAME TO BE SEARCHED:";
					cin>>n;
					b.searchbook(n);
					break;
				}
			case 5:
				{
					int i;
					cout<<"ENTER BOOK ID TO BE SEARCHED:";
					cin>>i;
					b.searchbook_id(i);
					break;
				}
			default:
				{
					cout<<"\nTHANK YOU FOR USING OUR PROGRAM:\n";
				}
				
		}
		}while(choice!=6);

}
	



