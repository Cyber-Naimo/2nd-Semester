#include<iostream>
using namespace std;
class Bank_Employee
{
	string f_name;
	string l_name;
	int monthsalary;
	public:
	void setfirstname(string fname)
	{
		f_name=fname;
		
	}
	string getfirstname()
	{
		return f_name;
	}
	void setlastname(string lname)
	{
		l_name=lname;
		
	}
	string getlastname()
	{
		return l_name;
	}
	void setmonthsalary(int salary)
	{
		monthsalary=salary;
		if(salary<0)
		{
			monthsalary=0;
		}
	}
	int getmonthsalary()
	{
		return monthsalary;
	}
	int getyearlysalary()
	{
		int yearly_salary=0;
		yearly_salary=monthsalary*12;
		return yearly_salary;
	}
	int getincreasesalary()
	{
		int finalsalary=0,salary;
		salary=getyearlysalary()*0.20;
		finalsalary=salary+getyearlysalary();
		return finalsalary;
		
	}
	
};
int main ()
{
	Bank_Employee a,b,c,d,e;
	string first;
	string last;
	int sal,bonus;
	cout<<"ENTER YOUR FIRST NAME:";
	cin>>first;
	a.setfirstname(first);
	cout<<"\nFIRST NAME:"<<a.getfirstname();
	cout<<"\nENTER YOUR LAST NAME:";
	cin>>last;
	a.setlastname(last);
	cout<<"\nLAST NAME:"<<a.getlastname();

	cout<<"\n\n\nENTER THE MONTHLY SALARY OF EMPLOYEE 1:";
	cin>>sal;
	a.setmonthsalary(sal);
	cout<<"\nMONTHLY SALARY OF EMPLOYEE 1: "<<a.getmonthsalary();
	cout<<"\nYEARLY SALARY OF EMPLOYEE 1: "<<a.getyearlysalary();
	cout<<"\nFINAL SALARY OF EMPLOYEE 1 AFTER GETTING BONUS: "<<a.getincreasesalary();
	
	cout<<"\n\n\nENTER THE MONTHLY SALARY OF EMPLOYEE 2:";
	cin>>sal;
	b.setmonthsalary(sal);
	cout<<"\nMONTHLY SALARY OF EMPLOYEE 2: "<<b.getmonthsalary();
	cout<<"\nYEARLY SALARY OF EMPLOYEE 2: "<<b.getyearlysalary();
	cout<<"\nFINAL SALARY OF EMPLOYEE 2 AFTER GETTING BONUS: "<<b.getincreasesalary();
	
	cout<<"\n\n\nENTER THE MONTHLY SALARY OF EMPLOYEE 3:";
	cin>>sal;
	c.setmonthsalary(sal);
	cout<<"\nMONTHLY SALARY OF EMPLOYEE 3: "<<c.getmonthsalary();
	cout<<"\nYEARLY SALARY OF EMPLOYEE 3: "<<c.getyearlysalary();
	cout<<"\nFINAL SALARY OF EMPLOYEE 3 AFTER GETTING BONUS: "<<c.getincreasesalary();
	
	cout<<"\n\n\nENTER THE MONTHLY SALARY OF EMPLOYEE 4:";
	cin>>sal;
	d.setmonthsalary(sal);
	cout<<"\nMONTHLY SALARY OF EMPLOYEE 4: "<<d.getmonthsalary();
	cout<<"\nYEARLY SALARY OF EMPLOYEE 4: "<<d.getyearlysalary();
	cout<<"\nFINAL SALARY OF EMPLOYEE 4 AFTER GETTING BONUS: "<<d.getincreasesalary();
	
	cout<<"\n\n\nENTER THE MONTHLY SALARY OF EMPLOYEE 5:";
	cin>>sal;
	e.setmonthsalary(sal);
	cout<<"\nMONTHLY SALARY OF EMPLOYEE 5: "<<e.getmonthsalary();
	cout<<"\nYEARLY SALARY OF EMPLOYEE 5: "<<e.getyearlysalary();
	cout<<"\nFINAL SALARY OF EMPLOYEE 5 AFTER GETTING BONUS: "<<e.getincreasesalary();

}


