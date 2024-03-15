//name : Abdul Sami Qasim
//ID : 22I-1725
//Assignment number 4

#include <iostream>
#include <cmath>

int GCD (int,int);

using namespace std;
int main()
{
	int input1;														//first number
	int input2;														//second number
	
	cout<<"Enter first positive number : ";
	cin>>input1;
	
	while(input1<0)															//validation block for first input
	{
		cout<<"Invalid input, enter a positive number : ";
		cin>>input1;
	}
	
	cout<<"Enter second positive number : ";								
	cin>>input2;
	
	while(input2<0)															//validation block for second input
	{
		cout<<"Invalid input, enter a positive number : ";
		cin>>input2;
	}
	
	cout<<"The GCD of the two numbers is : "<<GCD (input1,input2)<<endl;
	
return 0;
}

int GCD (int var1, int var2)												//function definition
{
	int flag;
	int remainder;														
	
	if (var1<=var2)														//storing larger variable in var1
	{
		flag=var1;
		var1=var2;
		var2=flag;
	}
	
	while ((var1%var2)>0)										//block to use Euclidean algorithm to calculate GCD
	{
		remainder=var1%var2;
		var1=var2;
		var2=remainder;
	}
	
return var2;																//returning GCD
}		
