#include <iostream>
using namespace std;


void welcome();

char getYesNo();

void printResponse(char responseToPrint);

void AskYesOrNoQuestion();

int main()
{
	// Asks the user to enter y or n and then return the response
	AskYesOrNoQuestion();

	system("pause");
}

void welcome()
{
	//Welcome the user to the program
	cout << "Welcome! \n";
}

char getYesNo()
{
	//Ask the user y or n
	cout << "Please answer: y or n. \n";
	//char variable to store the response
	char response;
	//get input from the user via keyboard
	cin >> response;

	return response;

}

void printResponse(char responseToPrint)
{
	//print response from user
	cout << "Your answer was: " << responseToPrint << endl;
}

void AskYesOrNoQuestion()
{
	welcome();

	char answer = getYesNo();

	printResponse(answer);
}

