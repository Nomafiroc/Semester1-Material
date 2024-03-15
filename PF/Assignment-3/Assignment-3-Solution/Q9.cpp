#include<iostream>
using namespace std;
int main(){

	for(int count=1;count<=7;count++){
		
		if(count==1||count==4||count==7){
			cout<<"+";
			for(int a=1;a<=6;a++){
				cout<<"-";
			}
			cout<<"+";
			cout<<endl;
		}
		
		else if(count==2||count==3){
			for(int a=1;a<=3;a++){
				cout<<"|";

				for(int b=1;b<=3-a;b++){
					cout<<" ";
				}
				cout<<"^";

				for(int c=1;c<=2*a-2;c++){
					cout<<" ";
				}
				cout<<"^";
				
				for(int d=1;d<=3-a;d++){
					cout<<" ";
				}
				cout<<"|";
				cout<<endl;
			}
		}

		else if(count==5||count==6){
			for(int a=1;a<=3;a++){
				cout<<"|";
				
				for(int b=1;b<=a-1;b++){
					cout<<" ";
				}
				cout<<"v";
		
				for(int c=1;c<=6-2*a;c++){
					cout<<" ";
				}
				cout<<"v";

				for(int d=1;d<=a-1;d++){
					cout<<" ";
				}
				cout<<"|";
				cout<<endl;
			}
		}
	}
		
	return 0;
}



