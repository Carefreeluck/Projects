#include "house.h"
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <windows.h>
using namespace std;


void house::adverts()
{
	fstream pub;
	fstream pub1;
	fstream room;
	fstream pub123;
	fstream pub1234;
	fstream pub12345;

	string post;
	string d;
	string nume;
	string email;
	string word;
	string loc;
	string judet;



	char type[50];
	char phone[50];

	int price;
	int fees;
	int fprice;
	int numar;
	int choose;
	int rent;
	int t;
	int y;
	int gj=2;

	cout << "\nDo you wish to post or to see the posts of other houses:\n";
	cout << "\n 1.I want to make a post\n";
	cout << "\n 2.I want to see the other people posts\n";
	cout << "\n 3.Exit\n";
	cin.ignore(5000, '\n');
	cin >> choose;
	switch (choose)
	{//if the user wants to post
	case 1:
		if (accverif == 2) {
			////////////////for each number of rooms there is a case////////////////////

			cout << "\nNumber of rooms:\n";
			cout << "\n 1. one room  \n";
			cout << "\n 2. two rooms \n";
			cout << "\n 3. three rooms \n";
			cout << "\n 4. four rooms \n";
			cout << "\n 5. five or more rooms \n";
			cin >> numar;
			switch (numar)
			{
			/// <summary>
			/// one room
			/// </summary>
			case 1:

				pub.open("pub.txt", ios::app);
				pub1.open("pub1.txt", ios::app);

				cout << "\nYour name: ";
				pub << "\nSeller: ";
				pub1 << "\nSeller: ";
				cin.ignore(500, '\n');
				getline(cin, nume);
				pub << nume;
				pub1 << nume;

				////////////////////////////////////

				cout << "\nHouse type: ";
				pub << "\nHouse type: ";
				pub1 << "\nHouse type: ";
				cin >> type;
				pub << type;
				pub1 << type;

				////////////////////////////////////


				pub << "\nCity: ";
				pub1 << "\nCity: ";
				do {
					cout << "\nCity: ";
					judete.open("judete.txt", ios::in | ios::out);
					if (judete.is_open())
					{
						while (getline(judete, judet))
						{
							
							cin >> loc;
							size_t x = loc.size();
							if (judet.find(loc) != string::npos && x > 3) {
								gj = 5;
							}
						}
					}judete.close();
				} while (gj != 5);
				pub << loc;
				pub1 << loc;

				////////////////////////////////////

				pub << "\nNumber of rooms: 1\n";
				pub1 << "\nNumber of rooms: 1\n";

				////////////////////////////////////

				cout << "\nDescription:\n";
				pub << "\nDescription:\n";
				pub1 << "\nDescription:\n";
				cin.ignore(500, '\n');
				getline(cin, d);
				pub << d;
				pub1 << d;

				////////////////////////////////////
				cout << "\nDo you want to rent or sell?\n";
				cout << "\n 1.Sell";
				cout << "\n 2.Rent";
				cin >> rent;
				switch (rent)
				{//the user chooses if he wants to rent or to sell
				case 1:
					cout << "\nPrice(without fees): ";
					pub << "\nPrice: ";
					pub1 << "\nPrice: ";
					cin >> price;
					fees = price * 5 / 100;
					fprice = price + fees;
					cout << "\nFinal price(): " << fprice << "$\n";
					pub << fprice << "$\n";
					pub1 << fprice << "$\n";
					break;
				case 2:
					cout << "\nRent(without fees): ";
					pub << "\nRent: ";
					pub1 << "\nRent: ";
					cin >> price;
					fees = price * 5 / 100;
					fprice = price + fees;
					cout << "\nRent total(): " << fprice << "$/month\n";
					pub << fprice << "$/month\n";
					pub1 << fprice << "$/month\n";

				}

				///////////////////////////////////

				cout << "\nContacts";
				pub << "\nContacts";
				pub1 << "\nContacts";
				cout << "\nTelephone: ";
				pub << "\nTelephone: ";
				pub1 << "\nTelephone: ";
				cin >> phone;
				pub << phone;
				pub1 << phone;

				////////////////////////////////////

				cout << "\nE-mail: ";
				pub << "\nE-mail: ";
				pub1 << "\nE-mail: ";
				
				/// the requirements for the email that you had suggested me to make
				do {
					cin >> email;
					if (email.find('@') != string::npos) {
						t = 1;
					}
					else { t = 0; }
					if (email.find('.') != string::npos) {
						y = 1;
					}
					else { y = 0; }
				} while (t == 0 || y == 0);

				pub << email;
				pub1 << email;

				pub << "\n*****************************************************************************************************************************\n";
				pub.close();
				pub1 << "\n*****************************************************************************************************************************\n";
				pub1.close();
				cout << "Posted!";
				break;
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				
			/// <summary>
			/// two rooms
			/// </summary>
			case 2:

				pub.open("pub.txt", ios::app);
				room.open("pub2.txt", ios::app);

				cout << "\nYour name: ";
				pub << "\nSeller: ";
				room << "\nSeller: ";
				cin.ignore(500, '\n');
				getline(cin, nume);
				pub << nume;
				room << nume;

				/// ////////////////////////////////

				cout << "\nHouse type: ";
				pub << "\nHouse type: ";
				room << "\nHouse type: ";
				cin >> type;
				pub << type;
				room << type;

				////////////////////////////////////

				pub << "\nCity: ";
				room << "\nCity: ";
				do {
					cout << "\nCity: ";
					judete.open("judete.txt", ios::in | ios::out);
					if (judete.is_open())
					{
						while (getline(judete, judet))
						{
							cin >> loc;
							size_t x = loc.size();
							if (judet.find(loc) != string::npos && x > 3) {
								gj = 5;
							}
						}
					}judete.close();
				} while (gj != 5);
				room << loc;
				pub << loc;

				////////////////////////////////////

				pub << "\nNumber of rooms: 2\n";
				room << "\nNumber of rooms: 2\n";

				////////////////////////////////////

				cout << "\nDescription:\n";
				pub << "\nDescription:\n";
				room << "\nDescription:\n";
				cin.ignore(500, '\n');
				getline(cin, d);
				pub << d;
				room << d;

				////////////////////////////////////

				cout << "\nDo you want to rent or sell?\n";
				cout << "\n 1.Sell";
				cout << "\n 2.Rent";
				cin >> rent;
				switch (rent)
				{
				case 1:
					cout << "\nPrice(without fees): ";
					pub << "\nPrice: ";
					room << "\nPrice: ";
					cin >> price;
					fees = price * 5 / 100;
					fprice = price + fees;
					cout << "\nFinal price(): " << fprice << "$\n";
					pub << fprice << "$\n";
					room << fprice << "$\n";
					break;
				case 2:
					cout << "\nRent(without fees): ";
					pub << "\nRent: ";
					room << "\nRent: ";
					cin >> price;
					fees = price * 5 / 100;
					fprice = price + fees;
					cout << "\nRent total(): " << fprice << "$/month\n";
					pub << fprice << "$/month\n";
					room << fprice << "$/month\n";

				}

				///////////////////////////////////

				cout << "\nContacts";
				pub << "\nContacts";
				room << "\nContacts";
				cout << "\nTelephone: ";
				pub << "\nTelephone: ";
				room << "\nTelephone: ";
				cin >> phone;
				pub << phone;
				room << phone;

				////////////////////////////////////

				cout << "\nE-mail: ";
				pub << "\nE-mail: ";
				room << "\nE-mail: ";
				do {
					cin >> email;
					if (email.find('@') != string::npos) {
						t = 1;
					}
					else { t = 0; }
					if (email.find('.') != string::npos) {
						y = 1;
					}
					else { y = 0; }
				} while (t == 0 || y == 0);
				pub << email;
				room << email;

				pub << "\n*****************************************************************************************************************************\n";
				pub.close();
				room << "\n*****************************************************************************************************************************\n";
				room.close();
				cout << "Posted!";
				break;
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

			/// <summary>
			/// three rooms
			/// </summary>
			case 3:

				pub.open("pub.txt", ios::app);
				pub123.open("pub3.txt", ios::app);

				cout << "\nYour name: ";
				pub << "\nSeller: ";
				pub123 << "\nSeller: ";
				cin.ignore(500, '\n');
				getline(cin, nume);
				pub << nume;
				pub123 << nume;

				/// ////////////////////////////////

				cout << "\nHouse type: ";
				pub << "\nHouse type: ";
				pub123 << "\nHouse type: ";
				cin >> type;
				pub << type;
				pub123 << type;

				////////////////////////////////////

				pub << "\nCity: ";
				pub123 << "\nCity: ";
				do {
					cout << "\nCity: ";
					judete.open("judete.txt", ios::in | ios::out);
					if (judete.is_open())
					{
						while (getline(judete, judet))
						{
							cin >> loc;
							size_t x = loc.size();
							if (judet.find(loc) != string::npos && x > 3) {
								gj = 5;
							}
						}
					}judete.close();
				} while (gj != 5);
				pub << loc;
				pub123 << loc;

				////////////////////////////////////

				pub << "\nNumber of rooms: 3\n";
				pub123 << "\nNumber of rooms: 3\n";

				////////////////////////////////////

				cout << "\nDescription:\n";
				pub << "\nDescription:\n";
				pub123 << "\nDescription:\n";
				cin.ignore(500, '\n');
				getline(cin, d);
				pub << d;
				pub123 << d;

				////////////////////////////////////

				cout << "\nDo you want to rent or sell?\n";
				cout << "\n 1.Sell";
				cout << "\n 2.Rent";
				cin >> rent;
				switch (rent)
				{
				case 1:
					cout << "\nPrice(without fees): ";
					pub << "\nPrice: ";
					pub123 << "\nPrice: ";
					cin >> price;
					fees = price * 5 / 100;
					fprice = price + fees;
					cout << "\nFinal price(): " << fprice << "$\n";
					pub << fprice << "$\n";
					pub123 << fprice << "$\n";
					break;
				case 2:
					cout << "\nRent(without fees): ";
					pub << "\nRent: ";
					pub123 << "\nRent: ";
					cin >> price;
					fees = price * 5 / 100;
					fprice = price + fees;
					cout << "\nRent total(): " << fprice << "$/month\n";
					pub << fprice << "$/month\n";
					pub123 << fprice << "$/month\n";

				}

				///////////////////////////////////

				cout << "\nContacts";
				pub << "\nContacts";
				pub123 << "\nContacts";
				cout << "\nTelephone: ";
				pub << "\nTelephone: ";
				pub123 << "\nTelephone: ";
				cin >> phone;
				pub << phone;
				pub123 << phone;

				////////////////////////////////////

				cout << "\nE-mail: ";
				pub << "\nE-mail: ";
				pub123 << "\nE-mail: ";
				do {
					cin >> email;
					if (email.find('@') != string::npos) {
						t = 1;
					}
					else { t = 0; }
					if (email.find('.') != string::npos) {
						y = 1;
					}
					else { y = 0; }
				} while (t == 0 || y == 0);
				pub << email;
				pub123 << email;

				pub << "\n*****************************************************************************************************************************\n";
				pub.close();
				pub123 << "\n*****************************************************************************************************************************\n";
				pub123.close();
				cout << "Posted!";
				break;
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

			/// <summary>
			/// four rooms
			/// </summary>
			case 4:

				pub.open("pub.txt", ios::app);
				pub1234.open("pub4.txt", ios::app);

				cout << "\nYour name: ";
				pub << "\nSeller: ";
				pub1234 << "\nSeller: ";
				cin.ignore(500, '\n');
				getline(cin, nume);
				pub << nume;
				pub1234 << nume;

				/// ////////////////////////////////

				cout << "\nHouse type: ";
				pub << "\nHouse type: ";
				pub1234 << "\nHouse type: ";
				cin >> type;
				pub << type;
				pub1234 << type;

				////////////////////////////////////

				pub << "\nCity: ";
				pub1234 << "\nCity: ";
				do {
					cout << "\nCity: ";
					judete.open("judete.txt", ios::in | ios::out);
					if (judete.is_open())
					{
						while (getline(judete, judet))
						{
							cin >> loc;
							size_t x = loc.size();
							if (judet.find(loc) != string::npos && x > 3) {
								gj = 5;
							}
						}
					}judete.close();
				} while (gj != 5);
				pub << loc;
				pub1234 << loc;

				////////////////////////////////////

				pub << "\nNumber of rooms: 4\n";
				pub1234 << "\nNumber of rooms: 4\n";

				////////////////////////////////////

				cout << "\nDescription:\n";
				pub << "\nDescription:\n";
				pub1234 << "\nDescription:\n";
				cin.ignore(500, '\n');
				getline(cin, d);
				pub << d;
				pub1234 << d;

				////////////////////////////////////

				cout << "\nDo you want to rent or sell?\n";
				cout << "\n 1.Sell";
				cout << "\n 2.Rent";
				cin >> rent;
				switch (rent)
				{
				case 1:
					cout << "\nPrice(without fees): ";
					pub << "\nPrice: ";
					pub1234 << "\nPrice: ";
					cin >> price;
					fees = price * 5 / 100;
					fprice = price + fees;
					cout << "\nFinal price(): " << fprice << "$\n";
					pub << fprice << "$\n";
					pub1234 << fprice << "$\n";
					break;
				case 2:
					cout << "\nRent(without fees): ";
					pub << "\nRent: ";
					pub1234 << "\nRent: ";
					cin >> price;
					fees = price * 5 / 100;
					fprice = price + fees;
					cout << "\nRent total(): " << fprice << "$/month\n";
					pub << fprice << "$/month\n";
					pub1234 << fprice << "$/month\n";

				}

				///////////////////////////////////

				cout << "\nContacts";
				pub << "\nContacts";
				pub1234 << "\nContacts";
				cout << "\nTelephone: ";
				pub << "\nTelephone: ";
				pub1234 << "\nTelephone: ";
				cin >> phone;
				pub << phone;
				pub1234 << phone;

				////////////////////////////////////

				cout << "\nE-mail: ";
				pub << "\nE-mail: ";
				pub1234 << "\nE-mail: ";
				do {
					cin >> email;
					if (email.find('@') != string::npos) {
						t = 1;
					}
					else { t = 0; }
					if (email.find('.') != string::npos) {
						y = 1;
					}
					else { y = 0; }
				} while (t == 0 || y == 0);
				pub << email;
				pub1234 << email;

				pub << "\n*****************************************************************************************************************************\n";
				pub.close();
				pub1234 << "\n*****************************************************************************************************************************\n";
				pub1234.close();
				cout << "Posted!";
				break;
				//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////Paunchici Andrei - Project/ 

			/// <summary>
			/// five+ rooms
			/// </summary>
			case 5:

				pub.open("pub.txt", ios::app);
				pub12345.open("pub5.txt", ios::app);

				cout << "\nYour name: ";
				pub << "\nSeller: ";
				pub12345 << "\nSeller: ";
				cin.ignore(500, '\n');
				getline(cin, nume);
				pub << nume;
				pub12345 << nume;

				/// ////////////////////////////////

				cout << "\nHouse type: ";
				pub << "\nHouse type: ";
				pub12345 << "\nHouse type: ";
				cin >> type;
				pub << type;
				pub12345 << type;

				////////////////////////////////////

				pub << "\nCity: ";
				pub12345 << "\nCity: ";
				do {
					cout << "\nCity: ";
					judete.open("judete.txt", ios::in | ios::out);
					if (judete.is_open())
					{
						while (getline(judete, judet))
						{
							cin >> loc;
							size_t x = loc.size();
							if (judet.find(loc) != string::npos && x > 3) {
								gj = 5;
							}
						}
					}judete.close();
				} while (gj != 5);
				pub << loc;
				pub12345 << loc;

				////////////////////////////////////

				pub << "\nNumber of rooms: 5+\n";
				pub12345 << "\nNumber of rooms: 5+\n";

				////////////////////////////////////

				cout << "\nDescription:\n";
				pub << "\nDescription:\n";
				pub12345 << "\nDescription:\n";
				cin.ignore(500, '\n');
				getline(cin, d);
				pub << d;
				pub12345 << d;

				////////////////////////////////////

				cout << "\nDo you want to rent or sell?\n";
				cout << "\n 1.Sell";
				cout << "\n 2.Rent";
				cin >> rent;
				switch (rent)
				{
				case 1:
					cout << "\nPrice(without fees): ";
					pub << "\nPrice: ";
					pub12345 << "\nPrice: ";
					cin >> price;
					fees = price * 5 / 100;
					fprice = price + fees;
					cout << "\nFinal price(): " << fprice << "$\n";
					pub << fprice << "$\n";
					pub12345 << fprice << "$\n";
					break;
				case 2:
					cout << "\nRent(without fees): ";
					pub << "\nRent: ";
					pub12345 << "\nRent: ";
					cin >> price;
					fees = price * 5 / 100;
					fprice = price + fees;
					cout << "\nRent total(): " << fprice << "$/month\n";
					pub << fprice << "$/month\n";
					pub12345 << fprice << "$/month\n";

				}

				///////////////////////////////////

				cout << "\nContacts";
				pub << "\nContacts";
				pub12345 << "\nContacts";
				cout << "\nTelephone: ";
				pub << "\nTelephone: ";
				pub12345 << "\nTelephone: ";
				cin >> phone;
				pub << phone;
				pub12345 << phone;

				////////////////////////////////////

				cout << "\nE-mail: ";
				pub << "\nE-mail: ";
				pub12345 << "\nE-mail: ";
				do {
					cin >> email;
					if (email.find('@') != string::npos) {
						t = 1;
					}
					else { t = 0; }
					if (email.find('.') != string::npos) {
						y = 1;
					}
					else { y = 0; }
				} while (t == 0 || y == 0);
				pub << email;
				pub12345 << email;

				pub << "\n*****************************************************************************************************************************\n";
				pub.close();
				pub12345 << "\n*****************************************************************************************************************************\n";
				pub12345.close();
				cout << "Posted!";
				break;
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			}
			break;
		}
		else
		{
			cout << "\nYou must be logged in to make a post!\n";
		}
	/// <summary>
	/// if the user chooses to see the posts
	/// </summary>
	case 2:
		//he can choose all the posts with a specific number of rooms
		int numarr;
		do {
			cout << "\nDo you want to see posts with a specific number of rooms? \n";
			cout << "\n 1. I want to see the posts with one room  \n";
			cout << "\n 2. I want to see the posts with two rooms \n";
			cout << "\n 3. I want to see the posts with three rooms \n";
			cout << "\n 4. I want to see the posts with four rooms \n";
			cout << "\n 5. I want to see the posts with five or more rooms \n";
			cout << "\n 6. I want to see all the posts\n";
			cout << "\n 7. Exit\n";
			cin >> numarr;

			switch (numarr)
			{
			case 1:
				pub1.open("pub1.txt", ios::in);
				if (pub1.is_open())
				{
					while (getline(pub1, post))
					{
						cout << post << endl;

					}

					cin.ignore(50000, '\n');
					cin.get();

				}
				pub1.close();
				break;
				////////////////////////////////////////////////////////////
			case 2:
				room.open("pub2.txt", ios::in);
				if (room.is_open())
				{
					while (getline(room, post))
					{
						cout << post << endl;

					}

					cin.ignore(50000, '\n');
					cin.get();

				}
				room.close();
				break;

				///////////////////////////////////////////////////////////
			case 3:
				pub123.open("pub3.txt", ios::in);
				if (pub123.is_open())
				{
					while (getline(pub123, post))
					{
						cout << post << endl;

					}

					cin.ignore(50000, '\n');
					cin.get();

				}
				pub123.close();
				break;
				///////////////////////////////////////////////////////////
			case 4:
				pub1234.open("pub4.txt", ios::in);
				if (pub1234.is_open())
				{
					while (getline(pub1234, post))
					{
						cout << post << endl;

					}

					cin.ignore(50000, '\n');
					cin.get();

				}
				pub1234.close();
				break;
				///////////////////////////////////////////////////////////
			case 5:
				pub12345.open("pub5.txt", ios::in);
				if (pub12345.is_open())
				{
					while (getline(pub12345, post))
					{
						cout << post << endl;

					}

					cin.ignore(50000, '\n');
					cin.get();

				}
				pub12345.close();
				break;
				///////////////////////////////////////////////////////////
			case 6:
				pub.open("pub.txt", ios::in);
				if (pub.is_open())
				{
					while (getline(pub, post))
					{
						cout << post << endl;

					}

					cin.ignore(50000, '\n');
					cin.get();

				}
				pub.close();
				break;
				///////////////////////////////////////////////////////////


			}
		} while (numarr != 7);

	}
}
