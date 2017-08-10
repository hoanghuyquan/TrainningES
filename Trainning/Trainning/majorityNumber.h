#pragma once
#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

class majorityNumber
{
public:
	majorityNumber();
	~majorityNumber();
	int a[1000], x, n, i;



	void nhap() {
		cout << "nhap n phan tu " << endl;
		cin >> n;
		for (i = 0; i < n; i++) {
			cout << "a[" << i << "]" << endl;
			cin >> a[i];
		}
	}
	void inkq() {
		int d = 0;
		for (i = 0; i < n; i++) {
			for (x = i + 1; x < n; x++) {
				if (a[i] == a[x]) {
					d++;
				}
			}
		}
		if (d > n / 2) {
			cout << "phan tu dai dien cua day la: a[" << a[i] << "]" << endl;
		}
		else {
			cout << "day khong co phan tu dai dien" << endl;
		}
	}
	void main() {
		nhap();
		inkq();
		system("pause");
	}
};

