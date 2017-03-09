#include<iostream>
using namespace std;

void fetchvariables();

void fetchvariables()
{
	for(int ia=0;ia<100;ia++)                    //this loop sets the data management variables to their initial value
	{
		status[ia] = 1;
		usr_bookid[ia] = 0;
	}
	
}
