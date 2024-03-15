//name : Abdul Sami Qasim
//ID : 22I-1725
//Assignment number 2

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	int adult;
	int child=0;
	float adultcost;
	float childcost;
	float total;
	int choice1;
	int choice2;
	char choice3;
	int vip;
	int premium;
	int firstclass;
	int general;
	int price;
	int seats1=750,seats2=215,seats3=3,seats4=27,seats5=1525,seats6=2741,seats7=1739,seats8=2379;
	int maxseats;
	string CNIC;
		
													//showing first menu of available matches
													
													
	cout<<"Welcome to the ticket buying process for the upcoming PSL matches,"; 
	cout<<" following is the schedule of the upcoming matches,"; 
	cout<<" please select one of the following options."<<endl;
	
	cout<<"\n\n1. 27 Feb 2020 – Islamabad United v Quetta Gladiators, Pindi Cricket Stadium";
	cout<<"\n\t(7pm-10.15pm)";
	cout<<"\n\n2. 28 Feb 2020 – Peshawar Zalmi v Lahore Qalandars, Pindi Cricket Stadium";
	cout<<"\n\t(8pm-11.15pm)";
	cout<<"\n\n3. 29 Feb 2020 – Islamabad United v Peshawar Zalmi, Pindi Cricket Stadium";
	cout<<"\n\t(7pm-10.15pm)";
	cout<<"\n\n4. 1 Mar 2020 – Islamabad United v Karachi Kings, Pindi Cricket Stadium";
	cout<<"\n\t(7pm-10.15pm)";
	cout<<"\n\n5. 2 Mar 2020 – Peshawar Zalmi v Karachi Kings, Pindi Cricket Stadium";
	cout<<"\n\t(7pm-10.15pm)";
	cout<<"\n\n6. 5 Mar 2020 – Peshawar Zalmi v Quetta Gladiators, Pindi Cricket Stadium";
	cout<<"\n\t(7pm-10.15pm)";
	cout<<"\n\n7. 7 Mar 2020 – Peshawar Zalmi v Islamabad United, Pindi Cricket Stadium";
	cout<<"\n\t(2pm-5.15pm)";
	cout<<"\n\n8. 8 Mar 2020 – Multan Sultans v Islamabad United, Pindi Cricket Stadium";
	cout<<"\n\t(2pm-5.15pm)";
	
	cout<<"\n\n\tEnter your choice (1 - 8) : "<<endl;
	cin>>choice1;
	
	if ((choice1>0)&&(choice1<=8))										//first input validation for choice of match
	{
																								
		switch (choice1<=3)												//declaring ticket prices according to selected match
		{
			case 1:
				vip=3000;
				premium=1500;
				firstclass=1000;
				general=500;
			break;
			case 0:	
				switch ((choice1==4) || (choice1==7))
				{
					case 1:
						vip=2000;
						premium=1000;
						firstclass=500;
						general=250;
					break;
					case 0:				
						switch ((choice1==5) || (choice1==6) || (choice1==8))
						{
							case 1:
								vip=1500;
								premium=1000;
								firstclass=500;
								general=250;
							break;
							case 0:
								cout<<" ";
						}
				}
		}
		
														//showing menu of available enclosures, class, prices and available seats
		
		cout<<"enclosure"<<setw(23)<<"class"<<setw(20)<<"Ticket Price"<<setw(22)<<"Seats available"<<endl;
		cout<<"1. Imran Khan"<<setw(19)<<right<<"VIP"<<setw(15)<<right<<vip<<setw(19)<<seats1<<endl;
		cout<<"2. Javed Miandad"<<setw(16)<<right<<"VIP"<<setw(15)<<right<<vip<<setw(19)<<seats2<<endl;
		cout<<"3. Javed Akhter"<<setw(17)<<right<<"VIP"<<setw(15)<<right<<vip<<setw(19)<<seats3<<endl;
		cout<<"4. Azhar Mehmood"<<setw(16)<<right<<"VIP"<<setw(15)<<right<<vip<<setw(19)<<seats4<<endl;
		cout<<"5. Sohail Tanveer"<<setw(15)<<right<<"First class"<<setw(15)<<right<<firstclass<<setw(19)<<seats5<<endl;
		cout<<"6. Shoaib Akhtar"<<setw(16)<<right<<"Premium"<<setw(15)<<right<<premium<<setw(19)<<seats6<<endl;
		cout<<"7. Imran Buksh"<<setw(18)<<right<<"General"<<setw(15)<<right<<general<<setw(19)<<seats7<<endl;
		cout<<"8. Yasir Arafat"<<setw(17)<<right<<"General"<<setw(15)<<right<<general<<setw(19)<<seats8<<endl;
		
		cout<<"\nPlease select an enclosure (1-8) : "<<endl;
		cin>>choice2;
		
		switch (choice2>0 && choice2<=8)				//price found for each scenario and validating input of enclosure choice
		{
			case 1:
				switch(choice2<=4)
				{
					case 1:
						price=vip;
						break;
					case 0:
						switch (choice2==5)
						{
							case 1:
								price=firstclass;
								break;
							case 0:
								switch (choice2==6)
								{
									case 1:
										price=premium;
									break;
									case 0:
										switch (choice2==7 || choice2==8)
										{
											case 1:
												price=general;
											break;
											case 0:
												cout<<" "<<endl;
										}
								}
						}				
				}
			break;
			case 0:
				cout<<"Please enter a valid input."<<endl;		
		}
		if (choice2>0 && choice2<=8)	
		{
		switch (choice2)
		{
			case 1:
				maxseats=seats1;
			break;
			
			case 2:
				maxseats=seats2;
			break;
			
			case 3:
				maxseats=seats3;
			break;
			
			case 4:
				maxseats=seats4;
			break;
			
			case 5:
				maxseats=seats5;
			break;
			
			case 6:
				maxseats=seats6;
			break;
			
			case 7:
				maxseats=seats7;
			break;
			
			case 8:
				maxseats=seats8;
		}
		cout<<"Are you interested in buying tickets for a family? (Y = yes, N = no) : ";				//input taken for family or not
		cin>>choice3;
		
		switch  (choice3=='Y' || choice3=='y' || choice3=='n' || choice3=='N')
		{
			case 1:
				switch (choice3=='Y' || choice3=='y')
				{
					case 1:
						cout<<"Enter number of tickets for children (minimum 2 and maximum 5) : ";
						cin>>child;
						
						switch (child>=2 && child<=5)
						{
						case 1:
							cout<<"Enter number of tickets for adults (maximum 4 adults) : ";
							cin>>adult;
							
							switch (adult>0 && adult<=4)
							{
								case 0:
									cout<<"Please enter a number between 1 and 4."<<endl;
							}
						
						break;
						case 0:
							cout<<"Please enter a number between 2 and 5."<<endl;
						}
						
					break;
					
					case 0:
						cout<<"Enter number of tickets for adults : ";
						cin>>adult;
						
						
						switch (adult>0 && adult<=8)
						{
							case 0:
								cout<<"Please enter a number between 1 and 8."<<endl;
						}
				}
			break;
			
			case 0:
				cout<<"Please enter a valid input (either y or n)"<<endl; 
		}
		
		
			if (child+adult<maxseats)													//taking users CNIC number
			{
				if (choice3=='Y' || choice3=='y' || choice3=='n' || choice3=='N')
				{	
					if  ((child>=2 && child<=5)&& (adult>0 && adult<=8))
					{
							
						cout<<"Please enter your CNIC number : ";
						cin.ignore();
						getline(cin, CNIC);
						
																		//finding out cost
						switch (choice3=='y' || choice3=='Y')
						{
							case 1:
								adultcost=adult*(price-(price*0.1));
								childcost=child*(price-(price*0.2));
							
							break;
							case 0:
								if (adult>4)
								{
									adultcost=adult*(price-(price*0.1));
								}
								else
								{
									adultcost=adult*price;
								}
						}
						
						if (choice3=='y' || choice3=='Y')
						{
							total=childcost+adultcost;
						}
						else 
						{
							total=adultcost;
						}
						
						cout<<"Total cost of the tickets you bought is : "<<total<<endl;
					
					}
				}
			}
			else
			{
				cout<<"Amount of tickets exceeded amount of available seats."<<endl; 
			}
		}
	}
	else
	{
		cout<<"Please enter a valid input."<<endl;
	}
	
return 0;
}
