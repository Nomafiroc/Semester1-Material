#include<iostream>

int main()
{

int i=0, j=12, k=1, j2=12, k2=-2, i2=0, l=1, m=1, n=1;

while(i<=5)
{
		
	l=1;	
	while(l<i+1)
	{
		std::cout<<"\\\\";
		l++;
	}
		
	m=1;
	while(m<=5-i)
	{
		std::cout<<"!!";
		m++;
	}	
		


	while(j>6)
	{
		std::cout<<"!!";
		j--;
	}
	j2=j2-1;	
	j=j2;
	
	k=1;
	while(k<=k2+2)
	{
		std::cout<<"//";
		k++;	
	}
	k2++;
	
	std::cout<<std::endl;
	i++;
}

return 0;
}
