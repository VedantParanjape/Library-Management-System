#include <iostream>
#include "bookdata.h"
#include "userdata.h"
#include "data_manage.h"
#include "fetchvariables.h"
#include "show_formatted_data.h"
#include "menu.h"
#include "about.h"
#include "booksearch.h"
using namespace std;

///////////////////////
///main program ///////
//////////////////////

main()
{

    fetchvariables();                                     //sets variables of data management to value of zero at the start of the program
	do
	{
	  switch(menu())                                      //switch to choose between different tasks
		{
			case 1:
				get_userdata();
				break;
				
				case 2:
					get_bookdata();
					break;
					
					case 3:
						show_userdata();
						break;
						
						case 4:
							show_bookdata();
							break;
							
							case 5:
							    issue_book();
							    break;
								
								case 6:
							      	return_book();
								    break;
									
									case 7:
										show_formatted_data();
										break;
										
										case 8:
											search_accid();
											break;
											
										    case 9:
												about();
												break;
												
												case 10:
													exit(0);
             										break;
													

													
											
									
		}
	}while(1);
}
	

	
	
	
	

