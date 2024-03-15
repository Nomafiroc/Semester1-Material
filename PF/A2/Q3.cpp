//name : Abdul Sami Qasim
//ID : 22I-1725
//Assignment number 2

#include <iostream>
using namespace std;
int main()
{
	char player1;													//used to store the players' move
	char player2;
	
	cout<<"rules are as follows\n1.   R = rock\n\n2.   P=paper\n\n3.   S=scissors"<<endl;
	
	cout<<"\nenter your move player 1!"<<endl;
	cin>>player1;
	
	cout<<"\nEnter your move player 2!"<<endl;
	cin>>player2;
	
	switch (int((player1=='p'||player1=='P'||player1=='r'||player1=='R'||player1=='s'||player1=='S')&&(player2=='p'||player2=='P'||player2=='r'||player2=='R'||player2=='s'||player2=='S')))
	{
		case 1:
			switch (int(player1==player2))					//draw case triggered when both moves are same
			{
				case 1:
		
					cout<<"\nThe game is a draw!"<<endl;
			
				break;
													//following each case defines one unique moveset
				case 0:
		
					switch((player1=='p'||player1=='P')&&(player2=='r'||player2=='R'))
					{
						case 1:
				
							cout<<"\nPlayer 1 is the winner!"<<endl;
					
						break;
				
						case 0:
				
							switch((player1=='p'||player1=='P')&&(player2=='s'||player2=='S'))
							{
								case 1:
				
									cout<<"\nPlayer 2 is the winner!"<<endl;						
					
								break;
				
								case 0:
				
									switch((player1=='r'||player1=='R')&&(player2=='p'||player2=='P'))
									{
										case 1:
				
											cout<<"\nPlayer 2 is the winner!"<<endl;				
					
										break;
				
										case 0:
				
											switch((player1=='r'||player1=='R')&&(player2=='s'||player2=='S'))
											{
												case 1:
				
													cout<<"\nPlayer 1 is the winner!"<<endl;				
					
												break;
				
												case 0:
													switch((player1=='s'||player1=='S')&&(player2=='p'||player2=='P'))
													{
														case 1:
				
															cout<<"\nPlayer 1 is the winner!"<<endl;					
					
														break;
				
														case 0:
														
															switch((player1=='s'||player1=='S')&&(player2=='r'||player2=='R'))
															{
																case 1:
				
																	cout<<"\nPlayer 2 is the winner!"<<endl;
					
																break;
				
																case 0:
														
																	cout<<"\nEnter a valid input."<<endl;
																	
																break;
															}
													}	
											}			
									}
							}
					}	
			}

	break;
			
	default:																	//triggered when unwanted input is given
		
		cout<<"\nEnter a valid input"<<endl;
	}
return 0;
}
