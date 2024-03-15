//name : Abdul Sami Qasim
//ID : 22I-1725
//Assignment number 2

#include <iostream>
#include <string>
using namespace std;
int main()
{
	char choice1;
	int choice2;
	int choice3;
	int total;
	int price;
	
																//user is shown choice menu	
	
	
	cout<<"Welcome to the restaurant's order window, please select one of the following options."<<endl;
	cout<<"Press \"B\" for Burger\nPress \"F\" for French Fries\nPress \"P\" for Pizza\nPress \"S\" for Sandwiches"<<endl;
	cin>>choice1;
	if (choice1=='b'||choice1=='B'||choice1=='f'||choice1=='F'||choice1=='p'||choice1=='P'||choice1=='s'||choice1=='S')
	{
		switch (choice1=='b'||choice1=='B')											//specific item choice menu
		{
			case 1:													//submenu is shown to user on the basis of first choice
			
				cout<<"Please select one of the following options."<<endl;
				cout<<"\nBurger 1 Rs. 200   (press 1)"<<endl;
				cout<<"\nBurger 2 Rs. 250   (press 2)"<<endl;
				cout<<"\nBurger 3 Rs. 300   (press 3)"<<endl;
				cout<<"\nBurger 4 Rs. 350   (press 4)"<<endl;
				cin>>choice2;
				
						switch(choice2)								//prices are specified according to choice of submenu
						{
							case 1:
								price=200;
								
							break;
							case 2:
								price=250;
								
							break;
							case 3:
								price=300;
								
							break;
							case 4:
								price=350;
						}		
			break;
			case 0:
				switch (choice1=='p'||choice1=='P')
				{
					case 1:
						cout<<"Please select one of the following options."<<endl;
						cout<<"\nPizza 1 Rs. 200   (press 1)"<<endl;
						cout<<"\nPizza 2 Rs. 250   (press 2)"<<endl;
						cout<<"\nPizza 3 Rs. 300   (press 3)"<<endl;
						cout<<"\nPizza 4 Rs. 350   (press 4)"<<endl;
						cin>>choice2;
						
						switch(choice2)
						{
							case 1:
								price=200;
								
							break;
							case 2:
								price=250;
								
							break;
							case 3:
								price=300;
								
							break;
							case 4:
								price=350;
						}
					break;
					case 0:
						switch (choice1=='f'||choice1=='F')
						{
							case 1:
								cout<<"Please select one of the following options."<<endl;
								cout<<"\nFrench Fries 1 Rs. 200   (press 1)"<<endl;
								cout<<"\nFrench Fries 2 Rs. 250   (press 2)"<<endl;
								cout<<"\nFrench Fries 3 Rs. 300   (press 3)"<<endl;
								cout<<"\nFrench Fries 4 Rs. 350   (press 4)"<<endl;
								cin>>choice2;
								
								switch(choice2)
								{
									case 1:
										price=200;
										
									break;
									case 2:
										price=250;
										
									break;
									case 3:
										price=300;
										
									break;
									case 4:
										price=350;
								}
							break;
							case 0:
								switch (choice1=='s'||choice1=='S')
								{
									case 1:
										cout<<"Please select one of the following options."<<endl;
										cout<<"\nSandwich 1 Rs. 200   (press 1)"<<endl;
										cout<<"\nSandwich 2 Rs. 250   (press 2)"<<endl;
										cout<<"\nSandwich 3 Rs. 300   (press 3)"<<endl;
										cout<<"\nSandwich 4 Rs. 350   (press 4)"<<endl;
										cin>>choice2;
										
										switch(choice2)
										{
											case 1:
												price=200;
												
											break;
											case 2:
												price=250;
												
											break;
											case 3:
												price=300;
												
											break;
											case 4:
												price=350;
										}
									break;
								}
						} 
				}
		}
		if (choice2>0 && choice2<=4)											//quantity choice
		{
			switch(int(choice1=='b' || choice1=='B'))
			{
				case 1:
					cout<<"Please enter one of the following numbers for the amount of food items needed."<<endl;
					cout<<"\n For 1 Burger (press 1)"<<endl;		
					cout<<"\n For 2 Burgers (press 2) "<<endl;
					cout<<"\n For 4 Burgers (press 4) "<<endl;
					cin>>choice3;
				break;
				case 0:
					switch(choice1=='f' || choice1=='F')
					{
					case 1:
						cout<<"Please enter one of the following numbers for the amount of food items needed."<<endl;
						cout<<"\n For 1 French Fries (press 1)"<<endl;		
						cout<<"\n For 2 French Fries (press 2) "<<endl;
						cout<<"\n For 4 French Fries (press 4) "<<endl;
						cin>>choice3;
					break;
					case 0:
						switch(choice1=='p' || choice1=='P')
						{
						case 1:
							cout<<"Please enter one of the following numbers for the amount of food items needed."<<endl;
							cout<<"\n For 1 Pizza (press 1)"<<endl;		
							cout<<"\n For 2 Pizzas (press 2) "<<endl;
							cout<<"\n For 4 Pizzas (press 4) "<<endl;
							cin>>choice3;
						break;
						case 0:
							switch(choice1=='s' || choice1=='S')
							{
							case 1:
								cout<<"Please enter one of the following numbers for the amount of food items needed."<<endl;
								cout<<"\n For 1 Sandwich (press 1)"<<endl;		
								cout<<"\n For 2 Sandwiches (press 2) "<<endl;
								cout<<"\n For 4 Sandwiches (press 4) "<<endl;
								cin>>choice3;
							}
						}
					}	
			}
		
		if(choice3>0 && choice3<=4 && choice3!=3)										//input validation
		{	
			total=price*choice3;															//calculating total bill
			cout<<"\t\tYour total bill is = "<<total<<endl;
		}
		else																			//more input validations
		{
			cout<<"Please enter a valid input in selecting the quantity of food."<<endl;
		}
	
		}
		else
		{
			cout<<"Please enter a valid input while selecting which food item you want in the specified category."<<endl;
		}
	}
	else
	{
		cout<<"Please enter a valid input for selecting the category of food."<<endl;
	}		
return 0;
}
