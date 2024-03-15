//name : Abdul Sami Qasim
//ID : 22I-1725
//Assignment number 3

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	int line=1;																//variable to track number of loops to run
	int input;																	//variable to store input
	
	srand(time(0));																//seed randomizer
	
	for(;line<=5;line++)																
	{
		cout<<"Please enter the amount of asterisks to be printed : ";
		cin>>input;
		
		while(input<1 || input>30)													//input validation block
		{
			cout<<"Invalid input. Enter a number between 1 and 30"<<endl;
			
			cout<<"Please enter the amount of asterisks to be printed : ";
			cin>>input;
		}
		
		cout<<endl<<endl<<endl;
		
		int colour=(rand()%6)+31;										//colour code randomizer

		
		for(;input>0;input--)												//asterisk printing loop
		{
	
			
			cout<<"\033[1;"<<colour<<"m";								//randomized colour producer
			cout<<"*";
			cout <<"\033[0m";
		}
		cout<<endl<<endl<<endl;
	}
	
return 0;
}
