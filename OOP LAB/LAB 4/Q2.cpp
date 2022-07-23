#include<iostream>
#include<string>
using namespace std;
class person_Type
{
	string f_name;
	string m_name;
	string l_name;
	public:
	person_Type ()
	{
		f_name="MUHAMMAD";
		m_name="NAIMAT";
		l_name="KHAN";
	}
	void checkfirstname(string F_name)
	{
		if(f_name==F_name)
		{
			cout<<"\nNAME ARE SAME";
		}
		else
		{
			cout<<"\nNAME ARE NOT SAME";
		}
	
	}
	void checkmiddlename(string M_name)
	{
		if(m_name==M_name)
		{
			cout<<"\nNAME ARE SAME";
		}
		else
		{
			cout<<"\nNAME ARE NOT SAME";
		}
	}
	void checklastname(string L_name)
	{
		if(l_name==L_name)
		{
			cout<<"\nNAME ARE SAME";
		}
		else
		{
			cout<<"\nNAME ARE NOT SAME";
		}
	}
	
	
};
int main()
{
	
	person_Type p;
	string first,middle,last;
	cout<<"\nENTER FIRST NAME:";
	cin>>first;
	p.checkfirstname(first);
	cout<<"\nENTER MIDDLE NAME:";
	cin>>middle;
	p.checkmiddlename(middle);
	cout<<"\nENTER LAST NAME:";
	cin>>last;
	p.checklastname(last);
}
