#include<iostream>
#include<process.h>
#include<string.h>
using namespace std;

void search_accid();


void search_accid()
{
	int aaid;
	int index2,index3,flag =0;
	cout<<"Enter the Accession ID of the book to be searched: ";
	cin>>aaid;
	
	for(int as=0;as<book_total;as++)
	{
		if(book[as].book_id == aaid)
		{
			index2 = as;

		}

    }
    for(int aq=0;aq<user_total;aq++)
    {
    	if(usr_bookid[aq] == aaid && usr_bookid[aq] != 0)
    	{
			index3 = aq;
			flag = 1;
		}
	}
	if(flag == 1)
	{
		cout<<"Name of book:  "<<book[index2].name<<endl;
		cout<<"Accession ID of book: "<<book[index2].book_id<<endl;
		cout<<"Issuers name: "<<student[index3].name<<endl;
		cout<<"Issuers roll no: "<<student[index3].roll_no<<endl<<endl;
	}
	else
	{
		cout<<"Accession ID:"<<book[index2].book_id<<endl;
		cout<<"Name of book:"<<book[index2].name<<endl;
	  	cout<<"Issuers name: NIL"<<endl;
		cout<<"Issuers roll no: NIL"<<endl;
	}
	system("pause");
}


