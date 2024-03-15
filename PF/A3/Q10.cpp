//name : Abdul Sami Qasim
//ID : 22I-1725
//Assignment number 3

#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int num1=1;															//numerator count
	int num2=2;															//denominator count
	int loop=18;															//iterations count
	
	cout<<endl;
	cout<<endl;
			
	do
	{
		if (loop>13)														//condition to print all numerators
		{
			cout<<num1<<" ";
			num1=(num1*2)+1;
			
			loop--;
			
			if (loop==13)												//condition to move to next line
			{
				cout<<endl;
			}
			continue;
		}
		
		if (loop>10)												//condition to print numerator and denominator seperator
		{
			cout<<"-,";
			
			loop--;
			continue;
		}
		
		if (loop>8)												//condition to print numerator and denominator seperator
		{
			cout<<"--";
				
			loop--;
			
			if (loop>8)
			{
				cout<<",";
			}
			continue;
		}
		
		if (loop==8)												//condition to skip last comma
		{
			loop--;
			continue;
		}
		
		if (loop>=5)												//condition to print ending dots
		{
			cout<<" ...";
			
			loop--;
			
			if (loop==4)											//condition to move to next line
			{
				cout<<endl;
			}
			continue;
			
			continue;
		}
		
		
		if (loop>=0)												//condition to print all denominators
		{
			cout<<num2<<" ";
			num2=num2*2;
			
			loop--;
			continue;
		}
		
		loop--;
		
	}while(loop>=0);
	
	cout<<endl;
	cout<<endl;	
return 0;
}
