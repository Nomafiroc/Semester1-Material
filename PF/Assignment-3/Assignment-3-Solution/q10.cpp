#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int rows,num1 = 1, num2 = 2;
    cout<<"Enter the no of times you want to run the loop"<<endl;
    cin>>rows;
    while(rows<=0)
    {

        cout<<"error"<<endl;
        cin>>rows;
    }
	//char opt;
	int i=0;
	do
	{
		cout << num1 << "/" << num2;
		if(i+1!=rows)
            cout<<" , ";
		num1 = num1 + num2;
		num2 = num1 + 1;
		//cout << "Do you want to continue" << endl;
		//cin >> opt;
		//opt = tolower(opt);
		/*while (opt != 'y' && opt != 'n')
		{
			cout << "Please enter Y or N" << endl;
			cin >> opt;
			opt = tolower(opt);

		}*/
		i++;
	} while (i<rows);
}
