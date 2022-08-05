#include "house.h"
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

using namespace std;
//text art at the end of the program for the normal user
void house :: goodbye()
{

	cout << "\n                     %%%% ";
	cout << "\n                     %%%%-(";
	cout << "\n                   _%%%%%_/                        \\ ' /";
	cout << "\n                 _%%%%%%%%                        - (_) -";
	cout << "\n               _%%%%%%%/ \\%                        / , \\";
	cout << "\n              %%%%%%%%%\\\\ \\_";
	cout << "\n                %%%%%%   \\ \\\\";
	cout << "\n                    )    /\\_/";
	cout << "\n                  /(___. \\";
	cout << "\n                  '----' (";
	cout << "\n                 /       )";
	cout << "\n     ---....____/        (_____ __ _ ___ ___ __ _ _ _____ _ _ ___";
	cout << "\n               /         )---...___ =-= = -_= -=_= _-=_-_ -=- =-_";
	cout << "\n             ,'          (         ```--.._= -_= -_= _-=- -_= _=-";
	cout << "\n          ,-'            )                 ``--._=-_ =-=_-= _-= _";
	cout << "\n          '-._    '-..___(                       ``-._=_-=_- =_-=";
	cout << "\n              ``---....__)                            `-._-=_-_=-";
	cout << "\n                    )|)|                                  `-._=-_";
	cout << "\n                   '-'-.\\_                                    `-.\n";
	cout << "\nThank you for visiting our agency, we hope to see you again soon!";

	cin.ignore(5, '\n');
	cin.get();
}