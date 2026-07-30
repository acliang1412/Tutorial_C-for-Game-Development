#include <iostream>
using namespace std;

void AddToCount()
{
	static int count = 0;
	count++;
	cout << count << endl;
}
class Item
{
	public:
		Item()
		{
			cout << "An Item has been created\n";
		}
		~Item()
		{
			cout << "An Item has been destroyed!\n";
		}
};
class Critter
{
	public:
	static int CritterCount;

};
int Critter::CritterCount = 0;

int main()
{

	Critter::CritterCount = 13;

	cout << Critter::CritterCount << endl;
	system("pause");
}