#include<iostream>
#include<exception>
using namespace std;
class Myexception:public exception
{
	char *error_msg;
	public:
		Myexception()
		{
		}
		Myexception(char *msg)
		{
			error_msg=msg;
		}
		void DISPLAY()
		{
			cout<<""<<error_msg;
		}
		const char* what()throw()
		{
			return "ERROR:";
		}
};

int main ()
{

//	int a=2,b;
//	cin>>b;
//	try
//	{
//		if(b==0)
//		{
			//throw 0;		//exception object
//			throw "str";
//		}
//		int result=a/b;
//	}
//	catch(int e)	//	we can make multiple catch block but run ak h hoga
//	{
//		b=1;
//		int result=a/b;
//		cout<<"DIVIDE BY ZERO HAPPEND:\n";
//		
//	}
//	catch(char *s)
//	{
//		cout<<"STRING HAPPEND:\n";
//	}
//	catch(...)
//	{
//		//defalut catch block hamesha last m hoga
//		cout<<"DEFALUT CATCH BLOCK:";
//	}
//	
//	cout<<"\nTHIS IS VALID CODE:";


	//STANDARD EXCEPTIONS
//	try
//	{
//		int index;
//		cin>>index;
//		if(index<0 || index>3)
//		{
//			throw out_of_range("Index out of range:");
//			cout<<arr[index];
//		}
//		
//	}
//	catch(exception &e)//only all standard exception
//	{
//		
//	}
//	
//	catch(out_of_range &e)		//standard exception syntax
//	{
//		cout<<e.what();
//	}

	//custom EXCEPTIONS
	int arr[]={1,2,3};
	try
	{
		int index;
		cin>>index;
		if(index<0 || index>3)
		{
			throw Myexception("MY CUSTOM EXCEPTION:");
		}
		else
		{
			arr[index]=index;
			cout<<index;
		}
		
	}
//	catch(Myexception &e)//only all standard exception
//	{
//		e.DISPLAY();
//	}

	catch(length_error &e)		//standard exception syntax
	{
		cout<<e.what();
	}


}


