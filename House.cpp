#include "house.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


//function for buying/renting houses
void house::houses()
{
	int j;
	int s;
	int n;
	int c;
	int r;
	string judet;
	//checks if the district(judetul) exists
	do {
		cout << "\nType in the district you are interested in for buying/renting: ";

		judete.open("judete.txt", ios::in | ios::out);
		if (judete.is_open())
		{
			while (getline(judete, judet))
			{
				cin.ignore(500, '\n');
				getline(cin, judet1);
					size_t x=judet1.size();
				if (judet.find(judet1) != string::npos && x > 3)
				{
					judete.close();

					cout << "\nDo you want to buy or rent?\n";
					cout << "\n 1.Buy\n";
					cout << "\n 2.Rent\n";
					cout << "\n 3.Next\n";
					cin >> bor;
					switch (bor)
					{
///////////////////*If you want to buy houses*//////////////////////////////////////
					case 1:


						price = 18000;
						cout << "\nChoose the type of house you want by introducing the number of your option: \n";
						cout << "\n 1.Single pen(1 room) (18000$)  \n";
						cout << "\n 2.Bing's house(2 rooms) (36000$) \n";
						cout << "\n 3.Duplex (54000$) \n";
						cout << "\n 4.Three or more rooms house (Starting from 80000$) \n";
						cout << "\n 5.Next \n";

						cin >> number;

						switch (number) {
							///////////////////////house 1///////////////////////////
						case 1:
							cout << "\nDo you have another house and want to change it \n";
							cout << "\n 1.Yes \n";
							cout << "\n 2.No \n";
							cin >> choice;
							if (accverif == 1)
							{
								d = price * 50 / 100;
							}
							else
							{
								d = price * 30 / 100;
							}

							switch (choice) {
							case 1:

								fee = price * 5 / 100;
								pricef = price - d + fee;
								cout << "\n The total price is: " << pricef << "$\n";
								break;
							case 2:

								fee = price * 5 / 100;
								pricef = price + fee;
								cout << "\n The total price is: " << pricef << "$\n";
								break;
							}

							cout << "\nDo you want to proceed with the transaction? \n";
							cout << "\n 1.Yes \n";
							cout << "\n 2.No \n";
							cin >> t;
							if (t == 1)
							{
								cout << "\nEnter your first name: ";
								cin >> bh1.firstname;
								cout << "\nEnter your last name: ";
								cin >> bh1.lastname;
								do {
									cout << "\nEnter creditcard number(16 digits): ";
									cin >> bh1.creditcard;

								} while (bh1.creditcard.size() != 16);

								do {
									cout << "\nEnter creditcard PIN(4 digits): ";

									while (!(cin >> r)) {
										cin.clear();
										cin.ignore(numeric_limits<streamsize>::max(), '\n');

										cout << "Invalid input!";
										cout << "\nEnter creditcard PIN(4 digits): ";

									}
									bh1.PIN = to_string(r);
								} while (bh1.PIN.length() != 4);

								do {
									cout << "\nEnter billing address(please follow this example: city: Timisoara, str. Aurel Vasile nr.34 ): ";
									getline(cin, bh1.address);
									if (bh1.address.find("city") != string::npos) {
										j = 1;
									}
									else { j = 0; }
									if (bh1.address.find("str") != string::npos) {
										s = 1;
									}
									else { s = 0; }
									if (bh1.address.find("nr") != string::npos) {
										n = 1;
									}
									else { n = 0; }
								} while (s == 0 || n == 0 || j == 0);


							
								cout << "\nEnter phone number: ";
								
								cin >> bh1.telephone;
								

								cout << "\nYour payment details have been sent to us an will be reviewed.\n";
								cin.ignore(10, '\n');
								cout << "\nDo you want to complete the payments?\n";
								cout << "\n 1.Yes\n";
								cout << "\n 2.No\n";

								cin >> c;
								if (c == 1)
								{

									cout << "\nThank you for your purchase!\n";

									v = 1;
									/// <summary>
									/// if the purchase was complete the data for the payments are saved
									/// </summary>
									transaction.open("Transaction.txt", ios::app);
									transaction << "\n*****************************************************************************************************************************\n";
									transaction << "\nFirst name: ";
									transaction << bh1.firstname;
									transaction << "\nLast name: ";
									transaction << bh1.lastname;
									transaction << "\nCreditcard number: ";
									transaction << bh1.creditcard;
									transaction << "\nCreditcard PIN: ";
									transaction << bh1.PIN;
									transaction << "\nBilling address: ";
									transaction << bh1.address;
									transaction << "\nPhone number: ";
									transaction << bh1.telephone;
									transaction << "\nObject bought: House";
									transaction << "\nObject ownership: Owner";
									transaction << "\nHouse bought: Single pen";
									transaction << "\nLocation: ";
									transaction << judet1;
									transaction << "\nTotal paid: ";
									transaction << pricef;
									transaction << "$";
									transaction << "\nUsername: ";
									if (accverif == 2) { transaction << usertry; }
									else { transaction << "-*NOT A USER*- "; }
									transaction << "\n*****************************************************************************************************************************\n";
									transaction.close();
								}
							}
							else
							{
								cout << "\nTransaction cancelled!\n";
							}
							break;
							///////////////////////house 2///////////////////////////
						case 2:
							cout << "\n Do you have another house and want to change it \n";
							cout << "\n 1.Yes \n";
							cout << "\n 2.No \n";
							cin >> choice;
							price = 36000;
							if (accverif == 1)
							{
								d = price * 50 / 100;
							}
							else
							{
								d = price * 30 / 100;
							}

							switch (choice) {
							case 1:

								fee = price * 5 / 100;
								pricef = price - d + fee;
								cout << "\n The total price is: " << pricef << "$\n";
								break;
							case 2:

								fee = price * 5 / 100;
								pricef = price + fee;
								cout << "\n The total price is: " << pricef << "$\n";
								break;
							}

							cout << "\nDo you want to proceed with the transaction? \n";
							cout << "\n 1.Yes \n";
							cout << "\n 2.No \n";
							cin >> t;
							if (t == 1)
							{
								cout << "\nEnter your first name: ";
								cin >> bh2.firstname;
								cout << "\nEnter your last name: ";
								cin >> bh2.lastname;
								do {
									cout << "\nEnter creditcard number(16 digits): ";
									cin >> bh2.creditcard;
								} while (bh2.creditcard.size() != 16);

								do {
									cout << "\nEnter creditcard PIN(4 digits): ";

									while (!(cin >> r)) {
										cin.clear();
										cin.ignore(numeric_limits<streamsize>::max(), '\n');

										cout << "Invalid input!";
										cout << "\nEnter creditcard PIN(4 digits): ";

									}
									bh2.PIN = to_string(r);
								} while (bh2.PIN.length() != 4);

								do {
									cout << "\nEnter billing address(please follow this example: city: Timisoara, str. Aurel Vasile nr.34 ): ";
									getline(cin, bh2.address);
									if (bh2.address.find("city") != string::npos) {
										j = 1;
									}
									else { j = 0; }
									if (bh2.address.find("str") != string::npos) {
										s = 1;
									}
									else { s = 0; }
									if (bh2.address.find("nr") != string::npos) {
										n = 1;
									}
									else { n = 0; }
								} while (s == 0 || n == 0 || j == 0);
								cout << "\nEnter phone number: ";
								
								cin >> bh2.telephone;

								cout << "\nYour payment details have been sent to us an will be reviewed.\n";
								cin.ignore(10, '\n');
								cout << "\nDo you want to complete the payments?\n";
								cout << "\n 1.Yes\n";
								cout << "\n 2.No\n";

								cin >> c;
								if (c == 1)
								{

									cout << "\nThank you for your purchase!\n";

									v = 1;

									transaction.open("Transaction.txt", ios::app);
									transaction << "\n*****************************************************************************************************************************\n";
									transaction << "\nFirst name: ";
									transaction << bh2.firstname;
									transaction << "\nLast name: ";
									transaction << bh2.lastname;
									transaction << "\nCreditcard number: ";
									transaction << bh2.creditcard;
									transaction << "\nCreditcard PIN: ";
									transaction << bh2.PIN;
									transaction << "\nBilling address: ";
									transaction << bh2.address;
									transaction << "\nPhone number: ";
									transaction << bh2.telephone;
									transaction << "\nObject bought: House";
									transaction << "\nObject ownership: Owner";
									transaction << "\nHouse bought: Bing's house";
									transaction << "\nLocation: ";
									transaction << judet1;
									transaction << "\nTotal paid: ";
									transaction << pricef;
									transaction << "$";
									transaction << "\nUsername: ";
									if (accverif == 2) { transaction << usertry; }
									else { transaction << "-*NOT A USER*- "; }

									transaction << "\n*****************************************************************************************************************************\n";
								}
							}
							else
							{
								cout << "\nTransaction cancelled!\n";
							}
							break;
							///////////////////////house 3///////////////////////////
						case 3:
							cout << "\n Do you have another house and want to change it \n";
							cout << "\n 1.Yes \n";
							cout << "\n 2.No \n";
							cin >> choice;
							price = 54000;
							if (accverif == 1)
							{
								d = price * 50 / 100;
							}
							else
							{
								d = price * 30 / 100;
							}


							switch (choice) {
							case 1:

								fee = price * 5 / 100;
								pricef = price - d + fee;
								cout << "\n The total price is: " << pricef << "$\n";
								break;
							case 2:

								fee = price * 5 / 100;
								pricef = price + fee;
								cout << "\n The total price is: " << pricef << "$\n";
								break;
							}

							cout << "\nDo you want to proceed with the transaction? \n";
							cout << "\n 1.Yes \n";
							cout << "\n 2.No \n";
							cin >> t;
							if (t == 1)
							{
								cout << "\nEnter your first name: ";
								cin >> bh3.firstname;
								cout << "\nEnter your last name: ";
								cin >> bh3.lastname;
								do {
									cout << "\nEnter creditcard number(16 digits): ";
									cin >> bh3.creditcard;
								} while (bh3.creditcard.size() != 16);

								do {
									cout << "\nEnter creditcard PIN(4 digits): ";

									while (!(cin >> r)) {
										cin.clear();
										cin.ignore(numeric_limits<streamsize>::max(), '\n');

										cout << "Invalid input!";
										cout << "\nEnter creditcard PIN(4 digits): ";

									}
									bh3.PIN = to_string(r);
								} while (bh3.PIN.length() != 4);

								do {
									cout << "\nEnter billing address(please follow this example: city: Timisoara, str. Aurel Vasile nr.34 ): ";
									getline(cin, bh3.address);
									if (bh3.address.find("city") != string::npos) {
										j = 1;
									}
									else { j = 0; }
									if (bh3.address.find("str") != string::npos) {
										s = 1;
									}
									else { s = 0; }
									if (bh3.address.find("nr") != string::npos) {
										n = 1;
									}
									else { n = 0; }
								} while (s == 0 || n == 0 || j == 0);
								cout << "\nEnter phone number: ";
								
								cin >> bh3.telephone;

								cout << "\nYour payment details have been sent to us an will be reviewed.\n";
								cin.ignore(10, '\n');
								cout << "\nDo you want to complete the payments?\n";
								cout << "\n 1.Yes\n";
								cout << "\n 2.No\n";

								cin >> c;
								if (c == 1)
								{

									cout << "\nThank you for your purchase!\n";

									v = 1;

									transaction.open("Transaction.txt", ios::app);
									transaction << "\n*****************************************************************************************************************************\n";
									transaction << "\nFirst name: ";
									transaction << bh3.firstname;
									transaction << "\nLast name: ";
									transaction << bh3.lastname;
									transaction << "\nCreditcard number: ";
									transaction << bh3.creditcard;
									transaction << "\nCreditcard PIN: ";
									transaction << bh3.PIN;
									transaction << "\nBilling address: ";
									transaction << bh3.address;
									transaction << "\nPhone number: ";
									transaction << bh3.telephone;
									transaction << "\nObject bought: House";
									transaction << "\nObject ownership: Owner";
									transaction << "\nHouse bought: Duplex";
									transaction << "\nLocation: ";
									transaction << judet1;
									transaction << "\nTotal paid: ";
									transaction << pricef;
									transaction << "$";
									transaction << "\nUsername: ";
									if (accverif == 2) { transaction << usertry; }
									else { transaction << "-*NOT A USER*- "; }

									transaction << "\n*****************************************************************************************************************************\n";
								}
							}
							else
							{
								cout << "\nTransaction cancelled!\n";
							}
							break;
							///////////////////////big houses///////////////////////
						case 4:
							cout << "\n For this type of houses please contact us at: \n";
							cout << "\n Email: carefreeluck@yahoo.com \n";
							cout << "\n Telephone: 0730862974 \n";
							break;

						}
						break;


///////////////////If you want to rent houses
					case 2:
						int pricefee;
						cout << "\nChoose the type of house you want by introducing the number of your option: \n";
						cout << "\n 1.Single pen(1 room) (350$/month)  \n";
						cout << "\n 2.Bing's house(2 rooms) (600$/month) \n";
						cout << "\n 3.Duplex (1100$/month) \n";
						cout << "\n 4.Three or more rooms house (Starting from 800$) \n";
						cout << "\n 5.Next \n";

						cin >> number;

						switch (number) {
						case 1:
							///////////////////////house 1///////////////////////////
							price = 350;
							fee = price * 5 / 100;
							pricefee = price + fee;
							pricef = price * 2 + fee;
							cout << "\n The price is: " << pricefee << "$/month(taxes included)";
							cout << "\n But for safety reasons you will have to pay in advance for the next month as well.\n";
							cout << "\n So to start the contract the total price will be: " << pricef << "$\n";
							cout << "\nDo you want to proceed with the transaction? \n";
							cout << "\n 1.Yes \n";
							cout << "\n 2.No \n";
							cin >> t;
							if (t == 1)
							{
								cout << "\nEnter your first name: ";
								cin >> rh1.firstname;
								cout << "\nEnter your last name: ";
								cin >> rh1.lastname;
								do {
									cout << "\nEnter creditcard number(16 digits): ";
									cin >> rh1.creditcard;
								} while (rh1.creditcard.size() != 16);

								do {
									cout << "\nEnter creditcard PIN(4 digits): ";

									while (!(cin >> r)) {
										cin.clear();
										cin.ignore(numeric_limits<streamsize>::max(), '\n');

										cout << "Invalid input!";
										cout << "\nEnter creditcard PIN(4 digits): ";

									}
									rh1.PIN = to_string(r);
								} while (rh1.PIN.length() != 4);

								do {
									cout << "\nEnter billing address(please follow this example: city: Timisoara, str. Aurel Vasile nr.34 ): ";
									getline(cin, rh1.address);
									if (rh1.address.find("city") != string::npos) {
										j = 1;
									}
									else { j = 0; }
									if (rh1.address.find("str") != string::npos) {
										s = 1;
									}
									else { s = 0; }
									if (rh1.address.find("nr") != string::npos) {
										n = 1;
									}
									else { n = 0; }
								} while (s == 0 || n == 0 || j == 0);
								cout << "\nEnter phone number: ";
								
								cin >> rh1.telephone;

								cout << "\nYour payment details have been sent to us an will be reviewed.\n";
								cin.ignore(10, '\n');
								cout << "\nDo you want to complete the payments?\n";
								cout << "\n 1.Yes\n";
								cout << "\n 2.No\n";

								cin >> c;
								if (c == 1)
								{

									cout << "\nThank you for your purchase!\n";

									v = 1;

									transaction.open("Transaction.txt", ios::app);
									transaction << "\n*****************************************************************************************************************************\n";
									transaction << "\nFirst name: ";
									transaction << rh1.firstname;
									transaction << "\nLast name: ";
									transaction << rh1.lastname;
									transaction << "\nCreditcard number: ";
									transaction << rh1.creditcard;
									transaction << "\nCreditcard PIN: ";
									transaction << rh1.PIN;
									transaction << "\nBilling address: ";
									transaction << rh1.address;
									transaction << "\nPhone number: ";
									transaction << rh1.telephone;
									transaction << "\nObject bought: House";
									transaction << "\nObject ownership: Rented";
									transaction << "\nHouse rented: Single pen";
									transaction << "\nLocation: ";
									transaction << judet1;
									transaction << "\nTotal paid: ";
									transaction << pricef;
									transaction << "$";
									transaction << "\nUsername: ";
									if (accverif == 2) { transaction << usertry; }
									else { transaction << "-*NOT A USER*- "; }

									transaction << "\n*****************************************************************************************************************************\n";
								}
							}
							else
							{
								cout << "\nTransaction cancelled!\n";
							}
							break;
							///////////////////////house 2///////////////////////////
						case 2:

							if (t == 1)
							{
								cout << "\nEnter your first name: ";
								cin >> rh2.firstname;
								cout << "\nEnter your last name: ";
								cin >> rh2.lastname;
								do {
									cout << "\nEnter creditcard number(16 digits): ";
									cin >> rh2.creditcard;
								} while (rh2.creditcard.size() != 16);

								do {
									cout << "\nEnter creditcard PIN(4 digits): ";

									while (!(cin >> r)) {
										cin.clear();
										cin.ignore(numeric_limits<streamsize>::max(), '\n');

										cout << "Invalid input!";
										cout << "\nEnter creditcard PIN(4 digits): ";

									}
									rh2.PIN = to_string(r);
								} while (rh2.PIN.length() != 4);

								do {
									cout << "\nEnter billing address(please follow this example: city: Timisoara, str. Aurel Vasile nr.34 ): ";
									getline(cin, rh2.address);
									if (rh2.address.find("city") != string::npos) {
										j = 1;
									}
									else { j = 0; }
									if (rh2.address.find("str") != string::npos) {
										s = 1;
									}
									else { s = 0; }
									if (rh2.address.find("nr") != string::npos) {
										n = 1;
									}
									else { n = 0; }
								} while (s == 0 || n == 0 || j == 0);
								cout << "\nEnter phone number: ";
								
								cin >> rh2.telephone;

								cout << "\nYour payment details have been sent to us an will be reviewed.\n";
								cin.ignore(10, '\n');
								cout << "\nDo you want to complete the payments?\n";
								cout << "\n 1.Yes\n";
								cout << "\n 2.No\n";

								cin >> c;
								if (c == 1)
								{

									cout << "\nThank you for your purchase!\n";

									v = 1;

									transaction.open("Transaction.txt", ios::app);
									transaction << "\n*****************************************************************************************************************************\n";
									transaction << "\nFirst name: ";
									transaction << rh2.firstname;
									transaction << "\nLast name: ";
									transaction << rh2.lastname;
									transaction << "\nCreditcard number: ";
									transaction << rh2.creditcard;
									transaction << "\nCreditcard PIN: ";
									transaction << rh2.PIN;
									transaction << "\nBilling address: ";
									transaction << rh2.address;
									transaction << "\nPhone number: ";
									transaction << rh2.telephone;
									transaction << "\nObject bought: House";
									transaction << "\nObject ownership: Rented";
									transaction << "\nHouse rented: Bing's house";
									transaction << "\nLocation: ";
									transaction << judet1;
									transaction << "\nTotal paid: ";
									transaction << pricef;
									transaction << "$";
									transaction << "\nUsername: ";
									if (accverif == 2) { transaction << usertry; }
									else { transaction << "-*NOT A USER*- "; }

									transaction << "\n*****************************************************************************************************************************\n";
								}
							}
							else
							{
								cout << "\nTransaction cancelled!\n";
							}
							break;
							///////////////////////house 3///////////////////////////
						case 3:

							price = 1100;
							fee = price * 5 / 100;
							pricefee = price + fee;
							pricef = price * 2 + fee;
							cout << "\n The price is: " << pricefee << "$/month(taxes included)";
							cout << "\n But for safety reasons you will have to pay in advance for the next month as well.\n";
							cout << "\n So to start the contract the total price will be: " << pricef << "$\n";
							cout << "\nDo you want to proceed with the transaction? \n";
							cout << "\n 1.Yes \n";
							cout << "\n 2.No \n";
							cin >> t;
							if (t == 1)
							{
								cout << "\nEnter your first name: ";
								cin >> rh3.firstname;
								cout << "\nEnter your last name: ";
								cin >> rh3.lastname;
								do {
									cout << "\nEnter creditcard number(16 digits): ";
									cin >> rh3.creditcard;
								} while (rh3.creditcard.size() != 16);

								do {
									cout << "\nEnter creditcard PIN(4 digits): ";

									while (!(cin >> r)) {
										cin.clear();
										cin.ignore(numeric_limits<streamsize>::max(), '\n');

										cout << "Invalid input!";
										cout << "\nEnter creditcard PIN(4 digits): ";

									}
									rh3.PIN = to_string(r);
								} while (rh3.PIN.length() != 4);

								do {
									cout << "\nEnter billing address(please follow this example: city: Timisoara, str. Aurel Vasile nr.34 ): ";
									getline(cin, rh3.address);
									if (rh3.address.find("city") != string::npos) {
										j = 1;
									}
									else { j = 0; }
									if (rh3.address.find("str") != string::npos) {
										s = 1;
									}
									else { s = 0; }
									if (rh3.address.find("nr") != string::npos) {
										n = 1;
									}
									else { n = 0; }
								} while (s == 0 || n == 0 || j == 0);
								cout << "\nEnter phone number: ";
								
								cin >> rh3.telephone;

								cout << "\nYour payment details have been sent to us an will be reviewed.\n";
								cin.ignore(10, '\n');
								cout << "\nDo you want to complete the payments?\n";
								cout << "\n 1.Yes\n";
								cout << "\n 2.No\n";

								cin >> c;
								if (c == 1)
								{

									cout << "\nThank you for your purchase!\n";

									v = 1;

									transaction.open("Transaction.txt", ios::app);
									transaction << "\n*****************************************************************************************************************************\n";
									transaction << "\nFirst name: ";
									transaction << rh3.firstname;
									transaction << "\nLast name: ";
									transaction << rh3.lastname;
									transaction << "\nCreditcard number: ";
									transaction << rh3.creditcard;
									transaction << "\nCreditcard PIN: ";
									transaction << rh3.PIN;
									transaction << "\nBilling address: ";
									transaction << rh3.address;
									transaction << "\nPhone number: ";
									transaction << rh3.telephone;
									transaction << "\nObject bought: House";
									transaction << "\nObject ownership: Rented";
									transaction << "\nHouse rented: Duplex";
									transaction << "\nLocation: ";
									transaction << judet1;
									transaction << "\nTotal paid: ";
									transaction << pricef;
									transaction << "$";
									transaction << "\nUsername: ";
									if (accverif == 2) { transaction << usertry; }
									else { transaction << "-*NOT A USER*- "; }

									transaction << "\n*****************************************************************************************************************************\n";
								}
							}
							else
							{
								cout << "\nTransaction cancelled!\n";
							}
							break;
							///////////////////////big houses///////////////////////
						case 4:
							cout << "\n For this type of houses please contact us at: \n";
							cout << "\n Email: carefreeluck@yahoo.com \n";
							cout << "\n Telephone: 0730862974 \n";
							break;

						}break;

					}

				}/////////if the district the user enter dosen't exist////////// 
				else
				{
					judete.close();
					cout << "\nThere is no such district!\n";
					cout << "\nDo you want to see a list with the districts?\n";
					cout << "\n 1.Yes\n";
					cout << "\n 2.No\n";

					int l;
					cin >> l;
					if (l == 1)
					{
						cout << "\n Alba \n";
						cout << "\n Arad \n";
						cout << "\n Arges \n";
						cout << "\n Bacau \n";
						cout << "\n Bihor \n";
						cout << "\n BistritaNasaud \n";
						cout << "\n Botosani \n";
						cout << "\n Braila \n";
						cout << "\n Brasov \n";
						cout << "\n Buzau \n";
						cout << "\n Calarasi \n";
						cout << "\n CarasSeverin \n";
						cout << "\n Cluj \n";
						cout << "\n Constanta \n";
						cout << "\n Covasna \n";
						cout << "\n Dambovita \n";
						cout << "\n Dolj \n";
						cout << "\n Galati \n";
						cout << "\n Giurgiu \n";
						cout << "\n Gorj \n";
						cout << "\n Harghita \n";
						cout << "\n Hunedoara \n";
						cout << "\n Ialomita \n";
						cout << "\n Iasi \n";
						cout << "\n Ilfov \n";
						cout << "\n Maramures \n";
						cout << "\n Mehedinti \n";
						cout << "\n Mures \n";
						cout << "\n Neamt \n";
						cout << "\n Olt \n";
						cout << "\n Prahova \n";
						cout << "\n Salaj \n";
						cout << "\n Satu Mare \n";
						cout << "\n Sibiu \n";
						cout << "\n Suceava \n";
						cout << "\n Teleorman \n";
						cout << "\n Timis \n";
						cout << "\n Tulcea \n";
						cout << "\n Valcea \n";
						cout << "\n Vaslui \n";
						cout << "\n Vrancea \n";
					}

				}
			}
		}
	}
		
	 while (bor != 3);
}
