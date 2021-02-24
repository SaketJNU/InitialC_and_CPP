// If-else if - if ladder  code

#include<iostream>
//using namespace std;

int main ()
{
	int prcnt;
	std::cout<<"Enter the percentage = ";
	std::cin >> prcnt;
	if(prcnt >= 75)
	{
		std::cout << "The person is passed with first division with horns" ;
	}
	else if(prcnt <75 && prcnt >= 60)
	{
		std::cout << "The person is passed with first division";
	}
	else if(prcnt < 60 && prcnt >=45)
	{
		std::cout << "The person is passed with second division";
	}
	else if(prcnt >=35 and prcnt < 45)
	{
		std::cout << "The person is passed with Third division.";
	}
	else
	{
		std::cout << "The person is failed"<< std::endl;	
	}
	return 0;
}
