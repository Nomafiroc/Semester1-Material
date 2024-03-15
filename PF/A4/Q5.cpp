//name : Abdul Sami Qasim
//ID : 22I-1725
//Assignment number 4

#include <iostream>

int highLow(int);

using namespace std;
int main()
{
	int input;
	
	cout<<endl<<"Enter the number to be checked : ";
	cin>>input;
	
	while(input<0)															//input validation block
	{	
		cout<<endl<<"Enter a valid input (positive) : ";
		cin>>input;
	}
	
	if(highLow(input)==1)													//condition for alternating values
	{
		cout<<endl<<"Value is alternating (True)."<<endl;
	}
	
	if(highLow(input)==0)													//condition for non alternating values
	{
		cout<<endl<<"Value is not alternating (False)."<<endl;
	}
	

return 0;
}

int highLow (int number)													//defining function
{
	int flag1;
	int flag2;
	
	while(number>0)
	{
		if ((number/10)==0)												//1 digit number case
		{
			return 1;
		}
		
		flag1=number%10;												//flag 1 holds one digit
		number=number/10;
		
		flag2=number%10;												//flag 2 holds neighbouring digit
		number=number/10;
															//marking flag 1 and flag 2 according to given information
															
		((flag1<=4) && (flag1>=0))?flag1=1:(((flag1>=5) && (flag1<=9))?flag1=2:0);
		((flag2<=4) && (flag2>=0))?flag2=1:(((flag2>=5) && (flag2<=9))?flag2=2:0);
		
		if (flag1==flag2)												//both digits are either high or low
		{
			return 0;
		}
		
	}
	
return 1;																//both digits are alternating
}
