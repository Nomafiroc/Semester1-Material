#include <iostream>
using namespace std;
int main()
{
	int choice;
	float area;
	
	cout<<"\n    Geometry Calculator"<<endl;
	cout<<"1.  Calculate the Area of a Circle"<<endl;
	cout<<"2.  Calculate the Area of a Rectangle"<<endl;
	cout<<"3.  Calculate the Area of a Triangle"<<endl;
	cout<<"4.  Quit"<<endl;
	
	cin>>choice;																	//taking users choice
	
	 switch (choice)																	//option selection on the basis of choice
	 {
	 	case 1:																		//area of circle
	 		float radius;
	 		
	 		if(radius>=0)															//input validation
	 		{
		 		cout<<"Please enter radius of circle : ";
		 		cin>>radius;
		 		
		 		area= 3.14159*radius;
		 		
		 		cout<<"The area of circle is : "<<area<<endl;
	 		}
	 		else
	 		{
	 			cout<<"Please enter a positive number." <<endl;
	 		}
	 	break;
	 	
	 	case 2:																	//area of rectangle
	 		float length;
	 		float width;
	 		
	 		if(length>=0 && width>=0)											//input validation
	 		{
		 		cout<<"Please enter length of rectangle : ";
		 		cin>>length;
		 		
		 		cout<<"Please enter width of rectangle : ";
		 		cin>>width;
		 		
		 		area=length*width;
		 		
		 		cout<<"The area of the rectangle is : "<<area<<endl;
	 		}
	 		else
	 		{
	 			cout<<"Please enter positive values."<<endl;
	 		}
	 	break;
	 	
	 	case 3:																//area of triangle
	 		float base;
	 		float height;
	 		
	 		if(base>=0 && height>=0)										//input validation					
	 		{
		 		cout<<"Please enter base value of triangle : ";
		 		cin>>base;
		 		
		 		cout<<"Please enter height of triangle : ";
		 		cin>>height;
		 		
		 		area=(base*height)*0.5;
		 		
		 		cout<<"The area of the triangle is : "<<area<<endl;
	 		}
	 		else
	 		{
	 			cout<<"Please enter positive values."<<endl;
	 		}
	 	break;
	 	
	 	case 4:																//exiting calculation
	 	
	 		cout<<"You have quit the calculation process."<<endl;
	 		
	 	break;
	 	
	 	default:																//triggered if wrong input received
	 	
	 		cout<<"Please enter a valid input"<<endl;
	 		
	 }
	 
return 0;
}
