/* This is a program that outputs multiplicaiton tables for numbers between 4 and 12.
   By: Mia Armstrong using Visual C++ 2008
   For: CS 162
   4-17-2012
*/

#include<iostream>
using namespace std;
#include <iomanip>

int main(void)
{
	char reply;
	int num;
	cout << "A multiplication table:" << endl
		<< "Please enter a number between 4 and 12: ";
	cin >> num;
	while (cin)
	{
		if (num >12 || num <4)
		{
			cout << "Invalid number please try again." << endl;
			cout << "Please enter a number between 4 and 12: ";
			cin >> num;
		}
		else 
			break;
	}
	cout << "" << endl;
	cout << "      " ;
	for(int c = 0; c<= num; c++)
	{
		cout.width(5);
		cout << setw (3) << 1 * c << ' ';
	}
	cout << "" << endl;
	for(int c = 0; c <= num; c++)
	{
		cout.width(5);
		cout << c << " ";
		for(int i = 0; i <= num; i++)
		{
			cout.width(5);
			cout << setw (3) << i * c << ' ';
		}
		cout << endl;
	}
	cout << "Press q (or any other key) followed by 'Enter' to quit: ";
	cin >> reply; 
	return 0;
}