#include<iostream>
#include<process.h>
using namespace std;

///////////////////////
//////variables///////
/////////////////////

struct user
{
	int roll_no;                                      //student data structure
	char name[15];	
};
int user_total;
user student[100];

///////////////////

///////////////////////
//function prototype//
/////////////////////

void get_userdata();
void show_userdata();

///////////////////

/////////////////////////
//function declaration//
///////////////////////

void get_userdata()
{
	
	cout<<"Enter the number of students whose data is to be entered"<<endl;  //takes the total number of students
	cin>>user_total;
	
	for(int i=0;i<user_total;i++)
	{
		cout<<"Enter the roll number of student"<<endl;                      //loop to take input of student roll no and name
		cin>>student[i].roll_no;
		
		cout<<"Enter the name of the student"<<endl;
		cin>>student[i].name;
	}
	 system("pause");
}

void show_userdata()
{
	int q;
	cout<<"Roll No.\tName"<<endl;
	
	for(int j=0;j<user_total;j++)
	{	                                          //loop to show student data
		cout<<student[j].roll_no<<"\t\t"<<student[j].name<<endl;
	}
system("pause");
}

/////////////////////////////////////////
