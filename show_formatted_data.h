#include<iostream>
#include <process.h>
using namespace std;

void show_formatted_data();

void show_formatted_data()
{
	int qa;
	cout<<"Roll no.  Name\t  Acc ID of book issued"<<endl;                           //shows formatted data about who has issued which book
	for(int io=0;io<user_total;io++)
	{
		if(status[io] == 1)
		{
		cout<<student[io].roll_no<<"   \t"<<student[io].name<<"\t\t"<<"nil"<<endl;
	    }
	    else
	    {
	    cout<<student[io].roll_no<<"\t"<<student[io].name<<"\t\t"<<usr_bookid[io]<<endl;
		}
		
    }
    system("pause");
}
