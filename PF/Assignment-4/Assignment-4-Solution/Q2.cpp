

#include <iostream>
#include <iomanip>
using namespace std;

bool validation (long long int);
int conversion(long long int);


int main(){
    
    long long int binary;
    
    cout << "Enter a Binary Digit (1 and 0 only): ";
    cin >> binary;
    
    while(!validation(binary)){
        
        cout << "Invalid Input, Enter a Binary Digit (1 and 0 only): ";
        cin >> binary;
        
    }
    
    cout << "The Binary Number " << binary << " is written as " << conversion(binary) << " in the decimal system." << endl;
    
}

int conversion(long long int b){
    
    int decimal = 0;
    int base = 1;
    
    while(b != 0){
        
        int rem = b%10;
    
        decimal += (rem*base);
        
        base *= 2;
        b /= 10;
        
    }
    return decimal;
}

bool validation(long long int b){
    
    while(b != 0){
        
        int rem = b%10;
    
        if (rem != 0 && rem != 1 )
            return false;
        
        b /= 10;
        
    }
    
    
    return true;
    
}

 

