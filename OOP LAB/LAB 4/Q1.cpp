#include<iostream>
#include<string>
using namespace std;
class DayType
{
       string work_days[7];		// INITILAIZING ARRAY BECAUSE WE HAVE 7 DAYS
       int i;
       string day;
       string lastday;
       string nextday;
       string AddDays;
public:
       DayType (string i):day(i)
{ 
       work_days[0] = "MON";
       work_days[1] = "TUES";		// SEETING EACH ADRESS A SINGLE DAY
       work_days[2] = "WEDNES";
       work_days[3] = "THURS";
       work_days[4] = "FRI";
       work_days[5] = "SATAUR";
       work_days[6] = "SUN";
}
string setday() 
{

       if (day == work_days[0])
       {
              i = 0;
       }
       else if (day == work_days[1])
       {
              i = 1;
       }
       else if (day == work_days[2])
       {
              i = 2;
       }
       else if (day == work_days[3])
       {
              i = 3;
       }
       else if (day == work_days[4])
       {
              i = 4;
       }
       else if (day == work_days[5])
       {
              i = 5;
       }
       else if (day == work_days[6])
              i = 6;
       else
       {
              day = "TRY AGAIN";
              i = 7;
       }
       return day;
}

void setNextday() 
{
        if (i == 6)
	    {
		   	nextday = work_days[0];
		}
	     else if (i == 7)
	    {
         	 lastday = "TRY AGAIN";
		}
		else
		{
	         nextday = work_days[i + 1];
	    }

}
string setlastday()
{
       if (i == 0)
       {
       		lastday = work_days[6];
	   }             
       else if (i == 7)
       {
       		lastday = "TRY AGAIN";
	   }              
       else
       {
       		 lastday = work_days[i - 1];
	   }        
       return lastday;
}

string setadditionaldays(int adding_days) 		//  condition for upcoming days
{
       adding_days = adding_days + i;
       while (adding_days>= 7)
       {
              adding_days = adding_days - 7;
       }
       if (i == 7)
       {
       		work_days[adding_days] = "TRY AGAIN";
	   }         
       return AddDays = work_days[adding_days];
}
void getdays()
{
       cout<<"\n\t\tTODAY:"<<day<<"DAY";
       cout <<"\n\t\tNEXT DAY:"<< nextday<<"DAY";
       cout <<"\n\t\tLAST DAY:"<< lastday<<"DAY";
       cout <<"\n\t\tAFTER ADDING DAYS:"<< AddDays<<"DAY" ;
}
};
int main()
{
       int n;

       string day;
   	   cout <<"\t\t\t******************WELCOME TO PREDICTION CALENDER********************\n\n\n"<< endl;
       cout <<"\t\t\tENTER MON FOR MONDAY:\n";
       cout <<"\t\t\tENTER TUES FOR TUESDAY:\n";
       cout <<"\t\t\tENTER WEDNES FOR WEDNESDAY:\n";
       cout <<"\t\t\tENTER THURS FOR THURSDAY:\n";
       cout <<"\t\t\tENTER FRI FOR FRIDAY:\n";
       cout <<"\t\t\tENTER SAT FOR SATUARDAY:\n";
       cout <<"\t\t\tENTER SUN FOR SUNDAY:\n";
       
       cout <<"\nWHAT DAY IS TODAY:\n";
       cin>>day;
       DayType d(day); 
       d.setday();
       d.setNextday();
       d.setlastday();
       cout<<"ENTER THE NUMBER OF DAYS YOU WANT ADD:\n";
	   cin>>n;
	   d.setadditionaldays(n);
       d.getdays();
   }


