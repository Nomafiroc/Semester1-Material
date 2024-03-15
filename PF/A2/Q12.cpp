#include <iostream>
using namespace std;
int main()
{
	short var;
	short opcode;
	short midbit;
	short leastbit;
	
	
	cout<<"Please enter a number : ";
	cin>>var;
	
	opcode=((var>>12)&15);										//4 significant bit code
	
	midbit=(((var<<4)>>10)&63);									//mid 6 bits
	
	leastbit=(((var<<10)>>10)&63);								//least significant 6 bits
	
	switch (opcode)
	{
		case 0:																				//first operation
			cout<<"6 bit right operand is shown : ";
			cout<<(leastbit)<<endl;
		break;
	
		case 1:																				//second operation
			cout<<"6 bit left operand is shown : ";
			cout<<(midbit)<<endl;
		break;
		
		case 2:																				//third operation
			cout<<"Enter a value ranging from -32 to 31 : "<<endl;
			cin>>leastbit;
			
		break;
		
		case 3:																				//fourth operation
			cout<<"Enter a value ranging from -32 to 31 : "<<endl;
			cin>>midbit;
		break;
		
		case 4:																				//fifth operation
			cout<<"Addition of left and right operand : ";
			cout<<(midbit+leastbit)<<endl;
		break;
		
		case 5:																				//sixth operation
			cout<<"Subtraction of smaller value operand from greater value operand : ";
			if(midbit>leastbit)
			{
				cout<<(midbit-leastbit)<<endl;
			}
			else
			{
				cout<<(leastbit-midbit)<<endl;
			}
		break;
		
		case 6:																			//seventh operation
			cout<<"Multiplication of left and right operand : ";
			cout<<(midbit*leastbit)<<endl;
		break;
		
		case 7:																			//eighth operation
			cout<<"Division of greater value operand by smaller value operand : ";
			if(midbit>leastbit)
			{
				cout<<(midbit/leastbit)<<endl;
			}
			else
			{
				cout<<(leastbit/midbit)<<endl;
			}
		break;
		
		case 8:																		//ninth operation
			cout<<"Remainder of greater value operand by smaller value operand : ";
			if(midbit>leastbit)
			{
				cout<<(midbit%leastbit)<<endl;
			}
			else
			{
				cout<<(leastbit%midbit)<<endl;
			}
		break;
		
		case 9:																		//tenth operation
			cout<<"Bitwise OR of left and right operand : ";
			cout<<(midbit|leastbit)<<endl;
		break;
		
		case 10:																		//eleventh operation
			cout<<"Bitwise AND of left and right operand : ";
			cout<<(midbit&leastbit)<<endl;
		break;
		
		case 11:																		//twelveth operation
			cout<<"Bitwise XOR of left and right operand : ";
			cout<<(midbit^leastbit)<<endl;
		break;
		
		case 12:																		//thirteenth operation
			cout<<"Complement of right operand : ";
			cout<<(~leastbit)<<endl;
		break;
		
		case 13:																		//fourteenth operation
			cout<<"Complement of left operand : ";
			cout<<(~midbit)<<endl;
		break;
		
		case 14:																		//fifteenth operation
			cout<<"left shift of left operand by a value of right operand : ";
			cout<<(midbit<<leastbit)<<endl;
		break;
	
		case 15:																		//sixteenth operation
			cout<<"Right shift of left operand by a value of right operand : ";
			cout<<(midbit>>leastbit)<<endl;	
	}
return 0;
}
