#include<iostream>
#include <process.h>
using namespace std;

///////////////////////////
///variable declaration///
/////////////////////////

struct item                    //structure declaration for book data and bookname
{
	int book_id;
	char name[15];
};
int book_total;
item book[1000];

////////////////////////

/////////////////////////
///function prototype///
///////////////////////

void get_bookdata();
void show_bookdata();

//////////////////////

//////////////////////////
//fuinction declaration//
////////////////////////

void get_bookdata()                                         //function to get book data
{
	cout<<"Enter the total number of books"<<endl;
	cin>>book_total;
	
	for(int ii=0;ii<book_total;ii++)                        //this loop will take bookid and book name no times indicated
	{
		cout<<"Enter the Accession ID of the book"<<endl;   //input of accession id
		cin>>book[ii].book_id;
		
		cout<<"Enter the name of the book"<<endl;           //input of book name
		cin>>book[ii].name;
	}
	system("pause");                                        //pause system

	
}

void show_bookdata()                                       //function to show book data
{   
int qw;
cout<<"Acc.Id\tName"<<endl;
    for(int jj=0;jj<book_total;jj++)                        //loop to show book accid and name
    {
    	
	    cout<<book[jj].book_id<<"\t"<<book[jj].name<<endl;
	}
  system("pause");
}

