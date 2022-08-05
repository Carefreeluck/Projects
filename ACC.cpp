#include "house.h"
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <map>


using namespace std;
//checks if the account you entered exists 
void house::account_verif()
{
	string user;
	string pass;
	string parameter;
	string value;
	char ch;
	char passtry[51];
	int i;



	if (have == 2)
	{
		f1.open("f1.txt", ios::in | ios::out);
		if (f1.is_open())
		{

			cout << "\nPlease enter your username:\n";
			cin >> usertry;


			cout << "\nPlease enter your password:\n";

			i = 0;

			do
			{
				ch = _getch();
				passtry[i] = ch;
				if (ch != 27 && ch != 13)
				{
					if (ch != '\b')
					{
						_putch('*');
					}
					else {
						cout << ("\b \b");
					}
				}

				else

					break;

				i++;
			} while (i < 51);
			passtry[i] = '\0';
			pass = passtry;


			i = 51;
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

			parameter = usertry + pass;
			while (getline(f1, user))
			{
				if (user == parameter)
				{


					cout << "\nLogged in succesfully!\n" << endl;

					username = 1;

				}
			}
		}
		f1.close();
		//if account exists 
		if (username == 1)
		{

			int color;
			accverif = 2;
			system("color 0E");
			cout << "\nThis is the premium theme if you want to go back to the normal one you can switch:\n";
			cout << "\n 1.Switch to the normal theme \n";
			cout << "\n 2.Keep the premium theme \n";
			cin >> color;
			switch (color)
			{
			case 1:
				system("color 65");
				break;
			case 2:
				system("color 0E");
				break;
			}

		}
		else
		{
			cout << "\nIncorrect username/password!\n" << endl;
			accverif = 0;
		}
	}
}





