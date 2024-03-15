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
	int i = 1;
	while(rows>0)
	{
		cout << setw(rows);
		int temp = i;
		while (temp > 0)
		{
			cout << i;
			temp--;
		}
		i++;
		rows--;
		cout << endl;

	}
}
