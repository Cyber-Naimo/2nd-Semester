#include <iostream>
using namespace std;

template<class A,class B> 
void Sum(A a,B b) 
{
	cout<<"SUM:"<<endl;
    cout<<a+b<<endl<<endl;
    cout<<"MULTIPLICATION:"<<endl;
    cout<<a*b<<endl<<endl;
    cout<<"SUBTRACTION:"<<endl;
    cout<<a-b<<endl<<endl;
    cout<<"GREATER CONDITION:"<<endl;
    if (a>b)
    {
    	cout<<a/b<<endl<<endl;
	}
	else
	{
		cout<<b/a;
	}
	
}

int main()
{
    Sum(5,4); 		// FOR INTEGER
    Sum(2.4,8.5);	// FOR FLOAT
    Sum(1,2.0); 	// FOR DIFFERENT DATA TYPE
}

