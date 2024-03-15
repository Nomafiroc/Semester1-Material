#include<iostream>
using namespace std;
int gcd(int x, int y)
{
	if(x<0 || y<0)
		return -1;
	if (y > x)
		gcd(y, x);
	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
		
}
int reverse(int x,int rev=0)
{
	if (x == 0)
		return rev;
	else
		return reverse(x / 10, rev * 10 + x % 10);
		
	
}
void show_all_palindromes(int x=10,int y=99999)
{
	while (x < y)
	{
		if (x == reverse(x))
			cout << x << endl;
		x++;
	}
}


int main()
{
	int x, y;
	cout << "Enter two numbers to find their GCD" << endl;
	cin >> x >> y;
	cout << "GCD of " << x << " and " << y << " is " << gcd(x, y) << endl;
	cout << "Enter a number to find its reverse" << endl;
	cin >> x;
	cout << "Reverse of " << x << " is " << reverse(x) << endl;
	cout << "All palindromes between 10 and 99999 are" << endl;
	show_all_palindromes();
	
	return 0;
	
	
}