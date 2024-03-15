#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int space=1;														//variable for loop count
	
	while(space<=6)													//loop to print hashes
	{	
		cout<<"#"<<setw(space)<<"#"<<endl;
		space++;
	}
return 0;
}
