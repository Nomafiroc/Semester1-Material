#include <iostream>
using namespace std;
int main()
{
	int eggs;						//creating required variables 
	int e30;
	int e24;
	int e18;
	int e12;
	int e6;
	
	int l1;
	int l2;
	int l3;
	int l4;
	int l5;
	
	cout<<"enter number of eggs to be packed :";		//taking input of number of eggs
	cin>>eggs;
	
	e30=eggs/30;						//amounts of packs containing a number of eggs
	e24=eggs/24;
	e18=eggs/18;
	e12=eggs/12;
	e6=eggs/6;
	
	l1=eggs-(e30*30);					//leftover packs in each packing
	l2=eggs-(e24*24);
	l3=eggs-(e18*18);
	l4=eggs-(e12*12);
	l5=eggs-(e6*6);
								//outputs
	cout<<"\namount of packs containing 30 eggs :"<<e30<<endl;
	cout<<"eggs leftover in packing of 30 eggs :"<<l1<<endl;
	
	cout<<"\namount of packs containing 24 eggs :"<<e24<<endl;
	cout<<"eggs leftover in packing of 24 eggs :"<<l2<<endl;
	
	cout<<"\namount of packs containing 18 eggs :"<<e18<<endl;
	cout<<"eggs leftover in packing of 18 eggs :"<<l3<<endl;
	
	cout<<"\namount of packs containing 12 eggs :"<<e12<<endl;
	cout<<"eggs leftover in packing of 12 eggs :"<<l4<<endl;
	
	cout<<"\namount of packs containing 6 eggs :"<<e6<<endl;
	cout<<"eggs leftover in packing of 6 eggs :"<<l5<<endl;
	
	return 0;
}
