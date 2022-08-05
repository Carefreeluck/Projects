#include "house.h"
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

using namespace std;

/// <summary>
/// if the user wants to see the number of posts for something specific
/// </summary>

void house::sn()

{
	ifstream pub;
	string post;
	string word;
	string word1;

	int cot = 0;

	int ser;

	cout << "\nDo you want to see the the numbers of posts that contain something specific? \n";
	cout << "\n 1.A city \n";
	cout << "\n 2.Number of rooms \n";
	cout << "\n 3.A type of house \n";
	cout << "\n 4.A seller \n";
	cout << "\n 5.Skip \n";
	cin >> ser;
	switch (ser)
	{
	case 1:
		cout << "\nEnter the city you are searching for(ex: Brasov): ";

		cin >> word1;
		word = "City: " + word1;

		pub.open("pub.txt", ios::in);
		if (pub.is_open())
		{
			while (getline(pub, post))
			{

				if (post == word)
					cot++;

			}

		}
		pub.close();

		cout << "\nThere are: " << cot << " posts that contain that";
		cin.ignore(5, '\n');
		break;
	case 2:
		cout << "\nEnter the number you are searching for(1, 2, 3 , 4 or 5+): ";

		cin >> word1;
		word = "Number of rooms: " + word1;

		pub.open("pub.txt", ios::in);
		if (pub.is_open())
		{
			while (getline(pub, post))
			{

				if (post == word)
					cot++;

			}

		}
		pub.close();

		cout << "\nThere are :" << cot << " posts that contain that";
		cin.ignore(5, '\n');
		break;
	case 3:
		cout << "\nEnter the type of house you are searching for(ex: Single): ";

		cin >> word1;
		word = "House type: " + word1;

		pub.open("pub.txt", ios::in);
		if (pub.is_open())
		{
			while (getline(pub, post))
			{

				if (post == word)
					cot++;

			}

		}
		pub.close();

		cout << "\nThere are: " << cot << " posts that contain that";
		cin.ignore(5, '\n');
		break;
	case 4:
		cout << "\nEnter the seller you are searching for(ex: Paunchici Andrei): ";
		cin.ignore(5, '\n');
		getline(cin, word1);
		
		word = "Seller: " + word1;

		pub.open("pub.txt", ios::in);
		if (pub.is_open())
		{
			while (getline(pub, post))
			{

				if (post == word)
					cot++;

			}

		}
		pub.close();

		cout << "\nThere are: " << cot << " posts that contain that";
		cin.ignore(5, '\n');
		break;
	case 5:
		break;
	}
}