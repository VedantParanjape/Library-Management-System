#include<iostream>
#include<process.h>
using namespace std;

int status[100];
int usr_bookid[100];



void issue_book();
void return_book();
int validate(int acid);


void issue_book()                                                                         //this is a function to issue a book
{
   	int roll;
	int index,index1;
	
	cout<<"Enter the roll no of student who wants to issue a book"<<endl;               //takes the roll no of the student who wants to issue a book
	cin>>roll;
	
	index = roll-1;
	cout<<endl<<"Name: "<<student[index].name<<" Roll No.: "<<student[index].roll_no<<endl;
    cout<<"Each student can issue only one book!!!!!!!!!"<<endl<<endl;
	
	if(status[index] == 1)                                                             //this program segment checks whether the student has issued a book or not
	{
		int b_id,indexb;
		cout<<"Enter the Accession id of the book to be issued"<<endl;
		cin>>b_id;
		if(validate(b_id) == 1)
        {
		 status[index] = 0;
	     usr_bookid[index] = b_id;
	     cout<<"You have successfully issued the book"<<endl;
	    }
	    else
	    {
	    	cout<<"This Book has been already issued"<<endl;
		}
	}
	else
	{
		cout<<"This student has issued a book already"<<endl;
	}
	system("pause");
}

void return_book()
{
	int rollr=0;
	int indexr=0;
	
	cout<<"Enter the roll number of the student who wants to return book"<<endl;       //takes the roll no of the student who wants to issue book
	cin>>rollr;
	
	indexr = rollr - 1;
    cout<<"Name: "<<student[indexr].name<<" Roll No.: "<<student[indexr].roll_no<<endl;
	if(status[indexr] == 0)                                                           //checks if the student has actually issued a book if yes returns the books
	{
		status[indexr] = 1;
		usr_bookid[indexr] = 0;
		cout<<"The book has been returned successfully"<<endl;
	}
	else
	{
		cout<<"This student has not issued any books"<<endl;
	}
	system("pause");
}



int validate(int acid)
{
	int flag = 1;

	for(int iou=0;iou<user_total;iou++)
	{
		if(usr_bookid[iou] == acid && usr_bookid[iou] != 0)
		{
          flag = 0;
        }
	}
	return flag;
}



