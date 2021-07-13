#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(0));

	int n1 = rand() % 31 + 10; //10 to 40
	int n2 = rand() % 31 + 10; //10 to 40
	int n3 = rand() % 31 + 10; //10 to 40

	int t1 = rand() % 41 + 5; //5 to 45
	int t2 = rand() % 41 + 5; //5 to 45
	int t3 = rand() % 41 + 5; //5 to 45

	cout << "Combo first number		:" << n1 << endl;
	cout << "Combo second number		:" << n2 << endl;
	cout << "Combo third number		:" << n3 << endl;

	cout << endl;

	cout << "Tried first number		:" << t1 << endl;
	cout << "Tried second number		:" << t2 << endl;
	cout << "Tried third number		:" << t3 << endl;

	cout << endl;

	if (t1 >= n1-2 && t1 <= n1-2 && t2 >= n2-2 && t2 <= n2-2 && t3 >= n3-2 && t3 <= n3-2)
	{
		cout << "Lock Opens" << endl;
	}
	else
	{
		cout << "Unable to open" << endl;
	}

	return 0;
}