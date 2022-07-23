#include<iostream>
#include<string>
using namespace std;

class StudentSociety
{
	string society_name;
	string faculty_head;
	string president;
	string general_secratry;
	int budget,size;
	string events[];		//  EVENTS ON SOCIETY
	
public:
	
	void setsocietyname(string name)		//Accessors and Mutators for all fields
	{
		society_name=name;
	}
	string getsocietyname()
	{
		return society_name;
	}
	
	void setfacultyname(string name)
	{
		faculty_head=name;
	}
	string getfacultyname()
	{
		return faculty_head;
	}
	
	void setpresidentname(string name)
	{
		president=name;
	}
	string getpresidentname()
	{
		return president;
	}
	
	void setsecatryname(string name)
	{
		general_secratry=name;
	}
	string getsecatryname()
	{
		return general_secratry;
	}
	
	void setbudget(int bud)
	{
		budget=bud;
	}
	int getbudget()
	{
	return budget;
	}
	
	void setevents(string arr[],int size)
	{
		arr[size];
		for(int i=0;i<size;i++)
		{
			events[i]=arr[i];
		}
	}

	string* poll() 				// POLL  FUNCTION
	{
		string president,general_secratry;
		cout<<"ENTER PRESIDENT NAME:\n";
		cin>>president;	
		cout<<"ENTER GENERAL SECRATERY NAME:\n";
		cin>>general_secratry;
		string* array;
		array=new string[2];
		for(int i=0;i<2;i++)
		{
			array[0]=president;
			array[1]=general_secratry;
		}
				
		return array;		//RETRUNING EVENTS ARRAY
}
							//To create objects and initializing all fields by taking user input in constructor scope
StudentSociety ()			 // case 1:CONSTRUCTOR WITH NO PARAMETER:
{
		cout<<"\nENTER SOCIETY NAME:\n";
		cin>>society_name;
		cout<<"ENTER FACULTY HEAD NAME:\n";
		cin>>faculty_head;
		cout<<"ENTER PRESIDENT NAME:\n";
		cin>>president;	
		cout<<"ENTER GENERAL SECRATERY NAME:\n";
		cin>>general_secratry;	
		cout<<"ENTER BUDGET FOR THE EVENT:\n";
		cin>>budget;
		cout<<"HOW MANY EVENTS YOU HAVE ORGANIZE:\n";
		cin>>size;
		string events[size];
		cout<<"ENTER  EVENTS YOU HAVE ORGANIZE:\n";
		for(int i=0;i<size;i++)
		{
			cout<<"ENTER EVENT:"<<i<<endl;
			cin>>events[i];
		}
	
	cout<<"\nSOCIETY NAME: "<<society_name;
	cout<<"\nFACULTY HEAD: "<<faculty_head;
	cout<<"\nPRESIDENT NAME: "<<president;
	cout<<"\nGENERAL SECATERY: "<<general_secratry;
	cout<<"\nEVENT BUDGET: "<<budget;
	cout<<"\nEVENTS ARE:\n";
	for(int i=0;i<size;i++)
	{
		cout<<"\nEVENT: "<<i<<" "<<events[i]<<endl;
	}
	
	}
	// case 2:CONSTRUCTOR WITH  PARAMETER:
	// To create objects and initializing all fields by taking values as parameters
	StudentSociety(string societyname,string facultyhead,string presidnt,string generalsecratry,int budgt,string event[],int siz)
	{
	society_name=societyname;
	faculty_head=facultyhead;
	president=presidnt;
	general_secratry=generalsecratry;		// INITILIZING ALL FILEDS
	budget=budgt;
	int size=siz;
	string events[size];
	for(int i=0;i<size;i++)
	{
	events[i]=event[i];
	}
	cout<<"\nSOCIETY NAME: "<<society_name;
	cout<<"\nFACULTY HEAD: "<<faculty_head;
	cout<<"\nPRESIDENT NAME: "<<president;
	cout<<"\nGENERAL SECATERY: "<<general_secratry;
	cout<<"\nEVENT BUDGET: "<<budget;
	cout<<"\nEVENTS ARE:\n";
	
	for(int i=0;i<size;i++)
	{
		cout<<"\nEVENT: "<<i+1<<" "<<events[i]<<endl;
	}
	
	}
	// case 3:CONSTRUCTOR WITH PARAMETER AND POLL FUNCTION:
	/*To create objects that initialize all fields except President and General Secretary,
	 this constructor should call function Poll( ) to get these values*/
	StudentSociety(string societyname,string facultyhead,int budgt,string event[],int siz)
	{
	int a;
	society_name=societyname;
	faculty_head=facultyhead;
	budget=budgt;
	int size=siz;
	string events[size];
	
	for(int i=0;i<size;i++)
	{
		events[i]=event[i];
	}
	string* ptr=poll();		// calling poll and storing array
	cout<<"\nSOCIETY NAME: "<<society_name;
	cout<<"\nFACULTY HEAD: "<<faculty_head;
	cout<<"\nEVENT BUDGET: "<<budget;		
	cout<<"\nPRESIDENT NAME: "<<*(ptr+0);
	cout<<"\nGENERAL SECATERY: "<<*(ptr+1); 
	for(int i=0;i<size;i++)
	{
		cout<<"\nEVENT: "<<i+1<<" "<<events[i]<<endl;
	}
	}
	
	};
