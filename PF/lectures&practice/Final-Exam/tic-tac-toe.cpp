#include <iostream>
#include <ctime>
using namespace std;

void drawBoard(int arr[][3], int size)
{
	system("clear");
	for (int r=0; r<size; r++) //nested loop: 1 mark
	{
		for(int c=0; c<size; c++)
		{	
			if (arr[r][c] == 0)
				cout<<r+1<<","<<c+1<<"\t"; //1 mark
			else
				cout<<char(arr[r][c])<<"\t";//1 mark
		}
		cout<<endl;
	}
}

bool checkWinner(int arr[][3], int size, char &winner) //call by reference and correct header: 2 marks
{
	char computer = 'O', user = 'X';
	int c_count = 0, u_count = 0;
	
    //check all rows: 2 marks	
	for (int r=0; r<size; r++) 
	{
		for(int c=0; c<size; c++)
		{	
			if (char(arr[r][c]) == computer)
				c_count++;			
			else if (char(arr[r][c]) == user)
				u_count++;				
		}
		if (c_count == 3)
		{
			winner = 'C';
			return true;
		}
		else if (u_count == 3)
		{
			winner = 'U';
			return true;
		}
		c_count = u_count = 0;		
	}
	
	//check all columns: 2 marks
	for (int c=0; c<size; c++) 
	{
		for(int r=0; r<size; r++)
		{	
			if (char(arr[r][c]) == computer)
				c_count++;			
			else if (char(arr[r][c]) == user)
				u_count++;				
		}
		if (c_count == 3)
		{
			winner = 'C';
			return true;
		}
		else if (u_count == 3)
		{
			winner = 'U';
			return true;
		}	
		c_count = u_count = 0;			
	}
	
	//check diagonal: 2 marks
	c_count = u_count = 0;			
	for(int i=0; i<size; i++)
	{	
		if (char(arr[i][i]) == computer)
			c_count++;			
		else if (char(arr[i][i]) == user)
			u_count++;				
	}
	if (c_count == 3)
	{
		winner = 'C';
		return true;
	}
	else if (u_count == 3)
	{
		winner = 'U';
		return true;
	}	
	
	//check other diagonal: 2 marks
	c_count = u_count = 0;			
	for (int r=0; r<size; r++) 
	{
		for(int c=0; c<size; c++)
		{
			if ((r+c) != 2)	
				continue;
			if (char(arr[r][c]) == computer)
				c_count++;			
			else if (char(arr[r][c]) == user)
				u_count++;				
		}
		if (c_count == 3)
		{
			winner = 'C';
			return true;
		}
		else if (u_count == 3)
		{
			winner = 'U';
			return true;
		}
		c_count = u_count = 0;		
	}
	
	return false;
}

int main()
{
	int values[3][3] = {0}; //declare: 1 mark
	drawBoard(values,3);	//call+prototype+definition: 1 mark
	
	char winner;
	bool finished; 
	
	while (!finished)
	{		
		//User turn [2.5 marks]: input integer, extract row and col place, validate in loop
		int place;
		do {
			cout<<"Enter Place : ";
			cin>>place;
			int r,c;
			c = place%10;
			r = place/10;
			c--; r--; //index adjustment
			if ((r>2 || r<0) || (c>2 || c<0))
			{
				cout<<"This is not a valid place. Please try again."<<endl;
				continue;
			}
			if (values[r][c] == 0)
			{
				values[r][c] = 'X';
				break;
			}
			else
				cout<<"This place is already marked"<<endl;
		}
		while (true);
		drawBoard(values,3);	
		
		//Computer turn [2.5 marks]: random row and col palce, validate place.
		do {
			srand(time(0));
			int r,c;
			r = rand() % 3;
			c = rand() % 3;
		
			if (values[r][c] == 0)
			{
				values[r][c] = 'O';
				break;
			}
		}
		while (true);
		
		finished = checkWinner(values,3,winner);
		drawBoard(values,3);
	}
	
	if (winner == 'C')
		cout<<endl<<"Computer Wins";
	else if (winner == 'U')
		cout<<endl<<"User Wins";
		
}


