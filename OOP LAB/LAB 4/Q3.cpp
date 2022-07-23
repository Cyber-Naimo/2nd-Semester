#include<iostream>
using namespace std;

class BookType
{
	private:
	string title;
	int No_authers;
	string authers[4];
	string publisher;
	int ISBN;
	int price;
	int No_Copies;
	int Year_publication;
	public:
	void settitle(string a)
		{
			title=a;
		}
		string gettitle()
		{
			
			return title;
		}
		
		void showtitle()
		{
			cout<<"BOOK TITLE"<<title;
		}
		
		void setNo_authers(int no)
		{
			No_authers=no;
		}
		int getNo_authers()
		{
			return No_authers;
		}
		
		void setauthers(string ptr[])
		{
			for(int i=0;i<No_authers;i++)
			{
				authers[i]=ptr[i];
			}
		}
		void getauthers()
		{
			for(int i=0;i<No_authers;i++)
			{
				cout << endl << i+1 << "AUTHER NAME:" << authers[i];
			}
		}
		void setISBN(int num)
		{
			ISBN=num;
		}
		void showISBN()
		{
			cout<<"\nBOOK ISBN NO:"<<ISBN;
		}
		
		void setpublisher(string name)
		{
			publisher=name;
		}
		void getpublisher()
		{
			cout<<"\nPUBLISHER NAME:"<<publisher;
		}
		
		void checktitle(string chk)
		{
			if (chk==title)
			{
				cout << "\nBOOK TITLE IS FOUNDED:\n";
			}
		}
		

		void checkpublisher(string name)
		{
			if (name==publisher)
			{
				cout << "\nTHIS PUBLISHER'S BOOK IS FOUNDER:\n";
			}
		}		
	
		
	
		void checkISBN(int a)
		{
			if (a==ISBN)
			{
				cout << "\nBOOK FOUND OF THIS AUTHER:\n";
			}
		}		
		int getISBN()
		{
			return ISBN;
		}
	
		void setprice(int cost)
		{
			price=cost;
		}
		void showprice()
		{
			cout<<"\nCOST OF THE BOOK:"<<price;
		}
		int getprice()
		{
			return price;
		}
		
		
		void setNo_Copies(int n)
		{
			No_Copies=n;
		}
		void showNo_Copies()
		{
			cout << "NUMBER OF COPIES ARE:" << No_Copies;
		}
		void updateNo_Copies(int a)
		{
			No_Copies=a;
		}
		int getNo_Copies()
		{
			return No_Copies;
		}
		
		
		void setYear_publication(int year)
		{
			Year_publication=year;
		}
		void showYear_publication()
		{
			cout<<"PUBLICATION YEAR:"<<Year_publication; 
		}
		int getYear_publication()
		{
			return Year_publication;
		}
		

};


