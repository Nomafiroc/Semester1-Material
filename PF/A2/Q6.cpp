#include <iostream>
using namespace std;
int main()
{
	int day;
	int month;
	
	cout<<"please enter day number (1-31) : ";
	cin>>day;
	
	cout<<"Please enter month number (1-12) : ";
	cin>>month;
	
	cout<<"\nYou entered the date (month/day): "<<month<<"/"<<day<<endl;			//showing user his input in a format
	
	if (month>0 && month<=12)														//validating input for months
	{																			
	
		if (day>0&&day<=31)														//validating input for days
		{
			if(month==12 || month==3 || month==6 || month==9)
			{
				switch (month==12 && day>=16)
				{
					case 1:
						cout<<"\nWinter."<<endl;
					break;
					case 0:
						switch (month==3 && day<=15)
						{
							case 1:
								cout<<"\nWinter."<<endl;
							break;
							case 0:
								switch (month==3 && day>=16)
								{
									case 1:
										cout<<"\nSpring."<<endl;
									break;
									case 0:
										switch (month==6 && day<=15)
										{
											case 1:
												cout<<"\nSpring."<<endl;
											break;
											case 0:		
												switch (month==6 && day>=16)
												{
													case 1:
														cout<<"\nSummer"<<endl;
													break;
													case 0:	
														switch (month==9 && day<=15)
														{
															case 1:
																cout<<"\nSummer."<<endl;
															break;
															case 0:	
																switch (month==9 && day>=16)
																{
																	case 1:
																		cout<<"\nFall."<<endl;
																	break;
																	case 0:			
																		switch (month==12 && day<=15)
																		{
																			case 1:
																				cout<<"\nFall."<<endl;
																			break;
																			case 0:		
																				cout<<" ";		
																			break;
																		}																				
																}
														}
												}
										}
								}
						}
				}					
			}	
		if(month!=12 || month!=3 || month!=6 || month!=9)
		{
		switch (month)
		{
			case 1 :
				if (day<=31)
				{
					cout<<"\nWinter."<<endl;
				}					
			break;
																																																
			case 2 :
				if (day<=31)
				{
					cout<<"\nWinter."<<endl;
				}					
			break;
																										
			case 4 :
				if (day<=31)
				{
					cout<<"\nSpring."<<endl;
				}					
			break;
																										
			case 5 :
				if (day<=31)
				{
					cout<<"\nSpring."<<endl;
				}					
			break;
																										
			case 7 :
				if (day<=31)
				{
					cout<<"\nSummer."<<endl;
				}						
			break;
																										
			case 8 :
				if (day<=31)
				{
					cout<<"\nSummer."<<endl;
				}						
			break;
																										
			case 10 :
				if (day<=31)
				{
					cout<<"\nFall."<<endl;
				}						
			break;
																										
			case 11 :
				if (day<=31)
				{	
					cout<<"\nFall."<<endl;
				}
		}
		}
		}
		else
		{
			cout<<"\nEnter a valid day number."<<endl;							//day validation ends here
		}
	}
	else
	{
		cout<<"\nPlease enter a valid month number."<<endl;						//month validation ends here
	}
return 0;
}


