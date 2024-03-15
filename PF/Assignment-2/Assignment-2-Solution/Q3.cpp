#include <iostream>

using namespace std;


int main(){

    int player1, player2;
    
    cout << "1. Rock   2. Scissor   3. Paper" << endl;
    
    cout << "Player 1 turn: ";
    cin >> player1;
    
    cout << "Player 2 turn: ";
    cin >> player2;
    
    switch(player1){
        case 1:
            
            switch(player2) {
                case 1:
                    
                    cout << endl << "Draw" << endl;
                    break;
                    
                case 2:
                    
                    cout << endl << "Player 1 wins" << endl;
                    break;
                    
                case 3:
                    
                    cout << endl << "Player 2 wins" << endl;
                    break;
                    
                default:
                    
                    cout << "Invalid Choice for Player 2...";
            }
            
            break;
        case 2:
            
            switch(player2) {
                case 1:
                    
                    cout << endl << "Player 2 wins" << endl;
                    break;
                    
                case 2:
                    
                    cout << endl << "Draw" << endl;
                    break;
                    
                case 3:
                    
                    cout << endl << "Player 1 wins" << endl;
                    break;
                    
                default:
                    
                    cout << "Invalid Choice for Player 2...";
            }
            
            break;
        case 3:
            
            switch(player2) {
                case 1:
                    
                    cout << endl << "Player 2 wins" << endl;
                    break;
                    
                case 2:
                    
                    cout << endl << "Player 1 wins" << endl;
                    break;
                    
                case 3:
                    
                    cout << endl << "Draw" << endl;
                    break;
                    
                default:
                    
                    cout << "Invalid Choice for Player 2...";
            }
            break;
        default:
            
            cout << "Invalid Choice for Player 1...";
            
    }
    
    
    
    return 0;
}
