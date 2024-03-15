#include <iostream>
using namespace std;
int main()
{
	int var1;
	int var2;
	int var3;
	int var4;

	cout<<"Enter first number : ";
	cin>>var1;

	cout<<"Enter second number : ";
	cin>>var2;

	cout<<"Enter third number : ";
	cin>>var3;
															
															//taking three inputs and calculating largest number
															
	cout<<"\nFinding largest number out of three numbers in which all three are inputs."<<endl;

	cout<<(var1>var2&&var1>var3?"\nFirst number is the largest.":(var2>var1&&var2>var3?"\nSecond number is the largest":(var3>var1&&var3>var2?"\nThird number is the largest.":"\nEnter valid numbers.")));
	
												//taking fourth input and calculating largest number inbetween the four numbers
	
	cout<<"\nFinding largest number out of four numbers in which four are inputs."<<endl;
	
	cout<<"please enter 4th number.";
	cin>>var4;
																									
	cout<<(var1>var2&&var1>var3&&var1>var4?"\nFirst number is the largest.":(var2>var1&&var2>var3&&var2>var4?"\nSecond number is the largest":(var3>var1&&var3>var2&&var3>var4?"\nThird number is the largest.":(var4>var1&&var4>var2&&var4>var3?"\nFourth number is the largest.":"\nEnter valid numbers"))))<<endl;
	
	return 0;
}
	
	
