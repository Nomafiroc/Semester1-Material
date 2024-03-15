#include <iostream>
using namespace std;
int main()
{
	
	int lines=1;															//loop count variable
	int slash;															//variable to count characters of loop
	int flag;																//variable for number to print
	
	while(lines)													//loop for total lines
	{
		slash=59;
		while(slash>=0)												//loop to print slashes
		{
			if(slash%10==0)										//condition to print slash on every 10th character
			{
				cout<<"|";
				slash--;
				continue;
			}
			cout<<" ";
			slash--;
		}
		
		cout<<endl;
		
		slash=1;
		flag=1;
		while(slash<=60)											//loop to print number
		{
			if(slash%10==0)								//condition to reset number value to 0 upon reaching a value of 9
			{
				flag=0;
			}
			cout<<flag;
			slash++;
			flag++;
		}
		

		lines--;
	}
return 0;
}
		
