//Simple Class

#include<iostream>
using namespace std;

class SimpleClass				// SimpleClass is class
{
	public:
		int rollno;
		float percent;
};

int main()
{
	SimpleClass  sc;    				// sc is the object
	cout <<"Enter the roll no =  ";
	cin  >> sc.rollno;
	cout << "Enter the percent = " ;
	cin >> sc.percent;
	cout << "___________ Entered value are_______________________"<< endl;
	cout << "Roll No = " << sc.rollno<< endl;
	cout << "Percent = "<< sc.percent << endl;
	return 0;
}
