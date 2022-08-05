#include "house.h"
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

using namespace std;
//function for buying land
void house::lands()
{
	int acre1 = 4420;
	int acre2 = 3380;
	int acres;
	int acresf;
	int feea;
	int c;
	int s;
	int j;
	int n;
	int r;
	string judet;

	//checks if the district(judetul) exists
	do {
		cout << "\nType in the district you are interested in for buying land: ";

		judete.open("judete.txt", ios::in | ios::out);
		if (judete.is_open())
		{
			while (getline(judete, judet))
			{
				cin.ignore(5, '\n');
				getline(cin, judet1);
					size_t x=judet1.size();
					//every district has the same price exept for Cluj where the price is double :)
				if (judet.find(judet1) != string::npos && x > 3)
				{
					judete.close();
					if (judet1 == "Cluj")
					{
						acre1 *= 2;
						acre2 *= 2;
						cout << "\nChoose the region you prefer: \n";
						cout << "\n 1.Urban : $8,840 per acre + fees \n";
						cout << "\n 2.Rural : $6,760 per acre + fees \n";
						cout << "\n 3.Next \n";
					}
					else {
						cout << "\nChoose the region you prefer: \n";
						cout << "\n 1.Urban : $4,420 per acre + fees \n";
						cout << "\n 2.Rural : $3,380 per acre + fees \n";
						cout << "\n 3.Next \n";
					}
					cin >> number;
					
				///////////////If the user wants to buy land in an urban area///////////////
					
					switch (number) {
					case 1:
						cout << "\nEnter the number of acres you wish to buy \n";
						cin >> acres;
						acresf = acre1 * acres;
						feea = acresf * 5 / 100;
						acresf = acresf + feea;
						if (accverif == 1)
						{
							acresf = acre1 * acres;
							feea = acresf * 5 / 100;
							acresf = acresf + feea;
							acresf /= 2;
						}
						cout << "\nThe price for your purchase is:" << acresf << "$\n";


						cout << "\nDo you want to proceed with the transaction\n";
						cout << "\n 1.Yes\n";
						cout << "\n 2.No\n";
						cin >> t;
						if (t == 1)
						{
							cout << "\nEnter your first name: ";
							cin >> bl1.firstname;
							cout << "\nEnter your last name: ";
							cin >> bl1.lastname;
							do {
								cout << "\nEnter creditcard number(16 digits): ";
								cin >> bl1.creditcard;
							} while (bl1.creditcard.size() != 16);

							do {
								cout << "\nEnter creditcard PIN(4 digits): ";

								while (!(cin >> r)) {
									cin.clear();
									cin.ignore(numeric_limits<streamsize>::max(), '\n');

									cout << "Invalid input!";
									cout << "\nEnter creditcard PIN(4 digits): ";

								}
								bl1.PIN = to_string(r);
							} while (bl1.PIN.length() != 4);

							do {
								cout << "\nEnter billing address(please follow this example: city: Timisoara, str. Aurel Vasile nr.34 ): ";
								getline(cin, bl1.address);
								if (bl1.address.find("city") != string::npos) {
									j = 1;
								}
								else { j = 0; }
								if (bl1.address.find("str") != string::npos) {
									s = 1;
								}
								else { s = 0; }
								if (bl1.address.find("nr") != string::npos) {
									n = 1;
								}
								else { n = 0; }
							} while (s == 0 || n == 0 || j == 0);
							cout << "\nEnter phone number: ";
							
							cin >> bl1.telephone;

							cout << "\nYour payment details have been sent to us an will be reviewed.\n";
							cin.ignore(10, '\n');
							cout << "\nDo you want to complete the payments?\n";
							cout << "\n 1.Yes\n";
							cout << "\n 2.No\n";

							cin >> c;
							if (c == 1)
							{

								cout << "\nThank you for your purchase!\n";

								vi = 2;

								transaction.open("Transaction.txt", ios::app);
								transaction << "\n*****************************************************************************************************************************\n";
								transaction << "\nFirst name: ";
								transaction << bl1.firstname;
								transaction << "\nLast name: ";
								transaction << bl1.lastname;
								transaction << "\nCreditcard number: ";
								transaction << bl1.creditcard;
								transaction << "\nCreditcard PIN: ";
								transaction << bl1.PIN;
								transaction << "\nBilling address: ";
								transaction << bl1.address;
								transaction << "\nPhone number: ";
								transaction << bl1.telephone;
								transaction << "\nLand bought: ";
								transaction << acres;
								transaction << " ac";
								transaction << "\nLocation: ";
								transaction << judet1;
								transaction << "\nLand type: Urban";
								transaction << "\nTotal paid: ";
								transaction << acresf;
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

						///////////////If the user wants to buy land in a rural area///////////////

					case 2:
						cout << "\nEnter the number of acres you wish to buy \n";
						cin >> acres;
						acresf = acre2 * acres;
						feea = acresf * 5 / 100;
						acresf = acresf + feea;
						if (accverif == 1)
						{
							acresf = acre2 * acres;
							feea = acresf * 5 / 100;
							acresf = acresf + feea;
							acresf /= 2;
						}
						cout << "\nThe price for your purchase is:" << acresf << "$\n";

						cout << "\nDo you want to proceed with the transaction\n";
						cout << "\n 1.Yes\n";
						cout << "\n 2.No\n";
						cin >> t;
						if (t == 1)
						{
							cout << "\nEnter your first name: ";
							cin >> bl2.firstname;
							cout << "\nEnter your last name: ";
							cin >> bl2.lastname;
							do {
								cout << "\nEnter creditcard number(16 digits): ";
								cin >> bl2.creditcard;
							} while (bl2.creditcard.size() != 16);

							do {
								cout << "\nEnter creditcard PIN(4 digits): ";

								while (!(cin >> r)) {
									cin.clear();
									cin.ignore(numeric_limits<streamsize>::max(), '\n');

									cout << "Invalid input!";
									cout << "\nEnter creditcard PIN(4 digits): ";

								}
								bl2.PIN = to_string(r);
							} while (bl2.PIN.length() != 4);

							do {
								cout << "\nEnter billing address(please follow this example: city: Timisoara, str. Aurel Vasile nr.34 ): ";
								getline(cin, bl2.address);
								if (bl2.address.find("city") != string::npos) {
									j = 1;
								}
								else { j = 0; }
								if (bl2.address.find("str") != string::npos) {
									s = 1;
								}
								else { s = 0; }
								if (bl2.address.find("nr") != string::npos) {
									n = 1;
								}
								else { n = 0; }
							} while (s == 0 || n == 0 || j == 0);
							cout << "\nEnter phone number: ";
							
							cin >> bl2.telephone;

							cout << "\nYour payment details have been sent to us an will be reviewed.\n";
							cin.ignore(10, '\n');
							cout << "\nDo you want to complete the payments?\n";
							cout << "\n 1.Yes\n";
							cout << "\n 2.No\n";

							cin >> c;
							if (c == 1)
							{

								cout << "\nThank you for your purchase!\n";

								vi = 2;

								transaction.open("Transaction.txt", ios::app);
								transaction << "\n*****************************************************************************************************************************\n";
								transaction << "\nFirst name: ";
								transaction << bl2.firstname;
								transaction << "\nLast name: ";
								transaction << bl2.lastname;
								transaction << "\nCreditcard number: ";
								transaction << bl2.creditcard;
								transaction << "\nCreditcard PIN: ";
								transaction << bl2.PIN;
								transaction << "\nBilling address: ";
								transaction << bl2.address;
								transaction << "\nPhone number: ";
								transaction << bl2.telephone;
								transaction << "\nLand bought: ";
								transaction << acres;
								transaction << " ac";
								transaction << "\nLocation: ";
								transaction << judet1;
								transaction << "\nLand type: Rural";
								transaction << "\nTotal paid: ";
								transaction << acresf;
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
						/////////////////////////////////////////////////////////////////////////////////////////
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
	}while (number != 3);
} 

