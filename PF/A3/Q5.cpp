//name : Abdul Sami Qasim
//ID : 22I-1725
//Assignment number 3

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{	
	int lines=1;															//loop count variable
	int flag;																//variable to clone "lines" variable

	while(lines<=5)														//loop for lines
	{
		flag=lines;
		cout<<setw(6-lines);
		while(lines)														//loop for printing numbers
		{
			cout<<flag;
			lines--;
		}
		
		cout<<endl;
		lines=flag;
		lines++;
	}
return 0;
}
