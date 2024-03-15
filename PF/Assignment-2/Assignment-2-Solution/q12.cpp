#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;
//int returnInBinary(int num);
int main(){
	
	long num,temp, rem, dec = 0, b = 0; 
	cout <<"Enter 16 bit decimal number (0 to 65535): ";
	cin >> num;
	temp = num;
	
	long opcode,leftOperand, rightOperand;
	
	opcode = (((1 << 4) - 1) & (num >> (13 - 1)));
	
	leftOperand = (((1 << 6) - 1) & (num >> (7 - 1)));
	
	rightOperand = (((1 << 6) - 1) & (num >> (1 - 1)));
	
	switch (opcode){
	case 0:
		cout<<"______________________________________________________________\n";
		cout<<"Operation Description: Display Value of right operand\n";
		cout<<"Operation code: "<<opcode<<endl;
		cout<<"Operation performed on:\n";
		cout<<"Right Operand= "<<rightOperand<<endl;
		cout<<"Left Operand= "<<leftOperand<<endl;
		cout<<"______________________________________________________________\n";
		cout<<"FAST-MAC OUTPUT BASED ON INSTRUCTION\n"<<endl;
		cout<<"Right Operand= "<<rightOperand<<endl;
		cout<<"______________________________________________________________\n";
		
		break;

		
	case 1:
		cout<<"______________________________________________________________\n";
		cout<<"Operation Description: Display Value of left operand\n";
		cout<<"Operation code: "<<opcode<<endl;
		cout<<"Operation performed on:\n";
		cout<<"Right Operand= "<<rightOperand<<endl;
		cout<<"Left Operand= "<<leftOperand<<endl;
		cout<<"______________________________________________________________\n";
		cout<<"FAST-MAC OUTPUT BASED ON INSTRUCTION\n"<<endl;
		cout<<"Left Operand= "<<leftOperand<<endl;
		cout<<"______________________________________________________________\n";
		
		break;
	
	case 2:
		cout<<"______________________________________________________________\n";
		cout<<"Operation Description: Take 6-bit random input in right operand\n";
		cout<<"Operation code: "<<opcode<<endl;
		cout<<"Operation performed on:\n";
		cout<<"Right Operand= "<<rightOperand<<endl;
		cout<<"Left Operand= "<<leftOperand<<endl;
		cout<<"______________________________________________________________\n";
		cout<<"FAST-MAC OUTPUT BASED ON INSTRUCTION\n"<<endl;
		cout <<"Take 6-bit random input in right operand\n";
		cin >> rightOperand;
		cout<<"______________________________________________________________\n";
		
		break;
	
	case 3:
		cout<<"______________________________________________________________\n";
		cout<<"Operation Description: Take 6-bit random input in left operand\n";
		cout<<"Operation code: "<<opcode<<endl;
		cout<<"Operation performed on:\n";
		cout<<"Right Operand= "<<rightOperand<<endl;
		cout<<"Left Operand= "<<leftOperand<<endl;
		cout<<"______________________________________________________________\n";
		cout<<"FAST-MAC OUTPUT BASED ON INSTRUCTION\n"<<endl;
		cout <<"Take 6-bit random input in left operand\n";
		cin >> leftOperand;
		cout<<"______________________________________________________________\n";
		
		break;
	
	case 4:
		cout<<"______________________________________________________________\n";
		cout<<"Operation Description: Add left and right operand\n";
		cout<<"Operation code: "<<opcode<<endl;
		cout<<"Operation performed on:\n";
		cout<<"Right Operand= "<<rightOperand<<endl;
		cout<<"Left Operand= "<<leftOperand<<endl;
		cout<<"______________________________________________________________\n";
		cout<<"FAST-MAC OUTPUT BASED ON INSTRUCTION\n"<<endl;
		cout<<"Left Operand+ Right Operand= "<<leftOperand+rightOperand<<endl;
		cout<<"______________________________________________________________\n";
		
		break;
	
	case 5:
		cout<<"______________________________________________________________\n";
		cout<<"Operation Description: Calculate subtraction of operands(Smaller from larger)\n";
		cout<<"Operation code: "<<opcode<<endl;
		cout<<"Operation performed on:\n";
		cout<<"Right Operand= "<<rightOperand<<endl;
		cout<<"Left Operand= "<<leftOperand<<endl;
		cout<<"______________________________________________________________\n";
		cout<<"FAST-MAC OUTPUT BASED ON INSTRUCTION\n"<<endl;
		if (leftOperand>rightOperand)
			cout<<"Left Operand+ Right Operand= "<<leftOperand-rightOperand<<endl;
		else if (rightOperand>leftOperand)
			cout<<"Right Operand+ Left Operand= "<<rightOperand-leftOperand<<endl;
		cout<<"______________________________________________________________\n";
		
		break;
	
	case 6:
		cout<<"______________________________________________________________\n";
		cout<<"Operation Description: Multiply left and right operand\n";
		cout<<"Operation code: "<<opcode<<endl;
		cout<<"Operation performed on:\n";
		cout<<"Right Operand= "<<rightOperand<<endl;
		cout<<"Left Operand= "<<leftOperand<<endl;
		cout<<"______________________________________________________________\n";
		cout<<"FAST-MAC OUTPUT BASED ON INSTRUCTION\n"<<endl;
		cout<<"Left Operand x Right Operand= "<<leftOperand*rightOperand<<endl;
		cout<<"______________________________________________________________\n";
		
		break;
	
	case 7:
		cout<<"______________________________________________________________\n";
		cout<<"Operation Description: Division of operands (larger fromm smaller)\n";
		cout<<"Operation code: "<<opcode<<endl;
		cout<<"Operation performed on:\n";
		cout<<"Right Operand= "<<rightOperand<<endl;
		cout<<"Left Operand= "<<leftOperand<<endl;
		cout<<"______________________________________________________________\n";
		cout<<"FAST-MAC OUTPUT BASED ON INSTRUCTION\n"<<endl;
		if (leftOperand>rightOperand)
			cout<<"Left Operand/ Right Operand= "<<leftOperand/rightOperand<<endl;
		else if (rightOperand>leftOperand)
			cout<<"Right Operand/Left Operand= "<<rightOperand/leftOperand<<endl;
		cout<<"______________________________________________________________\n";
		
		break;
	
	case 8:
		cout<<"______________________________________________________________\n";
		cout<<"Operation Description: Remainder of operands (larger from smaller)\n";
		cout<<"Operation code: "<<opcode<<endl;
		cout<<"Operation performed on:\n";
		cout<<"Right Operand= "<<rightOperand<<endl;
		cout<<"Left Operand= "<<leftOperand<<endl;
		cout<<"______________________________________________________________\n";
		cout<<"FAST-MAC OUTPUT BASED ON INSTRUCTION\n"<<endl;
		if (leftOperand>rightOperand)
			cout<<"Left Operand % Right Operand= "<<leftOperand%rightOperand<<endl;
		else if (rightOperand>leftOperand)
			cout<<"Right Operand % Left Operand= "<<rightOperand%leftOperand<<endl;
		cout<<"______________________________________________________________\n";
		
		break;
	
	case 9:
		cout<<"______________________________________________________________\n";
		cout<<"Operation Description: Bitwise OR of left and right operand\n";
		cout<<"Operation code: "<<opcode<<endl;
		cout<<"Operation performed on:\n";
		cout<<"Right Operand= "<<rightOperand<<endl;
		cout<<"Left Operand= "<<leftOperand<<endl;
		cout<<"______________________________________________________________\n";
		cout<<"FAST-MAC OUTPUT BASED ON INSTRUCTION\n"<<endl;
		cout<<"Left Operand OR right operand= "<<(leftOperand | rightOperand)<<endl;
		cout<<"______________________________________________________________\n";
		
		break;
	
	case 10:
		cout<<"______________________________________________________________\n";
		cout<<"Operation Description: Bitwise AND of left and right operand\n";
		cout<<"Operation code: "<<opcode<<endl;
		cout<<"Operation performed on:\n";
		cout<<"Right Operand= "<<rightOperand<<endl;
		cout<<"Left Operand= "<<leftOperand<<endl;
		cout<<"______________________________________________________________\n";
		cout<<"FAST-MAC OUTPUT BASED ON INSTRUCTION\n"<<endl;
		cout<<"Left Operand AND right operand= "<<(leftOperand & rightOperand)<<endl;
		cout<<"______________________________________________________________\n";
		
		break;
	
	case 11:
		cout<<"______________________________________________________________\n";
		cout<<"Operation Description: Bitwise XOR of left and right operand\n";
		cout<<"Operation code: "<<opcode<<endl;
		cout<<"Operation performed on:\n";
		cout<<"Right Operand= "<<rightOperand<<endl;
		cout<<"Left Operand= "<<leftOperand<<endl;
		cout<<"______________________________________________________________\n";
		cout<<"FAST-MAC OUTPUT BASED ON INSTRUCTION\n"<<endl;
		cout<<"Left Operand XOR right operand= "<<(leftOperand ^ rightOperand)<<endl;
		cout<<"______________________________________________________________\n";
		
		break;
	
	case 12:
		cout<<"______________________________________________________________\n";
		cout<<"Operation Description: Complement of right Operand\n";
		cout<<"Operation code: "<<opcode<<endl;
		cout<<"Operation performed on:\n";
		cout<<"Right Operand= "<<rightOperand<<endl;
		cout<<"Left Operand= "<<leftOperand<<endl;
		cout<<"______________________________________________________________\n";
		cout<<"FAST-MAC OUTPUT BASED ON INSTRUCTION\n"<<endl;
		cout<<"Complement of Right Operand= "<<~rightOperand<<endl;
		cout<<"______________________________________________________________\n";
		
		break;
	
	case 13:
		cout<<"______________________________________________________________\n";
		cout<<"Operation Description: Complement of left Operand\n";
		cout<<"Operation code: "<<opcode<<endl;
		cout<<"Operation performed on:\n";
		cout<<"Right Operand= "<<rightOperand<<endl;
		cout<<"Left Operand= "<<leftOperand<<endl;
		cout<<"______________________________________________________________\n";
		cout<<"FAST-MAC OUTPUT BASED ON INSTRUCTION\n"<<endl;
		cout<<"Complement of Left Operand= "<<~leftOperand<<endl;
		cout<<"______________________________________________________________\n";
		
		break;
	
	case 14:
		cout<<"______________________________________________________________\n";
		cout<<"Operation Description: Left Operand << Right Operand\n";
		cout<<"Operation code: "<<opcode<<endl;
		cout<<"Operation performed on:\n";
		cout<<"Right Operand= "<<rightOperand<<endl;
		cout<<"Left Operand= "<<leftOperand<<endl;
		cout<<"______________________________________________________________\n";
		cout<<"FAST-MAC OUTPUT BASED ON INSTRUCTION\n"<<endl;
		cout<<"leftOperand<<rightOperand"<<(leftOperand<<rightOperand)<<endl;
		cout<<"______________________________________________________________\n";
		
		break;
	case 15:
		cout<<"______________________________________________________________\n";
		cout<<"Operation Description: Right Operand >> Left Operand\n";
		cout<<"Operation code: "<<opcode<<endl;
		cout<<"Operation performed on:\n";
		cout<<"Right Operand= "<<rightOperand<<endl;
		cout<<"Left Operand= "<<leftOperand<<endl;
		cout<<"______________________________________________________________\n";
		cout<<"FAST-MAC OUTPUT BASED ON INSTRUCTION\n"<<endl;
		cout<<"Right Operand >> Left Operand =  "<<(rightOperand>>leftOperand)<<endl;
		cout<<"______________________________________________________________\n";
		
		break;

	}	
	
	return 0;	
}
