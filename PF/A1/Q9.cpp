/*NAME :	Abdul Sami Qasim
  ROLL :	22I-1725
  ASSIGNMENT#	1*/
  
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const float OMC=3.68;											//initializing constants and variables
	const float DC=7;
	const float IFEM=4.76;
	float base_price;
	float levy_perc;
	float levy;
	float tax_perc;
	float tax;
	float subtotal;
	float sale_price;
	
	cout<<"Enter MOGAS PSO Weighted Average cost of supply:";						//taking required inputs
	cin>>base_price;
	cout<<"Petroleum levy %:";
	cin>>levy_perc;
	cout<<"Sales Tax%:";
	cin>>tax_perc;
	
	levy=base_price*(levy_perc/100);									//calculating required outputs through given formulas
	subtotal=base_price+IFEM+OMC+DC+levy;
	tax=subtotal*(tax_perc/100);
	sale_price=subtotal+tax;
	
	cout<<setprecision(5)<<"Max Ex-Depot Sale Price ="<<sale_price<<endl;
	return 0;
}
	
