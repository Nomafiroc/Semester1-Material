//name : Abdul Sami Qasim
//ID : 22I-1725
//Assignment number 3

#include <iostream>
using namespace std;
int main()
{
	int input;																	//input storing variable
	int score=0;															//variable initialized from 0 as it will be sum
	int line=1;																	//number of lines
	int highmarks=0;												//variable to store number of scores greater than 80
	
	for(;line<=5;line++)
	{
		cout<<"Enter score of subject "<<line<<" : ";
		cin>>input;
		
		while(input>100 || input<0)												//input validation block
		{
			cout<<"Invalid score - score can be in the range of 0-100"<<endl;
			
			cout<<"Enter score of subject "<<line<<" : ";
			cin>>input;
		}
		
		if(input>80)														//calculating number of scores greater than 80
		{
			highmarks++;
		}
		
		score+=input;
		
	}
	
	cout<<"\n\nAverage of score : "<<score/float(5)<<endl;						//calculating average
	cout<<"There are "<<highmarks<<" scores which are more than 80"<<endl;
	
return 0;
}
