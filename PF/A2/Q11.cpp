#include <iostream>
#include <string>
using namespace std;
int main()
{
	 string name;
	 int id;
	 int var1=127, var2=1023, var3=31;						//these integers have 1's on amounts of bits needed to be isolated
	  
	  
	  cout<<"Enter Name of Army Man:";						//taking input of user's name
	  	  
	  getline(cin,name);										//didn't work with cin.ignore()
	  
	  cout<<"Enter ID of Army Man: ";							//taking input of user's ID
	 cin>>id;
	
	cout<<"\nBelt number of "<<name<<" is :\t"<<(((id<<25)>>25)&var1)<<endl;
	
	cout<<"Batch number of "<<name<<" is :\t"<<(((id<<15)>>22)&var2)<<endl;
	
	cout<<"Log number of "<<name<<" is :\t"<<(((id<<10)>>27)&var3)<<endl;
	
	cout<<"Unit number of "<<name<<" is :\t"<<((id>>22)&var2)<<endl;
	
	
return 0;	 
}
