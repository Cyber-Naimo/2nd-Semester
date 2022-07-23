#include<iostream>
using namespace std;					/*first it will take no of offices then it takes no of  of employye in each
										  office then it will ask manager detail and then employee details and soo on 
										  after it will calculate office each employye salary */
class Company_Employee
{
	string f_name;
	string l_name;
	char e_code[4];		    // employee code
	char office_code[3];	//OFFICE CODE
	string adress;
	double mon_salary;
    double set_oficeamount;

	public:
		void setfirstname(string name)		//ACCESSOR AND MUTATORS OF ALL FIELD
		{
			f_name=name;
		}
		string getfirstname()
		{
			return f_name;
		}
		void setlastname(string name)
		{
			l_name=name;
		}
		string getlastname()
		{
			return l_name;
		}
			void setofficecode(char cd[])
		{
			for(int i=0;i<3;i++)
			{
				
				office_code[i]=cd[i];
			}
	
		}
		char getofficecode()
		{
			for(int i=0;i<3;i++)
			{
				cout<<"\nOFFICE CODE:"<<office_code[i];
			}	
		}
			void setmanagercode(char cd[])
		{
			for(int i=0;i<4;i++)
			{
				if( cd[0]=='m'||cd[0]=='M')
				{
					e_code[i]=cd[i];
				}
				else
				{
					cout<<"\nMANAGER CODE MUST START WITH M ALPHABET\n:";	
					break;			
				}
			}
		
			
		}
		char getmanagercode()
		{
			for(int i=0;i<4;i++)
			{
				cout<<"MANAGER CODE:"<<e_code[i]<<endl;
			}
		}
		void setemployeecode(char cd[])
		{
			for(int i=0;i<4;i++)
			{
				if( cd[0]!='m'||cd[0]!='M')
				{
					e_code[i]=cd[i];
				}
				else
				{
					cout<<"\nEMPLOYEE CODE MUST START WITH OTHER THEN M APLBHABET:\n";
					break;				
				}
			}
		}
		char getemployeecode()
		{
			for(int i=0;i<4;i++)
			{
				cout<<"EMPLOYEE CODE:"<<e_code[i]<<endl;
			}
		}
		void setadress(string adr)
		{
			adress =adr;
		}
		string getadress()
		{
			return adress;
		}
		void set_monthsalry(double sal)
		{
			mon_salary=sal;
		}
		double get_monthsalary()
		{
			return mon_salary;
		}
		 void setofficeamount(double amount)		// CONDITION FOR CHECKING EACH OFFICE EMPLOYEES SALARY ON  MONTHLY BASIS
		{
			if(amount>100000)
			{
				cout<<"\nEACH OFFICE BUDGET CANNOT EXCEED 100,000\nYOU HAVE EXCEED YOUR BUDGET LIMIT:\n";
			}
			else
			{
				set_oficeamount=amount;
				cout<<"\nYOUR MONTHLY OFFICE BUDGET IS:\n"<<set_oficeamount;
			}
			
		}
		double getofficeamount()
		{
			return set_oficeamount;
		}
	
};
class Company_Office
{
	char office_code[3];
	Company_Employee e[10];			// WE ARE ASSUMING MAX 10 EMPLOYYEES IN EACH OFFICE 
	Company_Employee m;				// WE ARE ASSUMING IN EACH OFFICE THERE IS ALSO ONE MANAGER TOO
	
	int size;
	public:
		void initializemanager()		// FUNCTION FOR INITILIZING MANAGER DETAILS
		{
			string fname,lname,adress,choice;
			double amount,new_amount=0,yearly,monthly;
			char of_code[3],pass[4];
			double mon_sal;
			int ans,i=0;
			
				cout<<"\nENTER YOUR FIRST NAME:\n";
				cin>>fname;
				m.setfirstname(fname);
				cout<<"\nENTER YOUR LAST NAME:";
				cin>>lname;
				m.setlastname(lname);
				cout<<"\nENTER YOUR OFFICE CODE:";
				for( int j=0;j<3;j++)
				{
					cin>>of_code[j];
				}
				m.setofficecode(of_code);
				cout<<"\nENTER YOUR ADRESS:";
				cin>>adress;
				m.setadress(adress);
				cout<<"\nENTER YOUR MONTHLY SALARY:";
				cin>>mon_sal;
				m.set_monthsalry(mon_sal);
				cout<<"\nENTER YOUR UNIQUE CODE:";
				for(int j=0;j<4;j++)
				{
					cin>>pass[j];
				}
				m.setmanagercode(pass);		
				}
			
		
		

