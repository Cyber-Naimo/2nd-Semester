#include<iostream>
using namespace std;
class Teacher
{
	private:
		int age;
		string name;
		string institute;
	public:
		inline Teacher(int age,string name,string institute):age(age),name(name),institute(institute)
		{
			
		}
		void setage(int age)
		{
			this->age=age;
		}
		int getage()
		{
			return age;
		}
		void setname(string name)
		{
			this->name=name;
		}
		string getname()
		{
			return name;
		}
		void setinstitute(string institute)
		{
			this->institute=institute;
		}
		string getinstitute()
		{
			return institute;
		}
};

class HumanitiesTeacher:public Teacher
{
	

	string field;
	string course;
	string designation;

	public:
	inline HumanitiesTeacher(int age,string name,string institute,string field,string course,string designation):Teacher(age,name,institute),field(field),course(course),designation(designation)
	{
	}
	void display()
	{
			cout<<"NAME:"<<getname()<<endl;
			cout<<"AGE:"<<getage()<<endl;
			cout<<"INSTITUTE:"<<getinstitute()<<endl;
			cout<<"DESIGNATION:"<<designation<<endl;
			cout<<"COURSE NAME:"<<course<<endl;
			cout<<"FILED:"<<field<<endl;
	}
	
	
//	void setfield(string field)
//	{
//		this->field=field;
//	}
//	string getfield()
//	{
//		return field;
//	}
//	void setcourse(string course)
//	{
//		this->course=course;
//	}
//	string getcourse()
//	{
//		return course;
//	}
//	void setdesignation(string designation)
//	{
//		this->designation=designation;
//	}
//	string getdesignation()
//	{
//		return designation;
//	}

};
class ScienceTeacher: public Teacher
{
	string field;
	string course;
	string designation;
	public:
	inline ScienceTeacher(int age,string name,string institute,string field,string course,string designation):Teacher(age,name,institute),field(field),course(course),designation(designation){
	}
		void display()
	{
			cout<<"NAME:"<<getname()<<endl;
			cout<<"AGE:"<<getage()<<endl;
			cout<<"INSTITUTE:"<<getinstitute()<<endl;
			cout<<"DESIGNATION:"<<designation<<endl;
			cout<<"COURSE NAME:"<<course<<endl;
			cout<<"FILED:"<<field<<endl;
	}
//	void setfield(string field)
//	{
//		this->field=field;
//	}
//	string getfield()
//	{
//		return field;
//	}
//	void setcourse(string course)
//	{
//		this->course=course;
//	}
//	string getcourse()
//	{
//		return course;
//	}
//	void setdesignation(string designation)
//	{
//		this->designation=designation;
//	}
//	string getdesignation()
//	{
//		return designation;
//	}
};
class MathsTeacher : public Teacher
{
	string field;
	string course;
	string designation;
	public:
	inline MathsTeacher(int age,string name,string institute,string field,string course,string designation):Teacher(age,name,institute),field(field),course(course),designation(designation)
	
	{
	}
	void display()
	{
			cout<<"NAME:"<<getname()<<endl;
			cout<<"AGE:"<<getage()<<endl;
			cout<<"INSTITUTE:"<<getinstitute()<<endl;
			cout<<"DESIGNATION:"<<designation<<endl;
			cout<<"COURSE NAME:"<<course<<endl;
			cout<<"FILED:"<<field<<endl;
	}
//	void setfield(string field)
//	{
//		this->field=field;
//	}
//	string getfield()
//	{
//		return field;
//	}
//	void setcourse(string course)
//	{
//		this->course=course;
//	}
//	string getcourse()
//	{
//		return course;
//	}
//	void setdesignation(string designation)
//	{
//		this->designation=designation;
//	}
//	string getdesignation()
//	{
//		return designation;
//	}

};
int main()
{
	string name1,institute1,course1,designation1,field1;
	int age1;
	cout<<"ENTER THE NAME OF HUMANITIES TEACHER:";
	cin>>name1;
	cout<<"ENTER THE AGE OF HUMANITIES TEACHER:";
	cin>>age1;
	cout<<"ENTER THE INSITITUE OF HUMANITIES TEACHER:";
	cin>>institute1;
	cout<<"ENTER THE COURSE NAME OF HUMANITIES TEACHER:";
	cin>>course1;
	cout<<"ENTER THE DESIGNATION OF HUMANITIES TEACHER:";
	cin>>designation1;
	cout<<"ENTER THE FIELD OF HUMANITIES TEACHER:";
	cin>>field1;
	HumanitiesTeacher h(age1,name1,institute1,field1,course1,designation1);
	h.display();
	

	
	
}
