#include<iostream>
#include<conio.h>
using namespace std;
class Customer
{
	private:
	string name;		
	string nic;			
	string adress;
	string contact;
	string pin;
	int age,tax;
	int open_bal;		// OPENING BALANCE
	int newbal;			// NEW BALANCE
	int curn_bal;		// CURRENT BALANCE
	public:
		void setname(string name)
		{
			this->name=name;
		}
		string getname()
		{
			return name;
		}
		void setnic(string nic)
		{
			this->nic=nic;
		}
		string getnic()
		{
			return nic;
		}
		void setadress(string adress)
		{
			this->adress=adress;
		}
		
		void setcontact(string contact)
		{
			this->contact=contact;
		}
		
		void setpin(string pin)
		{
			this->pin=pin;
		}
	
		void setage(int age)
		{
			this->age=age;
		}
		int getage()
		{
			return age;
		}
		void setopening_balance(int open_bal)
		{
			this->open_bal=open_bal;
		}
		int getopening_balance()
		{
			return open_bal;
		}
		void setcurrent_balance(int curn_bal)
		{
			this->curn_bal=curn_bal;
		}
		int getcurrent_balance()
		{
			if(age>=60)
			{
				tax=0.0015*curn_bal;
				curn_bal=curn_bal-tax;
				return curn_bal;
			}
			else
			{
				tax=0.0025*curn_bal;
				curn_bal=curn_bal-tax;
				return curn_bal;
			}
			
		}
		void setwithdraw(int new_bal)
		{
			curn_bal=curn_bal-new_bal;
		}
		int getwihdraw()
		{
			return curn_bal;
		}
		void setdeposit(int new_bal)
		{
			curn_bal= curn_bal+new_bal;
		}
		int getdeposit()
		{
			return curn_bal;
		}
		
	
};
int main ()
{
	Customer c;
	int age,op_bal,cur_bal,tax;
	string name,adress,contact,pin,nic;
	int choice,withdraw,deposit;
	cout<<"ENTER YOUR NAME :";
	cin>>name;
	c.setname(name);
	cout<<"\nENTER YOUR AGE:";
	cin>>age;
	c.setage(age);
	cout<<"\nENTER YOUR NIC NUMBER:";
	cin>>nic;
	c.setnic(nic);
	cout<<"\nENTER YOUR RESIDENTIAL ADRESS:";
	cin>>adress;
	c.setadress(adress);
	cout<<"\nENTER YOUR CONTACT NUMBER:";
	cin>>contact;
	c.setcontact(contact);
	cout<<"\nENTER YOUR PASSWORD:";
	cin>>pin;
	c.setpin(pin);
	cout<<"\nENTER YOUR CURRENT BALANCE:";
	cin>>cur_bal;
	c.setcurrent_balance(cur_bal);
	cout<<"\nENTER YOUR OPENINIG BALANCE:";
	cin>>op_bal;
	c.setopening_balance(op_bal);
		
while(choice!=5)
{

		cout<<"\n\n\n\nENTER 1 TO CHECK YOUR BALANCE:\nENTER 2 FOR MODIFY ACCOUNT DETAILS:\n"
		"ENTER 3 FOR WITHDRAW AMOUNT:\nENTER 4 FOR DEPOSIT AMOUNT:\nENTER 5 FOR EXIT:";
		cin>>choice;
		
		
			if(choice==1)
			{
				cout<<"\nYOUR OPENING BALANCE IS:"<<c.getopening_balance();
				cout<<"\nYOUR CURRENT BALANCE IS:"<<c.getcurrent_balance();
				
				getch();
			}
			else if (choice==2)
			{
				cout<<"ENTER YOUR NAME :";
				cin>>name;
				c.setname(name);
				cout<<"\nENTER YOUR AGE:";
				cin>>age;
				c.setage(age);
				cout<<"\nENTER YOUR NIC NUMBER:";
				cin>>nic;
				c.setnic(nic);
				cout<<"\nENTER YOUR RESIDENTIAL ADRESS:";
				cin>>adress;
				c.setadress(adress);
				cout<<"\nENTER YOUR CONTACT NUMBER:";
				cin>>contact;
				c.setcontact(contact);
				cout<<"\nENTER YOUR PASSWORD:";
				cin>>pin;
				c.setpin(pin);
				cout<<"\nENTER YOUR CURRENT BALANCE:";
				cin>>cur_bal;
				c.setcurrent_balance(cur_bal);
				cout<<"\nENTER YOUR OPENINIG BALANCE:";
				cin>>op_bal;
				c.setopening_balance(op_bal);
				getch();
			}
			else if(choice==3)
			{
				cout<<"ENTER THE AMOUNT YOU WANT TO WITH DRAW:";
				cin>>withdraw;
				c.setwithdraw(withdraw);
				cout<<"YOUR CURRENT BALANCE AFTER WITHDRAWING IS:"<<c.getwihdraw();
				getch();
			}
			else if(choice==4)
			{
				cout<<"ENTER THE AMOUNT YOU WANT TO WITH DRAW:";
				cin>>deposit;
				c.setdeposit(deposit);
				cout<<"YOUR CURRENT BALANCE AFTER DEPOSITING IS:"<<c.getdeposit();
				getch();
			}
		}
	
		
			cout<<"\nTHANK YOU FOR USING OUR PROGRAM:";
			getch();

}


