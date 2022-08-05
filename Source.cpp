#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include "House.h"

using namespace std;

/// <summary>
/// I wanted to make the program to be as easy as it can be for the user to navigate (that's why i put so many switches)
/// I didn't put any switches for the districts cuz they are 41 and that's too much unnecessary code (O__O)
/// the program having quite a lot of lines as it stands
/// </summary>
/// <returns></returns>

int main()
{
	system("color 65");

	house obj;
	obj.welcome();
	obj.account_verif();
	obj.houses();
	obj.lands();
	obj.create();
	obj.sn();
	obj.adverts();
	obj.goodbye();
	obj.sna();


	return 0;
}

