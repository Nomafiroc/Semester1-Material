#include <iostream>
#include <cmath>

int palindrome (int);

using namespace std;

int main()
{
	int value=10;
	
	cout<<"This program checked every value between 10 and 99999 for a palindrome."<<endl;
	
	while (value<99999)														//palindrome checking value increment block
	{
		palindrome (value);
		value++;
	}
	
	srand(time(0));															//random seed generator
	
return 0;
}

int palindrome (int testvalue)
{
	int colour=(rand()%6)+31;												//colour randomizer to improve visibility
	int flag;
	int reverse=0;
	int digit=0;
	
	flag=testvalue;														//making copy of passed value
	
	while(testvalue>0)												//digit counting block
	{		
		testvalue=testvalue/10;		
		digit++;		
	}
	
	digit--;														//decrement in digit number to ensure quality of output
	testvalue=flag;
	
	while (testvalue>0)											//reverse value finding block
	{
		reverse+= (testvalue%10)*(pow(10,digit));
		testvalue=testvalue/10;
		digit--;
	}

	if (flag==reverse)										//using colours to improve visibility
	{
		cout<<endl<<"\033[1;"<<colour<<"m"<<reverse<<"\033[0m"<<" is a palindrome."<<endl;
	}

return 0;
}
