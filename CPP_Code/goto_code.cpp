// Code for goto
// Level_name          goto Level
#include<iostream>
using namespace std;
int main()
{
	int pert;
	arun:								// Level name
	cout << "Enter percentage = ";
	cin >> pert;
	if(pert < 75)
	{
		cout << "It is not an Hons, Please enter a new percentage again" << endl;
		saket:							// A new level name
		goto arun;
	}
	cout << "Now, it is an Honrs"<<endl;
	int ch;
	cout<< "Enter Your choice, 1 to continue other to exit = ";
	cin >> ch;
	if (ch == 1)
		goto saket;	
}
