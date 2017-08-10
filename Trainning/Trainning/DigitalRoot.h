#pragma once
#include <iostream>
using namespace std;
class DigitalRoot
{
public:
	DigitalRoot();
	~DigitalRoot();
	void main() {
		unsigned long long cc = 0;
		cout << "nhap so nguyen duong n: " << endl;
		cin >> cc;
		while (cc != 0) {
			unsigned long long sum = 0;
			while (cc > 0) {
				sum += cc % 10;
				cc = cc / 10;
				if (cc == 0 && sum > 9) { cc = sum; sum = 0; }
			}
			cout << "Digital Root cua n la: " << endl;
			cout << sum;
			cin >> cc;
			cout << endl;
		}
	}
};