int main()
{
	BookType books[10];
		cout<<"\t\t\t********************WELCOME TO THE OFFICIAL BOOK CENTRE:********************\n\n\n";
		for(int i=0;i<10;i++)
		{
			string title,publishr;
			int no,isbn,cost,num,years;
			
			cout << "\t\t\t********************ENTER DETAILS OF BOOK :"<<i+1 <<"*********************\n\n\n";
		
			cout << "\nENTER THE TITLE OF THE BOOK:";
			cin >>title;
			books[i].settitle(title);
			
			cout << "\nENTER THE NUMBER OF AUTHERS AVAILABE FOR THIS BOOK:";
			cin >>no;
			books[i].setNo_authers(no);
			
			string ptr[no];
				for(int k=0;k<no;k++)
				{
					cout << "\nENTER THE " << k+1 << " AUTHER NAME:";
					cin >> ptr[k];
				}
			books[i].setauthers(ptr);	
			
			cout << "\nENTER PUBLISHERS NAME:";
			cin >>publishr;
			books[i].setpublisher(publishr);
			
			cout << "\nENTER ISBN NUMBER OF THE BOOK:";
			cin >>isbn;
			books[i].setISBN(isbn);
			
			cout << "\nENTER COST OF THE BOOK:";
			cin >>cost;
			books[i].setprice(cost);
			
			cout << "\nHOW MANY COPIES ARE AVAILABLE";
			cin >>num;
			books[i].setNo_Copies(num);
			
			cout << "\nENTER PUBLICATION YEAR:";
			cin >>years;
			books[i].setYear_publication(years);
	
		}
		
int choice;		
		
		do 
		{
			
			cout << "ENTER 1 FOR VIEWING NAMES OF AUTHERS:\nENTER 2 FOR VIEWING BOOKS TITLES:\nENTER 3 FOR VIEWING BOOKS PULISHERS:\nENTER 4 FOR VIEWING BOOKS ISBN NUMBER:\n\n";
			cout << "ENTER 5 FOR VIEWING COST OF THE BOOK:\nENTER 6 FOR VIEWING AVAILABLE COPIES OF BOOK:nENTER 7 FOR VIEWING BOOKS PUBLICATION YEAR:";
			cout << "ENTER 8 FOR UPDATE NUMBER OF COPIES:\nENTER 9 FOR SEARCH BOOK BY PUBLISHER NAME:\n";
			cout << "ENTER 10 FOR SEARCH BOOK BY ISBN NUMBER:\nENTER 11 FOR SEARCH BOOK BY TITLE \nENTER 12 FOR EXIT:";
			
			cout << "\n\n\nSELECT ONE OPTION:";
			cin >> choice;
			switch(choice)
			{
				case 1:
					{
						for(int i=0;i<10;i++)
						{
							cout << "\n\nBOOKS OF" << i+1 << " AUTHER ARE " << books[i].getNo_authers();
							books[i].getauthers();
							cout << endl;
						
						}
						break;
					}
					
				case 2:
					{
						for(int i=0;i<10;i++)
						{
							books[i].showtitle();
							cout << endl;
						}
						break;
					}
					
				case 3:
					{
						for(int i=0;i<10;i++)
						{
							books[i].getpublisher();
							cout << endl;
						}
						break;
					}
					
				case 4:
					{
								
						for(int i=0;i<10;i++)
						{
							books[i].showISBN();
							cout << endl;
						}
						break;
					}
					
				case 5:
					{
						for(int i=0;i<10;i++)
						{
							books[i].showprice();
							cout << endl;
						}
						break;
					}
				case 6:
					{
						for(int i=0;i<10;i++)
						{
							books[i].showNo_Copies();
							cout << endl;
						}
						break;
					}
					
				case 7:
					{
						for(int i=0;i<10;i++)
						{
							books[i].showYear_publication();
							cout << endl; 
						}
						break;
					}
					
				case 8:
					{
						int bok_no,neew;
						cout << "\n\nENTER THE BOOK NUMBER TO UPDATE BOOK:\n\n";
						cin >>bok_no;
						
						cout << "\n\nBOOK" << bok_no << " CURRENT: ";
						books[bok_no-1].showNo_Copies();
						
						cout << "\n\nENTER THE NEW NUMBER OF COPIES WHICH ARE AVIALABLE:\n\n" << bok_no << ": ";
						cin >>neew;
						books[bok_no-1].setNo_Copies(neew);
						cout << "\n\nDATA UPDATED!\n\n";
						break;
					}
					
				case 9:
					{
						string nam;
						cout<<"\n\nENTER PUBLISHER NAME TO SEARCH:\n";
						cin>>nam;
						for(int i=0;i<10;i++)
						{
							books[i].checkpublisher(nam);
						}	
						break;			
					}
					
				case 10:
					{
						int nom;
						cout<<"\n\nENTER THE ISBN NUMBER OF THE BOOK:";
						cin>>nom;
						for(int i=0;i<10;i++)
						{
							books[i].checkISBN(nom);
						}
						break;
					}
					
				case 11:
					{
						string namee;
						cout<<"\n\nENTER THE TITLE NAME TO BE SEARCHED:";
						cin>>namee;
						for(int i=0;i<10;i++)
						{
							books[i].checktitle(namee);
						}
						break;
					}
					
				default:
					{
						cout<<"\n\n\nTHANK YOU FOR USING OUR PROGRAM:";
					}
				
			}
			
			
		}while(choice!=12);
	}
