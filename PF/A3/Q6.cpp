//name : Abdul Sami Qasim
//ID : 22I-1725
//Assignment number 3

#include <iostream>
using namespace std;
int main()
{
	int number=1;																		//number to be printed
	int repeat;
	
	repeat=40;																			//loop count 
	for(;repeat>0;repeat--)													//loop for line of dashes
	{
		cout<<"-";
	}
	cout<<endl;
	
	repeat=10;																			//resetting loop count
	for(;repeat>0;repeat--)													//loop for symbol combiantion
	{
		cout<<"_-^-";
	}
	cout<<endl;
	
	repeat=1;																			//resetting loop count
	for(;repeat<=20;repeat++)												//loop for number line
	{
		if(number==10)														//resetting number to 0 if it reaches 9
		{
			number=0;
		}
		cout<<number<<number;
		number++;
	}
	cout<<endl;
	
	repeat=40;																			//resetting loop count
	for(;repeat>0;repeat--)													//loop for last line of dashes
	{
		cout<<"-";
	}
	cout<<endl;
	
return 0;
}
	
	
	
