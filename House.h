#ifndef HOUSE_H
#define HOUSE_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
//i put each function in a different cpp so it would be easier to keep track of them(ex:searching for certain things in the code) as oppose to putting them in the same cpp
class house
{
	struct payments {
		string firstname;
		string lastname;
		string creditcard;
		string PIN;
		string address;
		string telephone;
	}bh1, bh2, bh3, rh1, rh2, rh3,bl1,bl2;//(bh=buy house, rh=rent house, bl=buy land)

public:

	fstream f1;
	fstream f2;
	fstream judete;
	fstream transaction;

	string usertry;
	string judet1;

	int bor;
	int number;
	int choice;
	int pricef;
	int username;
	int password;
	int have;
	int price;

	void houses();
	void lands();
	void adverts();
	void account_verif();
	void welcome();
	void goodbye();
	void create();
	void sn();
	void sna();

protected:

	int d;
	int fee;
	int t;
	int v;
	int vi;
	int accverif;

private:

};


#endif
