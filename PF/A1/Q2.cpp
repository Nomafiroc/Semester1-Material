#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a;										//initializing required variables
	int b;
	int c;
	int g;
	int h;
	int k;
	int x;
	int y;
	int z;
	cout<<"input value of x:";							//taking necessary inputs
	cin>>x;
	cout<<"input value of k:";
	cin>>k;
	cout<<"input value of h:";
	cin>>h;
	cout<<"input value of b:";
	cin>>b;
	
	a=12*x;										//given formulas to cslculate a,z,y,g and c
	y=x*x*x*x;
	z=(5*x)+(14*y)+(6*k);
	g=(h+12)/(4*k);
	c=(a*a*a)/((b*b)*(k*k*k*k));
	
	cout<<"\nvalue of a="<<a<<endl;							//outputs
	cout<<"value of y="<<y<<endl;
	cout<<"value of z="<<z<<endl;
	cout<<"value of g="<<g<<endl;
	cout<<"value of c="<<c<<endl;
	return 0;
}
