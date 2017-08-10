#include<iostream>
#include<string>
#include<stdio.h>
#include "majorityNumber.h"
#include "Lucas.h"
#include "DigitalRoot.h"
#include "toPrettyString.h"
using namespace std;

void main() {
	majorityNumber mN;
	Lucas lC;
	DigitalRoot dR;
	toPrettyString tPS;
	int chon;
	cout << "Chon chuc nang: " << endl;
	cout << "1: toPrettyString" << endl;
	cout << "2: Majority Number" << endl;
	cout << "3: DigitalRoot" << endl;
	cout << "4: Lucas" << endl;
	cin >> chon;
	switch (chon)
	{
	case 1:
		cout << "toPrettyString" << endl;
		break;
	case 2:
		mN.main();
		break;
	case 3:
		dR.main();
		break;
	case 4:
		lC.main();
		break;
	default:
		cout << "Ban nhap sai" << endl;
		break;
	}


	system("pause");
}