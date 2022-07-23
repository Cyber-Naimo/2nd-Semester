#include<iostream>
#include<iomanip>
using namespace std;
struct StoreHouseItem
{
	char Item_name[10];
	int Item_quantity;
	
};
struct StoreHouseItem s[5];
int main ()
{
	int i;
for(i=1;i<=5;i++)
{
	cout<<"ENTER NAME OF ITEM NUMBER #"<<i<<endl;
	cin>>s[i].Item_name;
	cout<<"ENTER QUANTITY OF ITEM NUMBER"<<i<<endl;
	cin>>s[i].Item_quantity;		
}
cout<<"ITEM NAME\tITEM QUANTITY";
for(i=1;i<=5;i++)
{
	cout<<"\n"<<setw(15)<<left<<s[i].Item_name;
	cout<<"\t\t";
	cout<<""<<setw(2)<<right<<s[i].Item_quantity;
	
}

}


