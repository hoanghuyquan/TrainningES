#pragma once
#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
class Lucas
{
public:
	Lucas();
	~Lucas();


	int lucas(int n)
	{
		if (n == 0)
			return 2;
		if (n == 1)
			return 1;
		return lucas(n - 1) + lucas(n - 2);
	}


	void main()
	{
		int n;
		cout << "nhap n: " << endl;
		cin >> n;
		cout << "so lucas thu n la: " << lucas(n) << endl;
		system("pause");

	}

};

