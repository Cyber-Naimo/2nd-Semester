#include<iostream>
using namespace std;
class Student
{
	int marks[5];
	int score;
	int sum;
	public:
	void setScore(int total_chri)
	{
		score=total_chri;
	}
		
		void input()
		{
				int i=0;	
		
				cout<<"ENTER MARKS OF STUDENT:"<<i+1;
				for(int j=0;j<5;j++)
				{
						cin>>marks[i];
						sum+=marks[i];
				}
				cout<<"\nTOTAL MARKS OF STUDNET "<<i+1<<"IS:"<<sum<<endl;
			
			
	
		}
		int cal()
		{
			return sum;
		}	

	
};
int main()
{
	Student std[5];
	int counter=0;
	Student K;
	int score;
	cout<<"ENTER TOTAL MARKS OF CHRISTIAN:";
	cin>>score;
	K.setScore(score);
	int x=K.cal();
	std[0].input();
	std[1].input();
	std[2].input();
	std[3].input();
	std[4].input();
	
	
	for(int i=0;i<5;i++)
	{
		if (x<std[i])
		{
			counter--;
		}
		else
		{
			counter++
		}
	}
	
}
