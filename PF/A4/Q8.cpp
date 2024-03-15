//name : Abdul Sami Qasim
//ID : 22I-1725
//Assignment number 4

#include <iostream>

int isAlpha (char);
int isDigit (char);
int isAlnum (char);
int isXdigit (char);
int isLower (char);
int isUpper (char);
int isSpace (char);

using namespace std;

int main()
{
	char input;
	
	cout<<endl<<"Enter a character to check (only one character will be taken) : ";
	cin.get(input);
	
	
//including colours to improve terminal visibility


	if (isAlpha (input)==1)									//first function
	{
		cout<<endl<<"\033[1;39m"<<"isAlpha()"<<"\033[0m"<<" is "<<"\033[32m"<<"true "<<"\033[0m"<<"(alphabet (A-Z or a-z) is present)."<<endl;
	}
	else
	{
		cout<<endl<<"\033[1;39m"<<"isAlpha()"<<"\033[0m"<<" is"<<"\033[31m"<<" false "<<"\033[0m"<<"(alphabet (A-Z or a-z) is not present)."<<endl;
	}
	
	if (isDigit (input)==1)									//second function
	{
		cout<<endl<<"\033[1;39m"<<"isDigit()"<<"\033[0m"<<" is "<<"\033[32m"<<"true"<<"\033[0m"<<" (decimal digit (0-9) is present)."<<endl;
	}
	else
	{
		cout<<endl<<"\033[1;39m"<<"isDigit()"<<"\033[0m"<<" is "<<"\033[31m"<<"false"<<"\033[0m"<<" (decimal digit (0-9) is not present)."<<endl;
	}
	
	if (isAlnum (input)==1) 									//third function
	{
		cout<<endl<<"\033[1;39m"<<"isAlnum()"<<"\033[0m"<<" is "<<"\033[32m"<<"true"<<"\033[0m"<<" (decimal digit (0-9) or an alphabet (A-Z or a-z) is present)."<<endl;
	}
	else
	{
		cout<<endl<<"\033[1;39m"<<"isAlnum()"<<"\033[0m"<<" is "<<"\033[31m"<<"false"<<"\033[0m"<<" (decimal digit (0-9) or an alphabet (A-Z or a-z) is not present)."<<endl;
	}
	
	if (isXdigit (input)==1)									//fourth function
	{
		cout<<endl<<"\033[1;39m"<<"isXdigit()"<<"\033[0m"<<" is "<<"\033[32m"<<"true"<<"\033[0m"<<" (hexadecimal digit (0-9 or A-F or a-f) is present)."<<endl;
	}
	else
	{
		cout<<endl<<"\033[1;39m"<<"isXdigit()"<<"\033[0m"<<" is "<<"\033[31m"<<"false"<<"\033[0m"<<" (hexadecimal digit (0-9 or A-F or a-f) is not present)."<<endl;
	}
	
	if (isLower (input)==1)									//fifth function
	{
		cout<<endl<<"\033[1;39m"<<"isLower()"<<"\033[0m"<<" is "<<"\033[32m"<<"true"<<"\033[0m"<<" (small case alphabet (a-z) is present)."<<endl;
	}
	else
	{
		cout<<endl<<"\033[1;39m"<<"isLower()"<<"\033[0m"<<" is "<<"\033[31m"<<"false"<<"\033[0m"<<" (small case alphabet (a-z) is not present)."<<endl;
	}
	
	if (isUpper (input)==1)									//sixth function
	{
		cout<<endl<<"\033[1;39m"<<"isUpper()"<<"\033[0m"<<" is "<<"\033[32m"<<"true"<<"\033[0m"<<" (Capital case alphabet (A-Z) is present)."<<endl;
	}
	else
	{
		cout<<endl<<"\033[1;39m"<<"isUpper()"<<"\033[0m"<<" is "<<"\033[31m"<<"false"<<"\033[0m"<<" (Capital case alphabet (A-Z) is not present)."<<endl;
	}
	
	if (isSpace (input)==1)									//seventh function
	{
		cout<<endl<<"\033[1;39m"<<"isSpace()"<<"\033[0m"<<" is "<<"\033[32m"<<"true"<<"\033[0m"<<" (space (“ ”) is present)."<<endl;
	}
	else
	{
		cout<<endl<<"\033[1;39m"<<"isSpace()"<<"\033[0m"<<" is "<<"\033[31m"<<"false"<<"\033[0m"<<" (space (“ ”) is not present)."<<endl;
	}

 return 0;
}

int isAlpha (char check)												//alphabet checking function
{
	if ((check>=65 && check<=90) || (check>=97 && check<=122))
	{
		return 1;
	}
return 0;
}

int isDigit (char check)												//digits checking function
{
	
	if (check>=48 && check<=57)
	{
		return 1;
	}
return 0;
}

int isAlnum (char check)												//alphabet and digit checking function
{
	if ((check>=65 && check<=90) || (check>=97 && check<=122) || (check>=48 && check<=57))
	{
		return 1;
	}
return 0;
}

int isXdigit (char check)										//hexadecimal digits and alphabets checking function
{
	if ((check>=48 && check<=57) || (check>=65 && check<=70) || (check>=97 && check<=102))
	{
		return 1;
	}
return 0;
}

int isLower (char check)											//lowercase alphabets checking function
{
	if (check>=97 && check<=122)
	{
		return 1;
	}
return 0;
}

int isUpper (char check)											//uppercase alphabets checking function
{
	if (check>=65 && check<=90)
	{
		return 1;
	}
return 0;
}

int isSpace (char check)											//space checking function
{
	if (check==32)
	{
		return 1;
	}
return 0;
}
