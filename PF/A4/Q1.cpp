#include <iostream>
#include <iomanip>
using namespace std;

double pi(int&,double&, char&);

int main()
{
	char choice;
	double value=0;																//running sum
	int loop=5;																	//loop iterations
	int term=1;
	
	cout<<"Term #"<<"\t\t"<<"Value of pi"<<endl;
	do
	{
		while(loop>0)																		//five times line
		{
			cout<<" "<<term<<"\t\t"<<fixed<<setprecision(2)<<"\033[1;31m"<<pi(term,value,choice)<<"\033[0m"<<endl;

			loop--;
			
			if((double(int(value*100))/100)==3.14)										//checking value
			{
				cout<<endl<<"Number of terms before getting value of 3.14 : "<<"\033[1;36m"<<term<<"\033[0m"<<endl;
				
				break;																	//moved out of while loop
			}
						
			term++;
			
		}
		
		if((double(int(value*100))/100)==3.14)										
		{
			break;																//moved out of do while loop
		}
			
		loop=5;
		cin>>choice;
		
		while(choice!='c' || choice !='C'|| choice!='s' || choice !='S')							//input validation
		{
			if(choice=='c' || choice =='C'|| choice=='s' || choice =='S')
			{
				break;
			}
			cin>>choice;
		}
		
	}while(choice=='c' || choice =='C');
	
	if (pi(term,value,choice)==-1)									//scenario if user enters s before finding true value of pi
	{
		cout<<"Couldn't find the number of terms to get 3.14 value."<<endl;
	}
	
return 0;
}																		//main ends here

double pi(int& n,double& value, char& decider)										//defining function
{
	static float denominator=1;						//static to keep value counting forward rather than resetting everytime
	
	if(n%2==1)													//first term adds to sum
	{
		value+=4/denominator;
	}
		
	if(n%2==0)													//second term substracts from sum
	{
		value-=4/denominator;
	}
				
	denominator+=2;
	
	if((double(int(value*100)/100))==3.14)						//returns value of terms before reaching required value
	{
		return n;
	}
		
	if((decider=='s' || decider=='S') && (value!=3.14))				//user chooses s as choice to stop te program
	{
		return -1;
	}

return value;	
}
