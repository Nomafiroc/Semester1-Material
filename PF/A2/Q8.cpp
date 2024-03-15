//name : Abdul Sami Qasim
//ID : 22I-1725
//Assignment number 2

#include <iostream>
using namespace std;
int main()
{
	int grid1;
	int grid2;
	
	cout<<"There is a grid of 6 rows and 6 columns having one number in "; 
	cout<<"each block, enter two numbers to find out if they have the same colours or not."<<endl;
	
	cout<<"Enter your first number (1-36) : ";
	cin>>grid1;
	
	cout<<"Enter your second number (1-36) : ";
	cin>>grid2;
	
	switch (grid1>0 && grid1<=36)												//colour assinment to first number
	{
	case 1 :
		switch (grid1== 4|| grid1== 9|| grid1==15 || grid1==22 || grid1==26 ||grid1==35)	                                           
		{
			case 1:
				grid1='o';														//assigning orange  colour
				
			break;
			case 0:
				switch (grid1== 2|| grid1== 11|| grid1== 13|| grid1== 18|| grid1== 19|| grid1== 24|| grid1== 29|| grid1== 32)
				{
					case 1:
						grid1='r';												//assigning red colour
						
					break;
					case 0:
						switch (grid1== 3|| grid1== 10|| grid1== 14|| grid1== 23|| grid1== 25|| grid1== 30|| grid1== 31|| grid1== 36)
						{
							case 1:
								grid1='b';										//assigning blue colour
								
							break;
							case 0:
							switch (grid1== 1|| grid1== 6|| grid1== 7|| grid1== 12|| grid1== 17|| grid1== 20|| grid1== 28||grid1==33)
							{
								case 1:
									grid1='G';									//assigning green colour
										
								break;
								case 0:				
								switch (grid1== 5|| grid1== 8|| grid1== 16|| grid1== 21|| grid1== 27|| grid1== 34)
								{
									case 1:
										grid1='g';								//assigning grey colour
											
									break;
								}
							}	
						}							
				}											
		}															
																	
																		
	break;
	
	case 0:
		cout<<"\nplease enter a number within the provided range of (1-36) for the first number."<<endl;
	}
	
	switch (grid2>0 && grid2<=36)										//colour assignment to second number
	{
	case 1 :
		switch (grid2== 4|| grid2== 9|| grid2==15 || grid2==22 || grid2==26 ||grid2==35)	                                          
		{
			case 1:
				grid2='o';												//assigning orange colour
				
			break;
			case 0:
				switch (grid2== 2|| grid2== 11|| grid2== 13|| grid2== 18|| grid2== 19|| grid2== 24|| grid2== 29|| grid2== 32)
				{
					case 1:
						grid2='r';										//assigning red colour
						
					break;
					case 0:
						switch (grid2== 3|| grid2== 10|| grid2== 14|| grid2== 23|| grid2== 25|| grid2== 30|| grid2== 31|| grid2== 36)
						{
							case 1:
								grid2='b';								//assigning blue colour
								
							break;
							case 0:
							switch (grid2== 1|| grid2== 6|| grid2== 7|| grid2== 12|| grid2== 17|| grid2== 20|| grid2== 28||grid2==33)
							{
								case 1:
									grid2='G';							//assigning green colour
										
								break;
								case 0:				
								switch (grid2== 5|| grid2== 8|| grid2== 16|| grid2== 21|| grid2== 27|| grid2== 34)
								{
									case 1:
										grid2='g';						//assigning grey colour
											
									break;
								}
							}	
						}							
				}											
		}															
																	
																		
	break;
	
	case 0 :
		cout<<"\nplease enter a number within the provided range of (1-36) for the second number."<<endl;
	}
	switch((grid1=='G'||grid1=='g'||grid1=='o'||grid1=='b'||grid1=='r')&&(grid2=='G'||grid2=='g'||grid2=='o'||grid2=='b'||grid2=='r'))
	{
		case 1:
		switch (grid1==grid2)											//output finding switch
		{
			case 1:														//same colour
				cout<<"\nThe two numbers selected have the same colour in the grid."<<endl;
			break;
			
			case 0:														//different colour
				cout<<"\nThe two numbers selected don't have the same colour."<<endl;
		}
	}		
return 0;
}
