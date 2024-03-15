#include <iostream>

using namespace std;

int main()
{
    
    
    int score, sum = 0, count = 0;
    
    for (int i = 0; i < 5; i++){
        
        do{
            
            cout << "Enter Score for Subject " << i+1 << ": ";
            cin >> score;
            
            
            if (score > 100 || score < 0)
                cout << "Invalid Score, Please ReEnter" << endl;
            
        } while (score > 100 || score < 0);
        
        
        sum += score;
        
        if (score > 80)
            count++;
        
        
    }
    
    cout << "Mean of Score: " << sum/5.0 << endl;
    cout << "Average of Score: " << sum/5.0 << endl;
    cout << "Ther are " << count << " scores which are greater than 80" << endl;

    

    return 0;
}

