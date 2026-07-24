#include <iostream>
#include <string>
using namespace std;

struct Container
{
	string Name;
	
	
	int X;
	int Y;
	int Z;

};


int main()
{
	/*
	int a = 100; // Declare an integer variable 'a' and initialize it with the value 100

	int* aPtr; // Declare a pointer variable 'aPtr' that can hold the address of an integer
	aPtr = &a; // Assign the address of 'a' to the pointer 'aPtr'

	std::cout << *aPtr << std::endl; // Dereference the pointer 'aPtr' to access the value of 'a' and print it to the console

	int b = 50;

	aPtr = &b;
	
	std::cout << *aPtr << std::endl;*/

	/*int numbers[] = { 0, 1 , 2, 3, 4, 5, 6, 7, 8, 9 };


	int* NumPtr = numbers;

	std::cout << *NumPtr << std::endl;

	NumPtr++;

	std::cout << *NumPtr << std::endl;

	NumPtr++;

	std::cout << *NumPtr << std::endl;

	NumPtr += 3;

	std::cout << *NumPtr << std::endl;*/

	Container container = {"Sam", 5 , 6 , 7};

	Container* PtrToCont = &container;

	cout << (*PtrToCont).Name << endl; // Accessing members of a struct through a pointer using dereferencing operator
	cout << (*PtrToCont).X << endl;
	cout << (*PtrToCont).Y << endl;
	cout << (*PtrToCont).Z << endl;

	cout << PtrToCont->Name << endl; // Prefferred way to access members of a struct through a pointer


	system("pause");
}