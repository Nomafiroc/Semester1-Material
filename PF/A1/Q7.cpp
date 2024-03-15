/*NAME :	Abdul Sami Qasim
  ROLL :	22I-1725
  ASSIGNMENT#	1*/
  
#include <iostream>
using namespace std;
int main()
{
	int var;														//declaring variables
	int sum;
	
	cout<<"Enter a 5 digit number :";											//taking required input
	cin>>var;
	
	sum=(var/10000)+((var/1000)%10)+((var/100)%10)+((var/10)%10)+(var%10);							//calculating sum of single input integers
	
	cout<<"\nsum :"<<sum<<endl;
	cout<<"\naverage :"<<sum/5<<endl;											//calculating average of sum
	return 0;
}
