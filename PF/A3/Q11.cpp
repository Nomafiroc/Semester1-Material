//name : Abdul Sami Qasim
//ID : 22I-1725
//Assignment number 3

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	
	int lines=23;																	//iterations count
	int left=7;																	//left side spaces count
	int mid=6;																	//count for middle spaces
	
	while(lines>19)																//first half diamond printer
	{
		if (lines==20)														//condition to print first single diamond
		{
			cout<<setw(left)<<"*"<<endl;
			lines--;
			continue;
		}
		cout<<setw(left)<<"*"<<setw(mid)<<"*"<<endl;
		left++;
		mid-=2;
		lines--;
	}
																					//reinitializing values
		left=9;
		mid=2;
		
	while(lines>15+1)														//upper half diamond printer
	{
		
		cout<<setw(left)<<"*"<<setw(mid)<<"*"<<endl;
		left-=2;
		mid+=4;
		lines--;
	}
	
	while(lines>11+1)														//lower half diamond printer
	{
		
		
		cout<<setw(left)<<"*"<<setw(mid)<<"*"<<endl;
		left+=2;
		mid-=4;
		lines--;
		
		if (lines==11+1)														//condition to print second single diamond 
		{
			cout<<setw(left-1)<<"*"<<endl;
			lines--;
			continue;
		}
	}
																				//reinitializing values
	left=9;
	mid=2;
	
	while(lines>7+1)														//upper half diamond printer
	{
		
		cout<<setw(left)<<"*"<<setw(mid)<<"*"<<endl;
		left-=2;
		mid+=4;
		lines--;
	}
	
	while(lines>3+1)														//lower half diamond printer
	{
		
		
		cout<<setw(left)<<"*"<<setw(mid)<<"*"<<endl;
		left+=2;
		mid-=4;
		lines--;
		
		if (lines==3+1)														//condition to print third single diamond
		{
			cout<<setw(left-1)<<"*"<<endl;
			lines--;
			continue;
		}
	}
																				//reinitializing values
	left=9;
	mid=2;
	
	while(lines>0)															//last upper half diamond printer
	{
		
		cout<<setw(left)<<"*"<<setw(mid)<<"*"<<endl;
		left-=2;
		mid+=4;
		lines--;
	}
return 0;
}
