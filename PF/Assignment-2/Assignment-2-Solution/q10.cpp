#include <iostream>

using namespace std;


int main() {

	int bill;
	char choice;
	int iChoice;
	char cChoice;
	
	cout<<"----------Menu----------\n\tB=Burger\n\tF=French Fries\n\tP=Pizza\n\tS=Sandwiches"<<endl;
	cout<<"What would you like to order?\nEnter you choice : ";
	cin>>choice;
	
	switch(toupper(choice)) {
		case 'B':
			{
				cout<<"----------Menu----------\nBurger 1 Rs.200 = 1\nBurger 2 Rs.250 = 2\nBurger 3 Rs.300 = 3\nBurger 4 Rs. 350 = 4"<<endl;
				cout<<"What would you like to order?\nEnter your choice : ";
				cin>>iChoice;
				
				switch(iChoice){
					case 1:
						{
							cout<<"----------Menu----------\n\tFor 1 Burger = A\n\tFor 2 Burgers = B\n\tFor 4 Burgers = C"<<endl;
							cout<<"How many burgers would you like to order?\nEnter your choice : ";
							cin>>cChoice;
							bill = 200;
							break;
						}
					case 2:
						{
							cout<<"----------Menu----------\n\tFor 1 Burger = A\n\tFor 2 Burgers = B\n\tFor 4 Burgers = C"<<endl;
							cout<<"How many burgers would you like to order?\nEnter your choice : ";
							cin>>cChoice;
							bill = 250;
							break;
						}
					case 3:
						{
							cout<<"----------Menu----------\n\tFor 1 Burger = A\n\tFor 2 Burgers = B\n\tFor 4 Burgers = C"<<endl;
							cout<<"How many burgers would you like to order?\nEnter your choice : ";
							cin>>cChoice;
							bill = 300;
							break;
						}
					case 4:
						{
							cout<<"----------Menu----------\n\tFor 1 Burger = A\n\tFor 2 Burgers = B\n\tFor 4 Burgers = C"<<endl;
							cout<<"How many burgers would you like to order?\nEnter your choice : ";
							cin>>cChoice;
							bill = 350;
							break;
						}
					
					switch(toupper(cChoice)) {
						case 'A':
							{
								bill *= 1;
								break;
							}
						case 'B':
							{
								bill *= 2;
								break;
							}
						case 'C':
							{
								bill *= 4;
								break;
							}
					}
				}
				break;
			}
		case 'F':
			{
				cout<<"----------Menu----------\nFries 1 Rs.50 = 1\nFries 2 Rs.75 = 2\nFries 3 Rs.100 = 3\nFries 4 Rs. 125 = 4"<<endl;
				cout<<"What would you like to order?\nEnter your choice : ";
				cin>>iChoice;
				
				switch(iChoice){
					case 1:
						{
							cout<<"----------Menu----------\n\tFor 1 Fries = A\n\tFor 2 Fries = B\n\tFor 4 Fries = C"<<endl;
							cout<<"How many fries would you like to order?\nEnter your choice : ";
							cin>>cChoice;
							bill = 50;
							break;
						}
					case 2:
						{
							cout<<"----------Menu----------\n\tFor 1 Fries = A\n\tFor 2 Fries = B\n\tFor 4 Fries = C"<<endl;
							cout<<"How many fries would you like to order?\nEnter your choice : ";
							cin>>cChoice;
							bill = 75;
							break;
						}
					case 3:
						{
						cout<<"----------Menu----------\n\tFor 1 Fries = A\n\tFor 2 Fries = B\n\tFor 4 Fries = C"<<endl;
							cout<<"How many fries would you like to order?\nEnter your choice : ";
							cin>>cChoice;
							bill = 100;
							break;
						}
					case 4:
						{
							cout<<"----------Menu----------\n\tFor 1 Fries = A\n\tFor 2 Fries = B\n\tFor 4 Fries = C"<<endl;
							cout<<"How many fries would you like to order?\nEnter your choice : ";
							cin>>cChoice;
							bill = 125;
							break;
						}
					
					switch(toupper(cChoice)) {
						case 'A':
							{
								bill *= 1;
								break;
							}
						case 'B':
							{
								bill *= 2;
								break;
							}
						case 'C':
							{
								bill *= 4;
								break;
							}
					}
				}
				break;
			}
		case 'P':
			{
				cout<<"----------Menu----------\nPizza 1 Rs.700 = 1\nPizza 2 Rs.950 = 2\nPizza 3 Rs.1200 = 3\nPizza 4 Rs. 1400 = 4"<<endl;
				cout<<"What would you like to order?\nEnter your choice : ";
				cin>>iChoice;
				
				switch(iChoice){
					case 1:
						{
							cout<<"----------Menu----------\n\tFor 1 Pizza = A\n\tFor 2 Pizza = B\n\tFor 4 Pizza = C"<<endl;
							cout<<"How many pizzas would you like to order?\nEnter your choice : ";
							cin>>cChoice;
							bill = 700;
							break;
						}
					case 2:
						{
							cout<<"----------Menu----------\n\tFor 1 Pizza = A\n\tFor 2 Pizza = B\n\tFor 4 Pizza = C"<<endl;
							cout<<"How many pizzas would you like to order?\nEnter your choice : ";
							cin>>cChoice;
							bill = 950;
							break;
						}
					case 3:
						{
						cout<<"----------Menu----------\n\tFor 1 Pizza = A\n\tFor 2 Pizza = B\n\tFor 4 Pizza = C"<<endl;
							cout<<"How many pizzas would you like to order?\nEnter your choice : ";
							cin>>cChoice;
							bill = 1200;
							break;
						}
					case 4:
						{
							cout<<"----------Menu----------\n\tFor 1 Pizza = A\n\tFor 2 Pizza = B\n\tFor 4 Pizza = C"<<endl;
							cout<<"How many pizzas would you like to order?\nEnter your choice : ";
							cin>>cChoice;
							bill = 1400;
							break;
						}
					
					switch(toupper(cChoice)) {
						case 'A':
							{
								bill *= 1;
								break;
							}
						case 'B':
							{
								bill *= 2;
								break;
							}
						case 'C':
							{
								bill *= 4;
								break;
							}
					}
				}
				break;
			}
		case 'S':
			{
				cout<<"----------Menu----------\Sandwich 1 Rs.50 = 1\Sandwich 2 Rs.75 = 2\Sandwich 3 Rs.100 = 3\Sandwich 4 Rs. 125 = 4"<<endl;
				cout<<"What would you like to order?\nEnter your choice : ";
				cin>>iChoice;
				
				switch(iChoice){
					case 1:
						{
							cout<<"----------Menu----------\n\tFor 1 Sandwich = A\n\tFor 2 Sandwich = B\n\tFor 4 Sandwich = C"<<endl;
							cout<<"How many sandwiches would you like to order?\nEnter your choice : ";
							cin>>cChoice;
							bill = 50;
							break;
						}
					case 2:
						{
							cout<<"----------Menu----------\n\tFor 1 Sandwich = A\n\tFor 2 Sandwich = B\n\tFor 4 Sandwich = C"<<endl;
							cout<<"How many sandwiches would you like to order?\nEnter your choice : ";
							cin>>cChoice;
							bill = 75;
							break;
						}
					case 3:
						{
						cout<<"----------Menu----------\n\tFor 1 Sandwich = A\n\tFor 2 Sandwich = B\n\tFor 4 Sandwich = C"<<endl;
							cout<<"How many sandwiches would you like to order?\nEnter your choice : ";
							cin>>cChoice;
							bill = 100;
							break;
						}
					case 4:
						{
							cout<<"----------Menu----------\n\tFor 1 Sandwich = A\n\tFor 2 Sandwich = B\n\tFor 4 Sandwich = C"<<endl;
							cout<<"How many sandwiches would you like to order?\nEnter your choice : ";
							cin>>cChoice;
							bill = 125;
							break;
						}
					
					switch(toupper(cChoice)) {
						case 'A':
							{
								bill *= 1;
								break;
							}
						case 'B':
							{
								bill *= 2;
								break;
							}
						case 'C':
							{
								bill *= 4;
								break;
							}
					}
				}
				break;
			}
	}
	
	cout<<"Your total bill is "<<bill<<endl;
	
	
	return 0;
}
