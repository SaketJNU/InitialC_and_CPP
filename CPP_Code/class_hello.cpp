// Print Hellow world by using class and object
#include<iostream>
using namespace std;

class MyNumber{
	public:
		int number;
	
		void input_value(int x){
			number = x;
		}
		
		void output_value(){
		cout<< "You have entered the value   " << number << endl;	
		}
}; 

int main()
{
	int x;
	cout << "Enter the number = ";
	cin >> x;
	MyNumber mn;		// mn: object and MyNumber: class
	mn.input_value(x);
	mn.output_value();
	mn.number = 100;
	cout << "updated value is = " << mn.number;
	return 0;
}






// Access Specifier: public, private and protected 
