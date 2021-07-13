#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(0));

	int a = rand() % 18 + 3; // range from 3 to 20
	int b = rand() % 18 + 3; // range from 3 to 20
	int c = rand() % 18 + 3; // range from 3 to 20

	cout << "First number is: " <<  a << endl;
	cout << "Second number is: " <<  b << endl;
	cout << "Third number is: " <<  c << endl;


	if (a > b && a > c)
	{
		cout << "The largest number is: " << a << endl; 
	}
	else if (b > a && b > c)
	{
		cout << "The largest number is: " << b << endl; 
	}
	else
	{
		cout << "The largest number is: " << c << "." << endl; 
	}

	return 0;
}