		void initializeemployee (int size)	// FUNCTION FOR INITILIZING EMPLOYEE DETAILS
		{
	
			this->size=size;
			if(size>10)
			{
				cout<<"\nSIZE SHOULD BE GREATER THEN 10\n";
			}
			else
			{
			string fname,lname,adress,choice;
			double amount,new_amount=0,yearly,monthly;
			char of_code[3],pass[4];
			double mon_sal;
			int ans,i=0;
			for(i=0;i<size;i++)
			{
				cout<<"\nENTER YOUR FIRST NAME:\n";
				cin>>fname;
				e[i].setfirstname(fname);
				cout<<"\nENTER YOUR LAST NAME:";
				cin>>lname;
				e[i].setlastname(lname);
				cout<<"\nENTER YOUR OFFICE CODE:";
				for( int j=0;j<3;j++)
				{
					cin>>of_code[j];
				}
				e[i].setofficecode(of_code);
				cout<<"\nENTER YOUR ADRESS:";
				cin>>adress;
				e[i].setadress(adress);
				cout<<"\nENTER YOUR MONTHLY SALARY:";
				cin>>mon_sal;
				e[i].set_monthsalry(mon_sal);
				cout<<"\nENTER YOUR UNIQUE CODE:";
				for( int j=0;j<4;j++)
				{
					cin>>pass[j];
				}
				e[i].setemployeecode(pass);
				
			}
		}
		}
		

		double set_totalsalaroff()			//total slary
		{
			double amount=0;
			for(int i=0;i<size;i++)
			{
				amount+=e[i].get_monthsalary();				// adding each employye salary in office 
			}
			return amount;
		}
		 void officeamount(double amount)	// CONDITION FOR CHECKING EACH OFFICE EMPLOYEES SALARY ON  MONTHLY BASIS
		{
			if(amount>100000)
			{
				cout<<"EACH OFFICE BUDGET CANNOT EXCEED 100,000\nYOU HAVE EXCEED YOUR BUDGET LIMIT:\n";
				return;
			}
			else
			{
				
				cout<<"\nYOUR MONTHLY OFFICE BUDGET IS:\n"<<amount;
				return;
			}
			
		}
		void setofficecode(char cd[])
		{
			for(int i=0;i<3;i++)
			{
				
				office_code[i]=cd[i];
			}
	
		}
		char getofficecode()
		{
			for(int i=0;i<3;i++)
			{
				cout<<"\nOFFICE CODE:"<<office_code[i];
			}	
		}
	
	
};


int main ()
{
	
	Company_Employee e;	
	int ans,emp,size;
	cout<<"\t\t\t\n\n\n***************WELCOME TO COMPANY MANAGEMENT SYSTEM:****************************\n";
	
	cout<<"ENTER THE NUMBER OF OFFICES DID YOU WANT TO SET RECORD FOR COMPANY:\n";			// GETTING NUMBER OF OFFICES
	cin>>size;
	Company_Office o[size];							// SETTING NO OF OFFICE IN COMPANY OFFICE'S OBJECT
	for(int i=0;i<size;i++)							// THIS LOOP WILL BE EXCECUTE NO OF OFFICE TIME'S
	{
		cout<<"\n\n\nHOW MANY EMPLOYYE YOU WANT TO GET IN THE COMPANY'S OFFICE:\n";		//AFTER GETTING NO OF EMPLOYEE'S IT WILL ASK FOR EMPLOYEE IN 
		cin>>emp;																	//EACH OFFICE MAX LIMIT IS 10;
		cout<<"\n\nENTER DETAILS OF MANAGER OF OFFICE:"<<i+1<<endl<<endl;			// ONE MANAGER IN EACH OFFICE IS COMPULSARY AND UNDER THE MANAGER 
																				//EMPLOYYE'S WILL WORK
		o[i].initializemanager();												// CALLING MANAGER DETAILS FUNCTION
		cout<<"\nENTER DETAILS OF EMPLOYEE OF OFFICE:"<<i+1<<endl;						//AFTER TAKING MANAGER RECORD IT WILL ASK FOR EMPLOYEE'S DATA
		o[i].initializeemployee(emp);
		double k = o[i].set_totalsalaroff();									// STORING EACH OFFICE ALL EMPLOYYS SALARY;
		o[i].officeamount(k);													// CHECKER CONDITION THAT OFFICE LIMIT EXCEED 100000 OR NOT
		
	}
	
}



