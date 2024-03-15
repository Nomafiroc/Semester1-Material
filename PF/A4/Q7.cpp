#include <iostream>

int PAR (int);

using namespace std;

int main()
{
	int PKR;
	
	cout<<endl<<"Please enter the amount of PKR to be converted into PAR : ";
	cin>>PKR;
	
	while(PKR<0)
	{
		cout<<endl<<"Please enter a positive value : ";
		cin>>PKR;
	}
	
	if (PAR (PKR) == 1)											//currency can be divided into 6, 9 and 20 currency notes
	{
		cout<<endl<<"Exchange is possible."<<endl;
	}
	else													//currency cant be divided into 6, 9 and 20 currency notes
	{
		cout<<endl<<"Exchange is not possible."<<endl;
	}
	
return 0;	
}

int PAR (int PKR)
{
	int condition1=PKR%6;
	int condition2=PKR%9;
	int condition3=PKR%20;
	
	int flag=PKR;
	
	//following if blocks contain all necessary conditions
		
	if (condition1==0 || condition2==0 || condition3==0)
	{
		return 1;
	}
		
	if (condition1%9==0 || condition1%20==0 || condition2%20==0 || condition3%6==0)
	{
		return 1;
	}
	
	if ((condition3%9)%6==0)
	{
		return 1;
	}
	
	if ((condition3%6)%9==0)
	{
		return 1;
	}
	
	if ((condition1%20)%9==0)
	{
		return 1;
	}
	
	if (PKR>20)
	{
	
		PKR=PKR%20;												
	
		if ((PKR+20)%9==0)			
		{
			return 1;
		}
		
		if ((PKR+20)%6==0)
		{
			return 1;
		}
	}
	PKR=flag;
	
	if (PKR>9)
	{
		PKR=PKR%20;
		
		if ((PKR+20)%9==0)
		{
			return 1;
		}
		
		PKR=(PKR+20)%9;
		
		if ((PKR+9)%6==0)
		{
			return 1;
		}
	}
	
return 0; 															//currency cant be fully converted
} 
