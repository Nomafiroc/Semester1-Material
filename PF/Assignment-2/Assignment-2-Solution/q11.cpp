#include <iostream>
#include <string>
using namespace std;
int main(){
	long long id, beltNum, batchNum, logNum, unitNum, temp;	
	string name;
	cout<<"Enter the name of the Army Man: ";
	getline (cin, name);
	cout<<"Enter the ID: ";
	cin>>id;
	cout<<"___________________________________________"<<endl;
	beltNum = id;
	beltNum = id&127;
	batchNum = id&130944;
	batchNum = batchNum>>7;
	logNum = id&4063232;
	logNum = logNum>>17;
	unitNum = id&4290772992;
	unitNum = unitNum>>22;
	
	cout<<endl;
	cout<<"Belt number of "<<name<<" is:  "<<beltNum<<endl;
	cout<<"Batch number of "<<name<<" is: "<<batchNum<<endl;
	cout<<"Log number of "<<name<<" is:   "<<logNum<<endl;
	cout<<"Unit number of "<<name<<" is:  "<<unitNum<<endl;
	cout<<"___________________________________________"<<endl;
	return 0;
}
