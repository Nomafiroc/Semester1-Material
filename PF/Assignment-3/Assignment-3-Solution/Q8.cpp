#include<iostream>
using namespace std;

int main(){

	for(int a=0;a<=7;a++){
		
		for(int b=1;b<=7-a;b++){
			cout<<"*";
		}

		for(int c=1;c<=a;c++){
			cout<<" ";
		}

		for(int d=1;d<=7-a;d++){
			cout<<"//";
		}

		for(int e=1;e<=2*a;e++){
			cout<<"\\";
		}
		
		for(int f=1;f<=a;f++){
			cout<<" ";
		}
		
		for(int g=1;g<=7-a;g++){
			cout<<"*";
		}

		cout<<endl;
	}

	return 0;
}

		

