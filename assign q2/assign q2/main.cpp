#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

int main()
{
	srand(time(0));

	int act = rand() % 6 + 0; //range 0 to 5
	int lead = rand() % 11 + 0; //range 0 to 10
	int cgpa = rand() % 6 + 0; //range 0 to 5
	int att = rand() % 101 + 0; //range 0 to 10

	att = 100; // for testing

	if (cgpa >= 3 && att == 100 && act >= 2 && lead >= 7)
	{
		cout << "High Merit" << endl;
	}
	else if (cgpa >= 3 && att == 100 && act >= 1 && lead >= 3 && lead <= 6)
	{
		cout << "Medium Merit" << endl;
	}
	else if (cgpa >= 3 && att == 100)
	{
		cout << "Merit" << endl;
	}
	else if (cgpa >= 2 && att == 100 && (act >= 2 || lead >= 1))
	{
		cout << "Participating Merit" << endl;
	}
	else
	{
		cout << "No Merit Award" << endl;
	}
	

	return 0;
}