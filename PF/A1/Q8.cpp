/*NAME :	Abdul Sami Qasim
  ROLL :	22I-1725
  ASSIGNMENT#	1*/
  
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	string name;												//introducing required constants, strings, variables 
	string roll;
	string section;
	
	const string iict="Introduction to ICT";
	const int ch1=1;
	int m1;
	
	const string pf="Programming Fundamentals";
	const int ch2=4;
	int m2;
	
	const string la="Linear Algebra";
	const int ch3=3;
	int m3;
	
	const string cal="Calculus";
	const int ch4=3;
	int m4;
	
	const string ps="Pakistan Studies";
	const int ch5=3;
	int m5;
	
	const string eng="English";
	const int ch6=3;
	int m6;
	
	const string oop="Object Oriented Programming";
	const int ch7=4;
	int m7;
	
	const string dld="Digital Logic Design";
	const int ch8=4;
	int m8;
	
	const string de="Differential Equations";
	const int ch9=3;
	int m9;
	
	const string is="Islamic Studies/Ethics";
	const int ch10=3;
	int m10;
	
	const string cps="Communication & Presentation Skills";
	const int ch11=3;
	int m11;
	
	float SGPA1;
	float sum1;
	
	float CGPA2;
	float SGPA2;
	float sum2;
	
	cout<<"\nEnter your name :";												//taking general inputs
	getline (cin,name);
	cout<<"Enter roll no :";
	getline (cin,roll);
	cout<<"Enter section (A,B,C,...) :";
	getline (cin,section);
	
	cout<<"\n\t\t\t\tSEMESTER-1 INPUTS";
	cout<<"\n\t\t\t\t*****************"<<endl;
	
	cout<<"\nEnter obtained marks in Introduction to ICT (out of 100) :";							//taking input of obtained marks in semester1 subjects
	cin>>m1;
	cout<<"\nEnter obtained marks in Programming Fundamentals (out of 100) :";
	cin>>m2;
	cout<<"\nEnter obtained marks in Linear Algebra (out of 100) :";
	cin>>m3;
	cout<<"\nEnter obtained marks in Calculus (out of 100) :";
	cin>>m4;
	cout<<"\nEnter obtained marks in Pakistan Studies (out of 100) :";
	cin>>m5;
	cout<<"\nEnter obtained marks in English (out of 100) :";
	cin>>m6;
	
	sum1=m1+m2+m3+m4+m5+m6;													//calculating sum of obtained marks
	SGPA1=(sum1/600)*4;													//calculating SGPA of semester 1
	
	cout<<"\n\t\t\t\tTRANSCRIPT";												//semester 1 transcript
	cout<<"\n\t\t\t\t**********"<<endl;
	
	cout<<"Name :\t\t"<<name<<endl;
	cout<<"Roll number :\t"<<roll<<endl;
	cout<<"Section :\tBCY-"<<section<<endl;
	
	cout<<"\nSr no.\tCourse Name\t\t\t\tCredit Hours\t\tMarks"<<endl;
	cout<<"1"<<setw(26)<<iict<<setw(27)<<ch1<<setw(22)<<m1<<endl;
	cout<<"2"<<setw(31)<<pf<<setw(22)<<ch2<<setw(22)<<m2<<endl;
	cout<<"3"<<setw(21)<<la<<setw(32)<<ch3<<setw(22)<<m3<<endl;
	cout<<"4"<<setw(15)<<cal<<setw(38)<<ch4<<setw(22)<<m4<<endl;
	cout<<"5"<<setw(23)<<ps<<setw(30)<<ch5<<setw(22)<<m5<<endl;
	cout<<"6"<<setw(14)<<eng<<setw(39)<<ch6<<setw(22)<<m6<<endl;
	cout<<"\n\t\t\t\tCGPA="<<setprecision(3)<<SGPA1<<"\tSGPA="<<setprecision(3)<<SGPA1<<endl;
	
	cout<<"\n\t\t\t\tSEMESTER-2 INPUTS";											//semester 2 inputs
	cout<<"\n\t\t\t\t*****************"<<endl;
	
	cout<<"\nEnter obtained marks in Object Oriented Programming (out of 100) :";
	cin>>m7;														//takign users obtained marks in semester 2 subjects 
	cout<<"\nEnter obtained marks in Digital Logic Design (out of 100) :";
	cin>>m8;
	cout<<"\nEnter obtained marks in Differential Equations (out of 100) :";
	cin>>m9;
	cout<<"\nEnter obtained marks in Islamic Studies/Ethics (out of 100) :";
	cin>>m10;
	cout<<"\nEnter obtained marks in Communication & Presentation Skills (out of 100) :";
	cin>>m11;
	
	sum2=m7+m8+m9+m10+m11;													//sum of obtained marks
	SGPA2=(sum2/500)*4;													//semester 2 GPA calculation
	CGPA2=(SGPA1+SGPA2)/2;													//semester 2 CGPA calculation
	
	cout<<"\n\t\t\t\tTRANSCRIPT";												//semester 2 transcript
	cout<<"\n\t\t\t\t**********"<<endl;
	
	cout<<"Name :\t\t"<<name<<endl;
	cout<<"Roll number :\t"<<roll<<endl;
	cout<<"Section :\tBCY-"<<section<<endl;
	
	cout<<"\nSr no.\tCourse Name\t\t\t\tCredit Hours\t\tMarks"<<endl;
	cout<<"1"<<setw(34)<<oop<<setw(19)<<ch7<<setw(22)<<m7<<endl;
	cout<<"2"<<setw(27)<<dld<<setw(26)<<ch8<<setw(22)<<m8<<endl;
	cout<<"3"<<setw(29)<<de<<setw(24)<<ch9<<setw(22)<<m9<<endl;
	cout<<"4"<<setw(29)<<is<<setw(24)<<ch10<<setw(22)<<m10<<endl;
	cout<<"5"<<setw(42)<<cps<<setw(11)<<ch11<<setw(22)<<m11<<endl;
	cout<<"\n\t\t\t\tCGPA="<<setprecision(3)<<CGPA2<<"\tSGPA="<<setprecision(3)<<SGPA2<<endl;
	return 0;
}
