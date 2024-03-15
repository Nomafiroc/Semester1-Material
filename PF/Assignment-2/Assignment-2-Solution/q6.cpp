#include <iostream>
#include <string>
using namespace std;


int main() {
	
	int month, day;
	string season;
	
	cout<<"Enter the month : ";
	cin>>month;
	
	cout<<"Enter the day : ";
	cin>>day;
	
	if (month <= 3 || month == 12) {
		if (month == 12) {
			if (day >= 16) {
				season = "Winter";
			}
			else {
				season = "Fall";
			}
		}
		else if (month < 3) {
			season = "Winter";
		}
		else if (month == 3){
			if (day <= 15) {
				season = "Winter";
			}
			else {
				season = "Spring";
			}
		}
	}
	else if (month <= 6 && month >= 3) {
		if (month == 6) {
			if (day <= 15) {
				season = "Spring";
			}
			else {
				season = "Summer";
			}
		}
		else if (month == 3) {
			if (day >= 16) {
				season = "Spring";
			}
			else {
				season = "Winter";
			}
		}
		else {
			season = "Spring";
		}
	}
	else if (month >= 6 && month <= 9) {
		if (month == 6) {
			if (day >= 6) {
				season = "Summer";
			}
			else {
				season = "Spring";
			}
		}
		else if (month == 9) {
			if (day <= 15) {
				season = "Summer";
			}
			else {
				season = "Fall";
			}
		}
		else {
			season = "Summer";
		}
	}
	
	cout<<"The season for the date "<<day<<"/"<<month<<" is "<<season<<endl;
	
	return 0;
}
