/*NAME :	Abdul Sami Qasim
  ROLL :	22I-1725
  ASSIGNMENT#	1*/
  
#include <iostream>
using namespace std;
int main()
{
	char word;															//intializing required variables
	char char1;
	char char2;
	char char3;
	char char4;
	char char5;
	char char6;
	char char7;
																	//taking required input
	cout<<"Enter an 8 letter word:";
	cin>>word>>char1>>char2>>char3>>char4>>char5>>char6>>char7;
	
	word=word-32;															//changing letter from lowercase to uppercase using ASCII code
	char1=char1-32;
	char2=char2-32;
	char3=char3-32;
	char4=char4-32;
	char5=char5-32;
	char6=char6-32;
	char7=char7-32;
																	//output
	cout<<"Your entered word in capital case is "<<word<<char1<<char2<<char3<<char4<<char5<<char6<<char7<<endl;
	
	return 0;
}
