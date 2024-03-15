//name : Abdul Sami Qasim
//ID : 22I-1725
//Assignment number 3

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int lines=7;															//loop count variable
	int widthmid=3;														//width count after first section of asterisks
	int widthlast=2;														//width count after block of slashes
	int last=6;															//left asterisks count
	int lastf;															//copy of "last"
	int rast=6;															//right asterisks count
	int rastf;															//copy of "rast"
	int frontslash=6;													//frontslash count
	int frontslashf;														//copy of "frontslash"
	int backslash=0;														//backsalsh count
	int backslashf;														//copy of "backslash"
	
	lastf=last;
	rastf=rast;
	frontslashf=frontslash;
	backslashf=backslash;
	
	for(;lines>0;lines--)													//loop for rows to be printed
	{
		while(last>0)													//left asterisk block printer
		{
			cout<<"*";
			last--;
		}
		
		cout<<setw(widthmid);
		widthmid++;
		while(frontslash>0)											//frontslash printer
		{
			cout<<"//";
			frontslash--;
		}
		
		while(backslash>0)											//backslash printer
		{
			cout<<"\\\\";
			backslash--;
		}
		
		cout<<setw(widthlast);
		widthlast++;
		while(rast>0)												//right asterisk block printer
		{
			cout<<"*";
			rast--;
		}
		cout<<endl;
		
		lastf--;														//changing variable value after each iteration
		rastf--;
		frontslashf--;
		backslashf++;
		
		last=lastf;													//reinitializing value after each iteration
		rast=rastf;
		frontslash=frontslashf;
		backslash=backslashf;
		
	}
return 0;
}
		
		
