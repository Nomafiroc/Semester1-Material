/*NAME :	Abdul Sami Qasim
  ROLL :	22I-1725
  ASSIGNMENT#	1*/
  
#include <iostream>
using namespace std;
int main()
{
	int var1;												//initializing necessary variables
	int var2;
	int var3;
	int var4;
	int var5;
	int var6;
	
	cout<<"Enter a 5-digit number:";									//taking required input
	cin>>var1;
	
	var2=(var1/10000)/2;											//formula to seperate integers present in input
	var3=((var1/1000)%10)/2;
	var4=((var1/100)%10)/2;
	var5=((var1/10)%10)/2;
	var6=(var1%10)/2;
	
	cout<<"Modified number:"<<var6<<var5<<var4<<var3<<var2<<endl;						//output
	
	return  0;
}
