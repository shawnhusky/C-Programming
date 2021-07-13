#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));

	int a = rand() % 8 + 10; //range from 10 to 17
	
	cout << a << endl;
	return 0;
}