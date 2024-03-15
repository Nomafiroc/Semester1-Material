#include <iostream>
using namespace std;
int main()
{
	int waterlevel;
	int currentwaterlevel;
	int month;
	int year;
	int decrease;
	int increase;
	int increasewaterlevel;
	int decreasewaterlevel;
	int yearlyincrease;
	int yearlydecrease;
	
	cout<<"Enter current water level of Tarbela dam : ";
	cin>>currentwaterlevel;
	
	cout<<"Enter month in digits : ";
	cin>>month;
	
	cout<<"Enter Year in the format xxxx : ";
	cin>>year;
	
	cout<<"Enter rate of decrease in water level from September to February : ";
	cin>>decrease;
	
	cout<<"Enter rate of increase in water level from March to August : ";
	cin>>increase;
	
	yearlyincrease=increase*6;
	yearlydecrease=decrease*6;
	
	if(year=2022)
	{
		increasewaterlevel=(month-3)*increase;
		decreasewaterlevel=((month>=9&&month<=12?(month-8)*decrease:month*decrease));
		waterlevel=currentwaterlevel+increasewaterlevel-decreasewaterlevel;
	}
	else 
	{
		increasewaterlevel=(month-3)*increase*((year-2022)*6);
		decreasewaterlevel=((month>=9&&month<=12?(month-8)*decrease*((year-2022)*6):month*decrease*((year-2022)*6)));
		waterlevel=currentwaterlevel+increasewaterlevel-decreasewaterlevel;
	}
	cout<<waterlevel<<endl;	
	
	//yearly increase
	
	if(waterlevel<1550)
	{
		year++;
		increasewaterlevel=(month-3)*increase*((year-2022)*6);
		decreasewaterlevel=((month>=9&&month<=12?(month-8)*decrease*((year-2022)*6):month*decrease*((year-2022)*6)));
		waterlevel=currentwaterlevel+increasewaterlevel-decreasewaterlevel;
	}
		cout<<waterlevel<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;
}

