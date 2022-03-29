/*
Title: Chapter Fifteen Star Recursion Program -- Source Code
Created by William Schaeffer
CPS 362
P. 1080, Challenge 1, Star Recursion Program, Week 8
03.03.2022
*/

#include <iostream>

using namespace std;

void starPrinter(int);

int main()
{
	int numberOfLines = 0;

	cout << "Please enter a nonnegative integer to generate a pattern of stars: ";
	cin >> numberOfLines;

	while (numberOfLines < 1)
	{
		cout << "Invalid input. Please enter an integer larger than 0: ";
		cin >> numberOfLines;
		cout << endl << endl;
	}

	starPrinter(numberOfLines);

	return 0;
}

//starPrinter recursive function
	//base case is starLines == 0
	//each recurrence is called with (starLines - 1) until base call is reached

void starPrinter(int starLines)
{
	if (starLines == 0) return;					//base case
	
	else
	{
		for (int i = 1; i <= starLines; i++)	//descending general case
		{
			cout << "*";
		}
		cout << endl;

		starPrinter(starLines - 1);				//recursive function call 

		for (int i = 1; i <= starLines; i++)	//ascending general case
		{
			cout << "*";
		}
		cout << endl;
	}

}