//name : Abdul Sami Qasim
//ID : 22I-1725
//Assignment number 3

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int num1=1;																	//variable to be printed
	int space=18;																//spaces to shape output into diamond
	int num2=1;																	//variable that acts as limit
	int loop=9;																	//loop iteration count
	
	for(;loop>0;loop--)															//outer loop that prints pyramid
	{
		cout<<setw(space);
		
		while(num1<=num2)														//increasing value variable printer
		{
			cout<<num1<<" ";
			num1++;
		}
		
		num1=num2;
		num1--;
		
		while(num1)															//decreasing value variable printer
		{
			cout<<num1<<" ";
			num1--;
		}
		
		
		cout<<endl;
		
		num2++;
		num1=1;
		space-=2;
	}
	
	loop=9;																	//reinitializing variables for last loop
	space=4;
	num1=1;
	num2=8;
	
	for(;loop>0;loop--)														//outer loop that prints lower triangle
	{
		cout<<setw(space);
	
		while(num1<=num2)													//loop for printing variable
			{
				cout<<num1<<" ";
				num1++;
			}
			
		cout<<endl;
			
		num1=1;														
		num2--;
		space+=2;
		
	}
return 0;
}
