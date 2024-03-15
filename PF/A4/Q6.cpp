#include <iostream>
#include <iomanip>

int cheer (int,int);

using namespace std;

int main()
{
	int cheerlimit;	
	int lines;
	
	cout<<"Lines=";
	cin>>lines;																	//asking user for loop iterations
	
	cout<<"Cheers=";															//asking user for limit of cheers
	cin>>cheerlimit;
	
	cout<<endl<<endl;
	
	cheer (lines,cheerlimit);													//calling function
	
}

int cheer (int iterations, int cheerlimit)										//function definition
{
	int cheer=1;
	int space=0;
	int spaceflag=0;
	
	while (iterations>0)													//outer loop that prints one line per iteration
	{
		while(space<spaceflag)											//indentation block
		{
			cout<<" ";
			space++;
		}
		
		space=0;
		spaceflag+=3;
		
		while (cheer<=cheerlimit)										//cheer priniting block
		{
			if (cheer>1 && cheer-1!=cheerlimit )
			{
				cout<<" Buddy ";
			}
			
			cout<<"Go";
			
			cheer++;
		}
		cout<<endl;
		
		iterations--;														//lines and word reset
		cheer=1;
	}
	cout<<endl;
return 0;
}
			
