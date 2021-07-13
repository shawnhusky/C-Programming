#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(0));

	int num[30];
	int counter = 0;
	int counter2 = 0; 

	for (int i=0; i< 30; i++)
	{
		
		num[i] = rand() % 41 + 20; //range from 20 to 60
		
		if (num[i] <= 35)
		{
			counter ++;
		}
		else if (num[i] > 45)
		{
			counter2 ++;
		}

	}

	cout << "There are " << counter << " numbers smaller than or equal to 35" << endl;
	cout << "There are " << counter2 << " numbers larger than 45" << endl;

	return 0;
}