//Code for input and Output 

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	cout<<"Enter your name =  ";
	char name[20];
	gets(name);
	cout<< "Hellow " << name << ", How are you? Please enter age = " << endl;
	int age;
	cin >> age;
	cout << "Your age = " << age;
	return 0;
}
