//Simple Class with more features

#include<iostream>
using namespace std;

class Circle	
{
	float radius, area;
	void compute_area()
	{
		area = 3.14 * radius * radius;
	}
	public:
		void input_raidus()
		{
			cout <<"Enter the radius of the circle =  ";
			cin >> radius;
		}
		void show_area()
		{
			compute_area();
			cout <<"Area of the circle with radius "<< radius << "= "<< area << endl;
		}
};

int main()
{
	Circle c;    				// sc is the object
	c.input_raidus();
	c.show_area();
	return 0;
}
