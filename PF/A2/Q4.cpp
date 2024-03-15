#include <iostream>
using namespace std;
int main()
{
	float calories;													//taking floats as input and output may come in decimals
	float fatgrams;
	float perccalfromfat;
	float calfromfat;

	
	cout<<"Please enter amount of calories in the food item : ";
	cin>>calories;
	
	cout<<"Please enter amount of fat grams in food item : ";
	cin>>fatgrams;
	
		
	calfromfat=fatgrams*9;
	perccalfromfat=calfromfat/calories;
	
	if(calfromfat<((calories)*(30/100)))
	{
		cout<<"Percentage of calories from fat is : "<<perccalfromfat<<endl;
	}
	else 
	{
		cout<<"Percentage of calories from fat is : "<<perccalfromfat<<endl;
		cout<<"Food is low in fat."<<endl;						//message shown immediately incase food is low in fat
	}
return 0;
}
	
