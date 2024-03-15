//name : Abdul Sami Qasim
//ID : 22I-1725
//Assignment number 4

#include <iostream>
#include <cmath>


int convert (long);

using namespace std;
int main()
{
	long input;
	long input1;
	long flag;
	
	cout<<"Enter a binary number : ";
	cin>>input;
	
	input1=input;
	while (input1>0)														//digit validation
	{
		flag=input1%10;
		
		if((flag!=0) && (flag!=1))											//input validation (checks the input via digits)
		{
			cout<<"Enter a valid input containing only 0's and 1's : ";
			cin>>input;
			
			input1=input;
			flag=input1%10;
		}
			
		input1=input1/10;
				
	}																//changing colour to improve visibility
	
	cout<<endl<<"The binary number "<<"\033[1;36m"<<input<<"\033[0m"<<" is written as "<<"\033[1;36m"<<convert(input)<<"\033[0m"<<" in the decimal system."<<endl;
	
return 0;
}

int convert (long number)											//function definition
{
	
	int storage;
	long flag;														//copy of input value
	int output=0;
	int digit=0;
	int limit=0;
	
	flag=number;
	
	while(number>0)											//digit counting block
	{
		storage=number%10;

		digit++;
		number=number/10;
	}
	
	while(limit<=digit)				//digits are the digits calculated and limit makes the loop run till the digits are completed
	{	
		
		storage=flag%10;
		
		output+=storage*(pow(2,limit));				//storing the decimal value
		
		flag=flag/10;
		limit++;
	}
	
return output;										//returning decimal value
}
