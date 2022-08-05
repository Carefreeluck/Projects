#include "house.h"
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

using namespace std;

/// <summary>
/// at the real end of the program we have function for the administrator to keep track of the transactions(i belive this was a suggestion as well)
/// </summary>

void house::sna()

{
	ifstream trans;
	string post;
	string word;
	string word1;
	int cot = 0;
	int cont = 0;
	int ser;
	string usern="admin";//user
	string passw="admin";//password
	string usern1;
	string passw1;

	cout << "\nUsername:\n";
	cin >> usern1;
    cout << "\nPlease enter your password:\n";
	cin >> passw1;
	if (usern==usern1&&passw==passw1) {
		do {
			cout << "\nGreetings Director!\n";

			cout << "\nDo you want to see the numbers of certain transactions? \n";
			cout << "\n 1.How many transactions were done in a certain district \n";
			cout << "\n 2.How many houses were rented\n";
			cout << "\n 3.How many houses were bought\n";
			cout << "\n 4.How many rural lands transactions were done \n";
			cout << "\n 5.How many urban lands transactions were done \n";
			cout << "\n 6.I want to see the number of transactions for each house type\n";
			cout << "\n 7.Exit \n";
			cin >> ser;
			switch (ser)
			{
			case 1:
				cout << "\nEnter the district you are searching for(ex: Brasov): ";

				cin >> word1;
				word = "Location: " + word1;

				trans.open("Transaction.txt", ios::in);
				if (trans.is_open())
				{
					while (getline(trans, post))
					{

						if (post == word)
							cot++;

					}

				}
				trans.close();

				cout << "\nThere are: " << cot << " transactions done in that district";
				cin.ignore(5, '\n');
				cot = 0;
				break;
			case 2:

				word = "Object ownership: Rented";

				trans.open("Transaction.txt", ios::in);
				if (trans.is_open())
				{
					while (getline(trans, post))
					{

						if (post == word)
							cot++;

					}

				}
				trans.close();

				cout << "\nThere were :" << cot << " houses rented";
				cin.ignore(5, '\n');
				cot = 0;
				break;
			case 3:

				word = "Object ownership: Owner";

				trans.open("Transaction.txt", ios::in);
				if (trans.is_open())
				{
					while (getline(trans, post))
					{

						if (post == word)
							cot++;

					}

				}
				trans.close();

				cout << "\nThere are: " << cot << " houses bought";
				cin.ignore(5, '\n');
				cot = 0;
				break;
			case 4:

				word = "Land type: Rural";

				trans.open("Transaction.txt", ios::in);
				if (trans.is_open())
				{
					while (getline(trans, post))
					{

						if (post == word)
							cot++;

					}

				}
				trans.close();

				cout << "\nThere are: " << cot << " transactions with rural land";
				cin.ignore(5, '\n');
				cot = 0;
				break;
			case 5:

				word = "Land type: Urban";

				trans.open("Transaction.txt", ios::in);
				if (trans.is_open())
				{
					while (getline(trans, post))
					{

						if (post == word)
							cot++;

					}

				}
				trans.close();

				cout << "\nThere are: " << cot << " transactions with urban land";
				cin.ignore(5, '\n');
				cot = 0;
				break;
			case 6:
				cout << "\nChoose the type of house you want to see: \n";
				cout << "\n 1.Single pen\n";
				cout << "\n 2.Bing's house\n";
				cout << "\n 3.Duplex\n";
				cout << "\n 4.Back\n";
				int sase;
				cin >> sase;
				switch (sase) {
				case 1:
					word = "House bought: Single pen";

					trans.open("Transaction.txt", ios::in);
					if (trans.is_open())
					{
						while (getline(trans, post))
						{

							if (post == word)
								cot++;

						}

					}
					trans.close();

					cout << "\nThere are: " << cot << " Single pen's bought";

					word = "House rented: Single pen";

					trans.open("Transaction.txt", ios::in);
					if (trans.is_open())
					{
						while (getline(trans, post))
						{

							if (post == word)
								cont++;

						}

					}
					trans.close();

					cout << "\nThere are: " << cont << " Single pen's rented";
					cin.ignore(5, '\n');
					cot = 0;
					cont = 0;
					break;
				case 2:
					word = "House bought: Bing's house";

					trans.open("Transaction.txt", ios::in);
					if (trans.is_open())
					{
						while (getline(trans, post))
						{

							if (post == word)
								cot++;

						}

					}
					trans.close();

					cout << "\nThere are: " << cot << " Bing's bought";

					word = "House rented: Bing's house";

					trans.open("Transaction.txt", ios::in);
					if (trans.is_open())
					{
						while (getline(trans, post))
						{

							if (post == word)
								cont++;

						}

					}
					trans.close();

					cout << "\nThere are: " << cont << " Bing's rented";
					cin.ignore(5, '\n');
					cot = 0;
					cont = 0;
					break;
				case 3:
					word = "House bought: Duplex";

					trans.open("Transaction.txt", ios::in);
					if (trans.is_open())
					{
						while (getline(trans, post))
						{

							if (post == word)
								cot++;

						}

					}
					trans.close();

					cout << "\nThere are: " << cot << " Duplex bought";

					word = "House rented: Duplex";

					trans.open("Transaction.txt", ios::in);
					if (trans.is_open())
					{
						while (getline(trans, post))
						{

							if (post == word)
								cont++;

						}

					}
					trans.close();

					cout << "\nThere are: " << cont << " Duplex rented";
					cin.ignore(5, '\n');
					cot = 0;
					cont = 0;
					break;
				case 4:
					break;

				}

				break;
			case 7:
				break;
			}
		} while (ser != 7);
	}
}
