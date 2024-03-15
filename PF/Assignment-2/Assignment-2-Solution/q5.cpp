#include<iostream>
using namespace std;

int main(){
		//while is not required 
		int choice, num1, num2, num3, num4, max;
		while(1){
			cout<<"\nEnter 1 to find max between three numbers\nEnter 2 to find max between four numbers\n";
			cin>>choice;
			if (choice != 1 && choice != 2){
					cout<<"\nInvalid Input!";
			}
			else{
					break;
			}
		}
		
		switch(choice){
				case 1:
					cout<<"\nEnter 3 numbers (press enter after each number): ";
					cin>>num1>>num2>>num3;
					max = (num1 > num2) ? (num1 > num3 ? num1 : num3 ) : (num2 > num3 ? num2 : num3);
					cout<<"Largest number from "<<num1<<", "<<num2<<" and "<<num3<<" is: "<<max;
					break;
					
				case 2:
					cout<<"\nEnter 4 numbers (press enter after each number): ";
					cin>>num1>>num2>>num3>>num4;
					max = (num1 > num2 && num1 > num3 && num1 > num4) ? num1 : ((num2 > num3 && num2 > num4) ? num2 : (num3 > num4 ? num3 : num4));
					cout<<"Largest number from "<<num1<<", "<<num2<<", "<<num3<<" and "<<num4<<" is: "<<max;
					break;
		}
		

		return 0; 
}