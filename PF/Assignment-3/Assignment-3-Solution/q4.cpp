#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int rows;
	cout << "Enter no of rows" << endl;
	cin >> rows;
	while(rows<=0)
    {

        cout<<"error"<<endl;
        cin>>rows;
    }
	int i = 0;
	while(i<rows)
	{
		cout << "#" << setw(i++ + 1) << "#" << endl;
	}
}
