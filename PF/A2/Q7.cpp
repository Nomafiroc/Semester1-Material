//name : Abdul Sami Qasim
//ID : 22I-1725
//Assignment number 2

#include <iostream>
using namespace std;
int main()
{
	int hardness;
	double carbon;
	int strength;
															//showing the user the grade detection rules
															
	cout<<"\nA certain grade of steel is graded according to the following conditions:";
	cout<<"\n(i) Hardness must be greater than 50";
	cout<<"\n(ii) Carbon content must be less than 0.7";
	cout<<"\n(iii) Tensile strength must be greater than 5600";
	cout<<"\nThe grades are as follows:";
	cout<<"\nGrade is 10 if all three conditions are met.";
	cout<<"\nGrade is 9 if conditions (i) and (ii) are met.";
	cout<<"\nGrade is 8 if conditions (ii) and (iii) are met.";
	cout<<"\nGrade is 7 if conditions (i) and (iii) are met.";
	cout<<"\nGrade is 6 if only one condition is met.";
	cout<<"\nGrade is 5 if none of the conditions are met."<<endl;
	
	cout<<"\nPlease enter Hardness of steel : ";								//asking the user for required inputs
	cin>>hardness;
	
	cout<<"\nPlease enter carbon content of steel : ";
	cin>>carbon;
	
	cout<<"\nPlease enter tensile strength of steel : ";
	cin>>strength;
	if (hardness>=0 && carbon>=0 && strength >=0)
	{
		if(hardness>50 && carbon<0.7 && strength>5600)											//all conditions
		{
			cout<<"\nYou have acquired grade 10 steel."<<endl;
		}
		
		else if (hardness>50 && carbon<0.7 && strength<=5600)									//condition 1 and 2
		{
			cout<<"\nYou have acquired grade 9 steel."<<endl;
		}
		
		else if (hardness<=50 && carbon<0.7 && strength>5600)									//condition 2 and 3
		{
			cout<<"\nYou have acquired a grade 8 steel."<<endl;
		}
		
		else if (hardness>50 && carbon>=0.7 && strength>5600)									//condition 1 and 3
		{
			cout<<"\nYou have acquired a grade 7 steel."<<endl;
		}
		
		else if (hardness>50 && carbon>0.7 && strength<5600)									//condition  1
		{
			cout<<"\nYou have acquired a grade 6 steel."<<endl; 
		}
		
		else if (hardness<50 && carbon<0.7 && strength<5600)									//condition  2
		{
			cout<<"\nYou have acquired a grade 6 steel."<<endl; 
		}
		
		else if (hardness<50 && carbon>0.7 && strength>5600)									//condition  3
		{
			cout<<"\nYou have acquired a grade 6 steel."<<endl; 
		}
		
		else if (hardness<50 && carbon>0.7 && strength<5600)									//no condition
		{
			cout<<"\nYou have acquired a grade 5 steel."<<endl; 
		}
	}
	else
	{
		cout<<"\nEnter positive values."<<endl;
	}
return 0;
}
