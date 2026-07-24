#include <iostream>
#include <string>
using namespace std;

int main()
{

	string MyString;
	MyString = "My Dog name is: ";
	string first = "Spot ";
	string last = "Jones";

	MyString += (first + last);
	//MyString += last;

	cout << MyString << endl;

	system("pause");
}