#include <iostream>
using namespace std;
int main()
{
	int lines=1;														//variable for loop count
	int relation=0;													//relational variable between printing elements
	int backslash=1;													//backslash counter
	int exclamation=1;												//exclamation counter
	int frontslash=1;												//frontslash counter
	
	for(;lines<=6;lines++)											//loop for lines
	{
		while(backslash<=relation)									//loop for backslashes
		{
			cout<<"\\\\";
			backslash++;
		}
			
			while(exclamation<=22-(4*relation))						//loop for exclamation marks
			{
				cout<<"!";
				exclamation++;
			}	
				while(frontslash<=relation)							//loop for frontslashes
				{
					cout<<"//";
					frontslash++;
				}
		
		relation+=1;													//changing variable count for next iteration
		backslash=1;
		exclamation=1;
		frontslash=1;
		cout<<endl;
	}
return 0;
}
