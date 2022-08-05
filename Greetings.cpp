#include "house.h"
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

using namespace std;
//text art at the start of the program for the all the users
void house::welcome()
{
	int hac;

	cout << "Welcome to Jamaica Bam Bam Real Estate!\n";
	cout << "\n             |\n";
	cout << "	   \\ _ /\n";
	cout << "	 -= (_) = -\n";
	cout << "	    / \\          _\\ /_\n";
	cout << "	     |           //o\\  _\\ /_\n";
	cout << " _____ _ __ __ ____  _ _   | _ //o\\ ___ _\n";
	cout << "-_=_= -= -_ - __ = _  -_=  |     | -, _ _\n";
	cout << "-_--= -_ = -= --_ = -=           | \n";
	cout << "_=_--_ = -= --= .--\n";

	cout << "\nDo you have an account? (please enter the number next to the option you want to choose)\n";
	cout << "\n 1.Yes \n";
	cout << "\n 2.No \n";
	
	cin >> hac;
	if (hac == 2)
	{
		cout << "\nPeople who BUY LAND AND A PROPERTY are able to create an account that gives them 50% discount when changeing a house.\n";
	}
	switch (hac)
	{
	case 1:
		have = 2;
		break;
	case 2:
		have = 0;
		accverif = 0;
		break;
	}
}