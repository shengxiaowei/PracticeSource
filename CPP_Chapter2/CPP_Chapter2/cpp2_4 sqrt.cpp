#include<iostream>
#include<cmath>

int main()
{
	
	using std::cout;
	using std::cin;
	using std::endl;

	double area;


	cout << "Entet the floor area, in square feet, of your home: ";
	cin >> area;
	double side;
	side = sqrt(area);
	 
	cout << "That's the equvalue of a square " << side
		<< " feet to side" << endl;
	cout << "How facinating!" << endl;

	return 0;
}