int main ()
{
	string soc_name,faculty,president,secratry;
	int budget,choice,size;
	cout<<"\t\t\t\n\n\n****************WELCOME TO SOCIETY:***************\n\n\n";
	cout<<"THERE ARE 3 CONSTRUCTORS SHOWN BELOW PLEASE CHHOSE ONE:";
	do
	{
		cout<<"\nENTER 1 TO CALLING PARAMETERIZED CONSTRUCTOR:\nENTER 2 FOR CALLING DEFAULT CONSTRUCTOR:\nENTER 3 FOR CALLING POLL FUNCTION CONSTRUCTOR:\n";
		cout<<"ENTER 4 FOR EXIT:";
		cin>>choice;
	switch(choice)
	{
	case 1:
		{
			cout<<"\t\t\t\n\n\nENTER SOCIETY NAME:\n";
			cin>>soc_name;
			cout<<"ENTER FACULTY HEAD NAME:\n";
			cin>>faculty;
			cout<<"ENTER PRESIDENT NAME:\n";
			cin>>president;	
			cout<<"ENTER GENERAL SECRATERY NAME:\n";
			cin>>secratry;	
			cout<<"ENTER BUDGET FOR THE EVENT:\n";
			cin>>budget;
			cout<<"ENTER HOW MANY EVENTS YOU HAVE ORGANIZE:\n";
			cin>>size;
			cout<<"ENTER  EVENTS YOU HAVE ORGANIZE:\n";
			string event[size];
			for(int i=0;i<size;i++)
			{
				cout<<"ENTER EVENT:"<<i+1<<endl;
				cin>>event[i];
			}
			StudentSociety a(soc_name,faculty,president,secratry,budget,event,size);
			break;
			
		}
	case 2:
		{
			StudentSociety s1;		//  DEFAULT CONSTRUCTOR
			break;
		}
	case 3:
		{
			cout<<"\n\n\nENTER SOCIETY NAME:\n";
			cin>>soc_name;
			cout<<"ENTER FACULTY HEAD NAME:\n";
			cin>>faculty;
			cout<<"ENTER BUDGET FOR THE EVENT:\n";
			cin>>budget;
			cout<<"ENTER HOW MANY EVENTS YOU HAVE ORGANIZE:\n";
			cin>>size;
			cout<<"ENTER EVENTS YOU HAVE ORGANIZE:\n";
			string event[size];
			for(int i=0;i<size;i++)
			{
				cout<<"ENTER EVENT:"<<i+1<<endl;
				cin>>event[i];
			}
			
			StudentSociety s(soc_name,faculty,budget,event,size);
		}
	default:
		{
			cout<<"\nTHANK YOU FOR USING OUR PROGRAM:\n";
		}
}

	
}while(choice!=4);

}



