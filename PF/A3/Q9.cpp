#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int repeat=2;														//outer loop count
	int dashes=6;														//dashes counter
	int halfloop=1;														//inner loop count
	int width1=3;														//left side space count
	int width2=1;														//right side space count
	
	cout<<"+";
	
	while(dashes>0)															//first line printer
	{
		cout<<"-";
		dashes--;
	}
	
	cout<<"+"<<endl;
	dashes=6;

	while(repeat)															//printing first section
	{
		for(;halfloop<=3;halfloop++,width1--,width2+=2)						//block to print the recurring pattern twice
		{
			cout<<"|"<<setw(width1)<<"^"<<setw(width2)<<"^"<<setw(width1)<<"|"<<endl;
		}
		
		halfloop=1;
		width1=3;
		width2=1;
		repeat--;
	}
	
	halfloop=1;																		//reinitializing variables
	repeat=2;
	width1=1;
	width2=5;
	
	cout<<"+";
	
	while(dashes>0)																	//printing seperation line
	{
		cout<<"-";
		dashes--;
	}
	
	cout<<"+"<<endl;
	dashes=6;
	
	while(repeat)															//printing second section
	{
		for(;halfloop<=3;halfloop++,width1++,width2-=2)						//block to print the recurring pattern twice
		{
			cout<<"|"<<setw(width1)<<"v"<<setw(width2)<<"v"<<setw(width1)<<"|"<<endl;
		}
		
		halfloop=1;
		width1=1;
		width2=5;
		repeat--;
	}
	
	cout<<"+";
	
	while(dashes>0)																//printing ending line
	{
		cout<<"-";
		dashes--;
	}
	
	cout<<"+"<<endl;

return 0;
}
