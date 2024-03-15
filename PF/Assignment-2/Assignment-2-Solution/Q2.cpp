#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){

    int choice, input1 , input2;
    
    cout << "1. Calculate area of Circle" << endl;
    cout << "2. Calculate area of Rectangle" << endl;
    cout << "3. Calculate area of Triangle" << endl;
    cout << "4.Quit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    
    if (choice == 1){
        
        cout << "Enter radius: ";
        cin >> input1;
        
        if (input1 < 0) {
            cout << "Invalid Values" << endl;
        } else {
            cout << "Area of circle: " << 3.142*(input1*input1) << endl;
        }
        
    } else if (choice == 2){
        
        cout << "Enter Length: ";
        cin >> input1;
        cout << "Enter width: ";
        cin >> input2;
        
        if (input1 < 0 || input2 < 0) {
            cout << "Invalid Values" << endl;
        } else {
            cout << "Area of Rectangle: " << input1*input2 << endl;
        }
        
        
    }   else if (choice == 3) {
        
        cout << "Enter Base: ";
        cin >> input1;
        cout << "Enter Height: ";
        cin >> input2;
        
        if (input1 < 0 || input2 < 0) {
            cout << "Invalid Values" << endl;
        } else {
            cout << "Area of Triangle: " << input1*input2/2.0 << endl;
        }
        
    } else if (choice == 4){
        
        cout << "Program Ended...." << endl;
        
    } else
        cout << "Invalid Choice.";
    
    
    return 0;
}
