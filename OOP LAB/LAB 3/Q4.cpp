#include<iostream>
using namespace std;
class CounterType
{
	int count=0;
	
	public:
		void setcount(int c)
		{
			count=c;
		}
		int getcount()
		{
			return count;
		}
		
		
		int getincreasecount()
		{
			count++;
			return count;
		}
		
	    int getdecreasecount()
		{
		  if (count == 0)
	    	{
	          return 0; 	
			}
			else
			{
				count--;
			  return count;
	       	 
			}
	 
	    }
};

int main()
{
   CounterType c;
   int count;
	cout<<"ENTER THE VALUE OF COUNT:\n";
	cin>>count;
	
    c.setcount(count);
    cout<<"\nCOUNT VALUE: "<<c.getcount();
    cout<<"\nCOUNTER VALUE AFTER INCREAMENTING: "<<c.getincreasecount();
    cout<<"\nCOUNTER VALUE AFTER DECREAMENTING: "<<c.getdecreasecount();

}


