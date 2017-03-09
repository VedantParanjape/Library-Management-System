#include<iostream>
#include<process.h>
using namespace std;

int menu();

int menu()
{
	int option;
	system("cls");
	cout<<"\t\t\t       WELCOME !!\n"<<"\t\t      LIBRARY MANAGEMENT PROGRAM\n"<<endl;   //this the function menu() used to show menu
	cout<<"\t\t______________________________________          "<<endl;
	cout<<"\t\t|                                    |          "<<endl;
	cout<<"\t\t|             ::Press::              |          "<<endl;
	cout<<"\t\t|       1. Input Student Data        |          "<<endl;
	cout<<"\t\t|       2. Input Book Data           |          "<<endl;
	cout<<"\t\t|       3. Show Student Data         |          "<<endl;
	cout<<"\t\t|       4. Show Book Data            |          "<<endl;
	cout<<"\t\t|       5. Issue Book                |          "<<endl;
	cout<<"\t\t|       6. Return Book               |          "<<endl;
	cout<<"\t\t|       7. Show All User Data        |          "<<endl;
	cout<<"\t\t|       8. Search book               |          "<<endl;
	cout<<"\t\t|       9. About                     |          "<<endl;
   	cout<<"\t\t|       10. Exit                     |          "<<endl;
 	cout<<"\t\t|____________________________________|          "<<endl;

	cin>>option;
	
	return option;
}
