#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;

int main()
{
    int num;

    srand(time(0));

    for (int i = 0; i < 5; i++) {


        do {

            cout << "Enter Number " << i + 1 << ": ";
            cin >> num;


            if (num > 30 || num < 0)
                cout << "Invalid Number" << endl;

        } while (num > 30 || num < 0);

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);

        for (int j = 0; j < num; j++) {
            cout << '*';
        }
        cout << endl;

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    }

    return 0;
}


