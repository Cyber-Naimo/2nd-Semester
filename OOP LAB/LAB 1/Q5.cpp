#include<iostream>
using namespace std;
struct TelephoneRecord
{
char person_name[10];
int Area_code;
int Phone_number;
};
struct TelephoneRecord t[10];

int main ()
{
	int i=0;
	int update,contact,choice;
	while(choice!=4)
	{
	cout<<"ENTER 1 FOR ADDING RECORDS:\nENTER 2 FOR UPDATNG RECORDS:\nENTER 3 FOR DISPLAYING RECORDS:\nENTER 4 FOR EXIT:\n";
	cin>>choice;


		switch(choice)
		{
			case 1:
			{
				cout<<"ADDING RECORDS:\n";
				i=0;
				do
				{
				cout<<"ENTER YOUR NAME:\n";
				cin>>t[i].person_name;
				cout<<"ENTER YOUR AREA CODE:\n";
				cin>>t[i].Area_code;
				cout<<"ENTER YOUR TELEPHONE NUMBER:\n";
				cin>>t[i].Phone_number;
				i++;
				
				}while(i!=10);
		
				break;
			}
			
			case 2:
			{
				cout<<"UPDATING RECORDS:\n";
				cout<<"ENTER RECORDS AREA CODE YOU WANT TO UPDATE:\n";
				cin>>update;
				for(i=0;i<10;i++)
				{
				
					if(update==t[i].Area_code)
					{
					cout<<"RECORD FOUND NOW YOU CAN UPDATE IT:\n";
					cout<<"ENTER YOUR NAME:\n";
					cin>>t[i].person_name;
					cout<<"ENTER YOUR AREA CODE:\n";
					cin>>t[i].Area_code;
					cout<<"ENTER YOUR TELEPHONE NUMBER:\n";
					cin>>t[i].Phone_number;
					
					}
					else
					{
						cout<<"RECORD NOT FOUND:\n";
					}
				}
				break;
			}
			
			case 3:
			{
				cout<<"DISPLAYING RECORDS:\n";
				
				cout<<"ENTER THE AREA CODE OF RECORD YOU WANT TO DISPLAY:\n";
				cin>>contact;
				for(i=0;i<10;i++)
				{

					if(contact==t[i].Area_code)
					{
					cout<<"NAME:"<<t[i].person_name<<endl;
					cout<<"AREA CODE:"<<t[i].Area_code<<endl;
					cout<<"TELEPHONE NUMBER:"<<t[i].Phone_number<<endl;
					}
				}
				break;
			}
			
		}
	}
}
