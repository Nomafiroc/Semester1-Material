#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float p1;											//variable declaration
	float p2;
	float p3;
	float p4;
	float p5;
	
	float t=0.17;
	
	float s1=0;
	float s2;
	float s3;
	float s4;
	float s5;
	
	float t1;
	float t2;
	float t3;
	float t4;
	float t5;
	
	float pt;
	float st;
	float tt;
	
	cout<<"Price of item 1 =";								//required inputs
	cin>>p1;
	cout<<"Price of item 2 =";
	cin>>p2;
	cout<<"Price of item 3 =";
	cin>>p3;
	cout<<"Price of item 4 =";
	cin>>p4;
	cout<<"Price of item 5 =";
	cin>>p5;
	
	s1=p1*t;										//calculating sales tax
	s2=p2*t;
	s3=p3*t;
	s4=p4*t;
	s5=p5*t;
	
	t1=s1+p1;										//calculating total price (item price + sales tax on item)
	t2=s2+p2;
	t3=s3+p3;
	t4=s4+p4;
	t5=s5+p5;
	
	pt=p1+p2+p3+p4+p5;									//calculating total prices and taxes
	st=s1+s2+s3+s4+s5;
	tt=t1+t2+t3+t4+t5;
	
	cout<<"*******************************************************"<<endl;			//outputs
	cout<<"ITEM\tPRICE\tSALES TAX (@17%)\tTOTAL PRICE"<<endl;
	
	cout<<"1"<<right<<setw(14)<<p1<<setw(18)<<setprecision(3)<<fixed<<s1<<setw(18)<<setprecision(2)<<fixed<<t1<<endl;
	
	cout<<left<<"2"<<right<<setw(14)<<p2<<setw(18)<<setprecision(3)<<fixed<<s2<<setw(18)<<setprecision(2)<<fixed<<t2<<endl;
	
	cout<<left<<"3"<<right<<setw(14)<<p3<<setw(18)<<setprecision(3)<<fixed<<s3<<setw(18)<<setprecision(2)<<fixed<<t3<<endl;
	
	cout<<left<<"4"<<right<<setw(14)<<p4<<setw(18)<<setprecision(3)<<fixed<<s4<<setw(18)<<setprecision(2)<<fixed<<t4<<endl;
	
	cout<<left<<"5"<<right<<setw(14)<<p5<<setw(18)<<setprecision(3)<<fixed<<s5<<setw(18)<<setprecision(2)<<fixed<<t5<<endl;
	
	cout<<left<<"Total"<<right<<setw(10)<<pt<<setw(18)<<setprecision(3)<<fixed<<st<<setw(18)<<setprecision(2)<<fixed<<tt<<endl;
	
	return 0;
	}
