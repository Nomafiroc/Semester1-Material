/*NAME :	Abdul Sami Qasim
  ROLL :	22I-1725
  ASSIGNMENT#	1*/
  
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int var1;													//required variables
	int var2;
	int var3;
	int var4;
	int var5;
	int scale;
	
	cout<<"Input Five integer numbers:"<<endl;									//taking required inputs
	cout<<"N1=";
	cin>>var1;
	cout<<"N2=";
	cin>>var2;
	cout<<"N3=";
	cin>>var3;
	cout<<"N4=";
	cin>>var4;
	cout<<"N5=";
	cin>>var5;
	cout<<"Enter Scale:";
	cin>>scale;
	
	cout<<"BAR CHART OUTPUT"<<endl;											//outputs
	cout<< setfill('*') <<setw((var1*scale)+1)<<endl;
	cout<<' ';
	cout<< setfill('*') <<setw((var2*scale)+1)<<endl;
	cout<<' ';
	cout<< setfill('*') <<setw((var3*scale)+1)<<endl;
	cout<<' ';
	cout<< setfill('*') <<setw((var4*scale)+1)<<endl;
	cout<<' ';
	cout<< setfill('*') <<setw((var5*scale)+1)<<endl;
	cout<<' '<<endl;
	return 0;
}
