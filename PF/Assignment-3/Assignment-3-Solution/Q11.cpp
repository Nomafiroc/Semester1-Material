#include<iostream>
using namespace std;

int main(){

	for(int counter=1;counter<=6;counter++){

		if(counter%2!=0){
			for(int a=1;a<=3;a++){
		
				for(int b=1;b<=a;b++){
					cout<<"  ";
				}
				cout<<"*";
				
				for(int c=a;c<=6-a;c++){
					cout<<"  ";	
				}
				cout<<"*";
				
				if(a==3){
					cout<<endl;
					for(int c=1;c<=4;c++)
					{
						cout<<"  ";
					}
					cout<<"*";
				}
				cout<<endl;
			}
		}
		
		else if(counter%2==0){
			for(int d=1;d<=4;d++){
				
				for(int e=1;e<=4-d;e++){
					cout<<"  ";
				}
				cout<<"*";

				for(int f=1;f<=2*d-1;f++){
					cout<<"  ";
				}
				
				cout<<"*";

				cout<<endl;
			}
		}
	}

	return 0;
}

