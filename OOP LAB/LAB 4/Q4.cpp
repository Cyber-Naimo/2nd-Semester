#include<iostream>
#include<string>
using namespace std;
class MemberType 
{
	   private:	   	
       string name;
       int ID;
       int NO_Books;
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
		void set_NO_Books(int quantity) 
		{ 
		       NO_Books = quantity;
		}
		int get_NO_Books() 
		{   
		       return NO_Books;
		}
		void set_Amount_spent(int amount)
		{  
		       Amount_spent = amount;
		}
		int get_Amount_spent() 
		{ 			
		       return Amount_spent;
		}
		
		void set_modify_NO_Books(int new_num)
		{
		       NO_Books = new_num;
		}
		
		void set_modify_Amount_spent(int new_amount ) 
		{
		       Amount_spent = new_amount;
		}
		void checkname(string new_name)
		{
			if(name==new_name)
			{
				cout<<"\nDATA FOUNDED:\n";
				cout <<"\n\nMEMBER NAME:"<< name << endl;
		        cout <<"\nMEMBER ID:"<< ID<< endl;
				
			}
			else
			{
				cout<<"\nDATA NOT FOUNDED:\n";
			}
		}
		void checkid(int new_id)
		{
			if(ID==new_id)
			{
				cout<<"\nDATA FOUNDED:\n";
				cout <<"\n\nMEMBER NAME:"<< name << endl;
		        cout <<"\nMEMBER ID:"<< ID<< endl;
				
			}
			else
			{
				cout<<"\nDATA NOT FOUNDED:\n";
			}
		}
			void print() 
		{
		       cout <<"\n\nMEMBER NAME:"<< name << endl;
		       cout <<"\nMEMBER ID:"<< ID<< endl;
		       cout <<"\nNUMBER OF BOOKS BOUGHT ARE:"<< get_NO_Books() << endl;
		       cout <<"\nAMOUNT SPENT ON BOOKS ARE:"<< get_Amount_spent() << endl;
		}
};
int main()
{


       MemberType m;
	   string new_name,name;     
       int id,quantity,choice;
       int amount,new_id;
       cout <<"\nENTER YOUR NAME:";
       getline(cin,name);
       m.set_name(name);
       cout <<"\nENTER MEMBER ID:";
       cin>>id;
	   m.set_Id(id);
       cout <<"\nHOW MANY BOOKS YOU HAVE BOUGHT?:";
       cin>>quantity;
       m.set_NO_Books(quantity);
       cout <<"\nHOW MUCH YOU AMOUNT SPENT ON BOOKS?:";
       cin>>amount;
       m.set_Amount_spent(amount);
         
	do
	{
		cout <<"\n\nENTER 1 TO UPDATE NUMBER OF BOOKS:\nENTER 2 FOR UPDATE AMOUNT SPENT ON BOOKS\n";
        cout <<"ENTER 3 FOR VIEWING AVAILABLE MEMBERS:\nENTER 4 FOR VIEWING DETAILS OF MEMBER:\n";
        cout<<"ENTER 5 FOR SEARCHING MEMBER BY NAME:\nENTER 6 FOR SEARCHING MEMBER BY THIER ID:\nENTER 7 FOR EXIT:\n";
        cout <<"\n\nENTER YOUR CHOICE:";
        cin >>choice;
        cout << endl;
       switch (choice)
       {
       case 1:
       {
              cout <<"\nENTER NEW NUMBER OF BOOKS:";
              cin>>quantity;
              m.set_modify_NO_Books(quantity);
              break;
       }
       
       case 2:
       {
              cout <<"\nENTER NEW AMOUNT SPENT ON BOOKS:";
              cin>>amount;
              m.set_modify_Amount_spent(amount);
              break;
       }
       case 3:
       {
       	cout<<"\n\nMEMBERS ARE:"<<m.get_name();
       	break;
	   }
	   case 4:
	   {
	   		m.print();
	   		break;
	   }
	   case 5:
	   	{
	   		cout<<"\nENTER THE MEMBER NAME TO BE SEARCHED:";
	   		cin>>new_name;
	   		m.checkname(new_name);
	   		break;
		}
		case 6:
		{
			cout<<"\nENTER THE MEMBER ID TO BE SEARCHED:";
			cin>>new_id;
			m.checkid(new_id);
			break;
		}
       
       default:
              cout <<"\nTHANK YOU FOR USING OUR PROGRAM:";
       }
        
		
	}while(choice!=7);
        
     
}



