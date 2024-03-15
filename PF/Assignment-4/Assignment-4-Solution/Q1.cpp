

#include <iostream>
#include <iomanip>
using namespace std;

double display(int n);
int piSeries();


int main(){
    
    int nval = piSeries();
    
    if (nval != -1)
        cout << endl << endl << "First 3.14 val found at term " << nval << endl;
    else
        cout << endl << endl << "3.14 Not found" << endl;
    
}

double display(int n){
    
    const double num = 4;
    double denom = 1;
    double value = 0;
    
    for(int j = 0; j < n; j++, denom+= 2){
        if (j%2 == 0)
            value += (num/denom);
        else
            value -= (num/denom);
    }
    
    cout << left << setw(20) << n << value << endl;
    return value;
}

int piSeries(){
    
    
    int n = 1;
    char choice;
    bool valFound = false;
    int nVal = -1;
    
    cout << left << setw(20) << "Term#" << "Value of π" << endl;
    while (1) {
        
        for(int i = 0; i < 5; i++,n++){
            double val = display(n);
            
            if (int(val * 100) == 314 && !valFound){
                valFound = true;
                nVal = n;
            }
            
        }
        
        
        
        cout << setw(75) << right << "S: Stop the Series, C: Continue series: " ;
        cin >> choice;
        
        while(choice != 'S' && choice != 'C'){
            cout << setw(103) << right << "Invalid Choice Enter Again, S: Stop the Series, C: Continue series: ";
            cin >> choice;
        }
        if (choice == 'S')
            break;
        else
            continue;
    }
    
    return nVal;
}
 

