#include <iostream>
#include <string>

using namespace std;

int main()
{
	for (int j=0;j<5;j++)
	{
		for (int i=0;i<j;i++)
		{
			cout << "#";
		}

		cout << endl;
	}

	return 0;
}