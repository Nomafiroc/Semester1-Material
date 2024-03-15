#include<iostream>
using namespace std;
int main(){

	for (int a=1;a<=17;a++){
		
		if(a>=1&&a<=9){

			for (int b=1;b<= 9-a;b++){
				cout<<"  ";
			}

			for (int c=1; c<a; c++){
				cout<<c<<" ";
			}

			for (int d=a; d>=1; d--){
				cout<<d<<" ";
			}
		
			cout<<endl;
		}
			
		else if(a==10){
			
			for(int e=1;e<=8;e++){
				for(int f=1;f<=e;f++){
					cout<<"  ";
				}
				
				for(int g=1;g<=9-e;g++)	{
					cout<<g<<" ";
				}
				cout<<endl;
			}
		}
			
	}		
	return 0;
}
