#include<iostream>
using namespace std ;
class Weapons
{
	public: 
	void forweapons()
	{
		cout<<"THIS USES BULLETS:"<<endl;
	}
};
class HotWeapons:public Weapons
{
	public:
	void ForHotWeapons()
	{
		cout<<"THIS USES HOT POWDER"<<endl;
		forweapons();
	}
	
};
class Bombs:public HotWeapons
{
	public:
		void ForBombs()
		{
			cout<<"THIS USES HOT POWDER:"<<endl;
			ForHotWeapons();
		}
		
};
class NuclearBombs:public Bombs
{
	public:
		void ForNuclearBombs()
		{
			cout<<"THIS USES IN NUCLEUR FISSION AND FUSION:"<<endl;
			ForBombs();
		}
		
};
int main()
{
	NuclearBombs n;
	n.ForNuclearBombs();
	
}
