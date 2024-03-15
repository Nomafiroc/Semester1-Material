
#include<iostream>
using namespace std;
int main()
{
 float hardness, strength, carbon_content;
	cout << "Enter the hardness of the metal: ";
	cin >> hardness;
	cout << "Enter the strength of the metal: ";
	cin >> strength;
	cout << "Enter the carbon content of the metal: ";
	cin >> carbon_content;
	if (hardness < 0  || strength < 0 ||  carbon_content < 0 )
	{
		cout << "Invalid input" << endl;
		return;
	}
	if (hardness > 50 && strength > 5600 && carbon_content < 0.7)
		cout << "The metal is Grade 10" << endl;
	else if (hardness > 50 && strength > 5600)
		cout << "The metal is Grade 7" << endl;
	else if (strength > 5600 && carbon_content < 0.7)
		cout << "The metal is Grade 8" << endl;
	else if (hardness > 50 && carbon_content < 0.7)
		cout << "The metal is Grade 9" << endl;
	else if (hardness > 50 || strength > 5600 || carbon_content < 0.7)
		cout << "The metal is Grade 6" << endl;
	else
		cout << "The metal is Grade 5" << endl;
}
