#include <iostream>

using namespace std;

int addtogether(int x,int y)
{
	int sum = x + y;

	return sum;
}


int main()
{

	int a = 10;
	int b = 20;

	int s = addtogether(a,b);

	cout << s << endl;

	return 0;
}