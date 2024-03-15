#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const float ondemand=3;														//initializing constants and variables
	const float reserved=2;
	const float spot=0.5;
	float odm;
	float rm;
	float sm;
	float codi;
	float cri;
	float csi;
	float total;
	
	cout<<"\t\t\t\tAWS Cloud Cost Calculator";											//taking required inputs
	cout<<"\n\t\t\t\t*************************";
	cout<<"\nHow many On-demand machines you own:\t";
	cin>>odm;
	cout<<"How many Reserved machines you own:\t";
	cin>>rm;
	cout<<"How many Spot machines your own:\t";
	cin>>sm;
					//720 hours in a month
	codi=ondemand*odm*720;														//calculating costs
	cri=reserved*rm*720;
	csi=spot*sm*720;
	total=codi+csi+cri;
	
	cout<<"\nCost of On-demand instances:\t\t"<<setw(3)<<"$"<<codi<<endl;								//outputs
	cout<<"Cost of Reserved instances:\t\t"<<setw(3)<<"$"<<cri<<endl;
	cout<<"Cost of Spot instances:\t\t\t"<<setw(3)<<"$"<<csi<<endl;
	cout<<"\nTotal Monthly Cost of AWS Machines:"<<setw(7)<<"$"<<total<<endl;
return 0;
}
