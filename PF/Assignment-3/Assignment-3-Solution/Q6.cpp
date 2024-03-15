#include<iostream>
using namespace std;

int main(){
	
	for (int i=0; i<4; i++){
		if (i==0||i==3){
			for (int j=0; j<40; j++){
					cout<<"-";
			}
			cout<<endl;				
		}
		else if (i==1){
			for (int k=0; k<40; k++){
				if (k%4==0){
					cout<<"_";
				}
				else if(k%4==1 || k%4==3){
					cout<<"-";
				}
				else{
					cout<<"^";
				}
			}
			cout<<endl;
		}
		else if (i==2){
			for (int l=0; l<2; l++){
				for (int m=0; m<10; m++){
						cout<<(m+1)%10<<(m+1)%10;
				}
			}	
			cout<<endl;
		}
	}
}