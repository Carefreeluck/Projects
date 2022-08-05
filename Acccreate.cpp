#include "house.h"
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <map>

using namespace std;
//this is the function that creates the account using a map
void house::create()
{
	int cr = 3;
	int co;
	if (v == 1 && vi == 2 && accverif == 0)
	{
		do {

			cout << "\n 1.Create your account\n";
			cout << "\n 2.I don't want to create an account\n";
			cin >> co;
			switch (co) {
			case 1:
				string user;
				string pass;
				f1.open("f1.txt", ios::app);
				cout << "\nPlease enter the username you want(min 8, max 50 characters):\n";
				cin >> user;
				if (user.size() > 50 || user.size() < 8)
				{

					cout << "\n Username must be between 8-50 characters!\n";
				}
				else
				{
					cout << "\nPlease enter the password you want(min 8, max 50 characters):\n";
					cin >> pass;
					if (pass.size() > 50 || pass.size() < 8)
					{
						cout << "\n Password must be between 8-50 characters!\n";
					}
					else
					{

						while (pass.size() != 50)
						{

							char k = '0';
							pass.push_back(k);

						}

						if (pass.size() == 50)
						{

							pass[40] = pass[3];
							pass[41] = pass[2];
							pass[42] = pass[0];
							pass[43] = pass[1];
							pass[44] = pass[4];
							pass[45] = pass[6];
							pass[46] = pass[5];
							pass[47] = pass[7];
							pass[49] = pass[8];
							pass[48] = pass[9];
							pass[39] = pass[10];
							pass[38] = pass[11];
							pass[33] = pass[12];
							pass[32] = pass[13];
							pass[31] = pass[14];
							pass[29] = pass[15];
							pass[28] = pass[16];
							pass[25] = pass[17];
							pass[22] = pass[18];
							pass[27] = pass[19];
							pass[34] = pass[20];
							pass[3] = pass[16];
							pass[2] = pass[18];
							pass[1] = pass[6];
							pass[4] = pass[1];
							pass[5] = pass[4];
							pass[7] = pass[6];
							pass[6] = pass[5];
							pass[8] = pass[7];
							pass[9] = pass[8];
							pass[10] = pass[9];
							pass[12] = pass[10];
							pass[11] = pass[11];
							pass[13] = pass[12];
							pass[14] = pass[13];
							pass[16] = pass[14];
							pass[15] = pass[19];
							pass[16] = pass[18];
							pass[17] = pass[21];
							pass[18] = pass[2];
							pass[20] = pass[3];
							pass[19] = pass[15];
							pass[0] = pass[31];

						}

						map<string, string> Users;
						Users.insert(pair<string, string>(user, pass));
						for (auto pair : Users)
						{
							f1 << pair.first << pair.second << endl;
						}
						f1.close();
						cout << "\nAccount created succesfully\n";
						cr = 1;
					}
				}
			}

		} while (cr != 1);
	}
}