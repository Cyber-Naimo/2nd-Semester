#include<iostream>
using namespace std;
class Bank_Details
{
	
	double bal;
	int trans,new_bal,curn_bal;
	float interest;
	public:
	void setbalance(double bal)
		{
			this->bal=bal;
		}	
	double getbalance()
		{
			return bal;
		}
	void setinterest(float interest)
		{
			this->interest=interest;
		}
	float getinterest()
		{
			return interest;
		}
	void settransaction(int trans)
	{
		this->trans=trans;
	}
	int gettransaction()
	{
		return trans;
	}
	void setwithdraw(int new_bal)
		{
			bal=bal-new_bal;
		}
	int getwihdraw()
		{
			return bal;
		}
	void setdeposit(int new_bal)
		{
			bal= bal+new_bal;
		}
	int getdeposit()
		{
			return bal;
		}
};
int main ()
{
	Bank_Details b;
	double balance=0;
	int transaction,new_amount,choice,add;
	float interest;
	
	cout<<"ENTER THE ACOUNT BALANCE:\n";
	cin>>balance;
	b.setbalance(balance);
	cout<<"\nACCOUNT BALANCE:"<<b.getbalance();
	cout<<"\nENTER THE NO OF TRANSACTION YOU HAVE DONE:";
	cin>>transaction;
	b.settransaction(transaction);
	interest=0.3;		// interest rate is 30%
	interest=balance*interest;
	b.setinterest(interest);
	
while(choice!=7)
{
	cout<<"\n\n\n\nENTER 1 FOR CHECKING ACCOUNT BALANCE:\nENTER 2 FOR CHECKING NUMBER OF TRANSACTION:\n"
	"ENTER 3 FOR CALCULATING INTEREST:\nENTER 4 FOR DEPOSITING:\nENTER 5 FOR WITHDRAWING:\n"
	"ENTER 6 FOR ADDING INTERSET:\nENTER 7 FOR EXIT:\n";
	cin>>choice;

	switch (choice)
	{
		case 1:
			{
				cout<<"\nYOUR ACCOUNT BALANCE IS: "<<b.getbalance();
			}
			break;
		case 2:
			{
				cout<<"\nYOUR NUMBER OF TRANSACTION IS: "<<b.gettransaction();
			}
			break;
		case 3:
			{
				cout<<"\nTHE INTEREST OF THE PERIOD IS: "<<b.getinterest();
			}
			break;
		case 4:
			{
				cout<<"\nENTER THE AMOUNT YOU WANT TO DEPOSIT:";
				cin>>new_amount;
				b.setdeposit(new_amount);
				cout<<"\nYOUR CURRENT BALANCE AFTER DEPOSITING IS:"<<b.getdeposit();
			}
			break;
		
		
		case 5:
			{
				cout<<"\nENTER THE AMOUNT YOU WANT TO WITHDRAW:";
				cin>>new_amount;
				b.setwithdraw(new_amount);
				cout<<"\nYOUR CURRENT BALANCE AFTER WITHDRAWING IS:"<<b.getwihdraw();
				
			}
			break;
		case 6:
			{
				cout<<"\nENTER THE AMOUNT OF INTEREST YOU WANT TO ADD:";
				cin>>add;
				interest=interest+add;
				b.setinterest(interest);		
				cout<<"\nINTEREST ON ACCOUNT BALANCE IS:"<<b.getinterest();
			}
			break;
		default:
			{
				cout<<"\nTHANK YOU FOR USING OUR PROGRAM:\n";
			}
			
	}
}
	


}


