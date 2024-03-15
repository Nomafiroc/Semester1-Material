#include<iostream>
using namespace std;
int main()
{
    float fat,calories;
	cout << "Enter the number of calories in the food: ";
	cin >> calories;
	cout << "Enter the grams of fat in the food: ";
	cin >> fat;
	if (fat * 9 > calories)
	{
		cout << "Total Calories cannot be less than calories from fat" << endl;
		return 0;
	}
	float percentage = (fat * 9) / calories;
	cout << "The fat calories in the food is: " << percentage*100 <<" %" <<endl;
	if (percentage*100 <= 30)
		cout << "The food is low in fat" << endl;

}
