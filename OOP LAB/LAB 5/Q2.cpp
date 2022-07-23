#include<iostream>
using namespace std;
class Employee
{
	char *Emp_name;
	const int Emp_id;
	public:
		Employee(char*Emp_name, int Emp_id):Emp_name(Emp_name),Emp_id(Emp_id)
		{
			
		}
		void display()
		{
			cout<<"EMPLOYEE NAME:"<<Emp_name<<endl;
			cout<<"EMPLOYEE ID:"<<Emp_id<<endl<<endl;
		}
		void setEmployeename(char* name)
		{
			*Emp_name=*name;
		}
		char *getEmplyeename()
		{
			return Emp_name;
		}
		int getid()const
		{
			return Emp_id;
		}
};
int main()
{
	Employee e1("NAIMAT",4540);
	Employee e2("QAMBER",3226);
	Employee e3("NOHAIL",4530);
	e1.display();
	e2.display();
	e3.display();
	
	
}
