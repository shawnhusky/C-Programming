#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*

	string name; //declare a variable, the name is name,the type is string
	cout << "Enter your name: ";
	getline(cin, name);// get entire line and store to name(for string with spaces)

	int age;
	cout << "Enter your age: ";
	cin >> age;

	cout << "Hello " << name; 
	cout << " You are " << age << " years old" << endl;

	return 0;

	*/

	//prompt user to enter info


	/*
	int age;
	cout << "Please enter your age here : ";
	cin >> age;

	cout << "your age is " << age << endl;
	*/

	/*
	int num1 = 6;
	double num2 = 8;
	int num3 = 1;

	num1 = num1 + 1;
	num3 = num3 + num1;
	num2 = 7.0 / num3;
	num3 = num3 + 2;	

	
	cout <<"num1: "<< num1 <<"\nnum2: "<< num2 <<"num3: "<< num3 << endl;//\n for new line can put anywhere



	return 0;
	*/


	/*
	int id;
	string name;
	char gender;
	string diploma;
	

	cout <<"Please enter ID number: ";
	cin >> id;
	getline(cin, name); //clear the enter so it wont be read as string when u press enter
	cout <<"Please enter your name: ";
	getline(cin, name);
	cout <<"please enter your gender(M/F) ";
	cin >> gender;
	getline(cin, diploma);//clear
	cout <<"Please enter your diploma ";
	getline(cin, diploma);

	//display

	cout << "ID :" << id <<"\nName: "<< name <<"\nGender: "<< gender <<"\nDiploma :"<< diploma << endl;
	*/



	double orgprice;
	int qty;
	double discountprice;


	cout <<"Enter original unit price: ";
	cin >> orgprice;
	cout <<"Enter Qty of item : ";
	cin >> qty;
	discountprice = (orgprice*90/100)*qty;
	cout <<"Total Discounted price: "<< discountprice << endl;




	
}