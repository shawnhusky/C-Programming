#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void generateRandomInput(int aaa[10])
{
	for(int a=0; a<10; a++)
	{
	aaa[a]=rand()%25 + 1;
	}
}

int countEven(int bbb[10])
{
	int counter1=0;
	for(int b=0; b<10; b++)
	{
	if(bbb[b]%2==0)
	counter1++;
	}

return counter1;
}

void printResult(int a, int b)
{
	if(a>b)
	cout<<"First Array"<<endl;
	else if(a<b)
	cout<<"Second Array"<<endl;
	else
	cout<<"Tie"<<endl;
}

int main()
{
	int array1[10];
	int array2[10];
	srand(time(0));
	generateRandomInput(array1);
	generateRandomInput(array2);

	//counting....
	int n1 = countEven(array1);
	int n2 = countEven(array2);
	printResult(n1, n2);
	return 0;
}