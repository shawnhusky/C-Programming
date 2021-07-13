#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

	int num[10];

	srand(time(0));


	//while loop to generate numbers for array

	cout<<"Array: ";

	int a = 0;

	while(a<10)
	{

	num[a] = rand()% 50 + 1; //1-50

	cout<<num[a]<<"\t";

	a++;

	}

	cout<<endl;

	int z = rand()% 50 + 1;

	cout<<"Value: "<<z<<endl;

	cout<<"Array: ";

	int b = 0;

	while(b<10)
	{

	//replace the array element with -1 if it > z

	if(num[b]>z)

	num[b]=1;

	cout<<num[b]<<" ";

	b++;

	}

cout<<endl;

return 0;

}
