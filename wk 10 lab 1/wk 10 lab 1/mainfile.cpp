#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
	srand(time(0));

	int price = rand () % 951 + 50;//random integer range frm 50 - 1000
	double discount = 0.0;
	double discounted_price = 0.05;
	
	if (price >= 100 && price <= 200)
	{
		discount = 0.1;
	}
	else if (price >= 200)
	{
		discount = 0.2;
	}
	else
	{
		discount = 0.05;
	}
	
	cout <<"the discounted price is "<< price*(1-discount) <<  endl;

	return 0;
}