#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int a, b,x;
	cout << "BİLGİLENDİRME:Girmeniz gereken a sayisi b sayisindan büyük olmalıdır..."<<endl;
	cout << "Lutfen bir a sayisi giriniz..: ";
	cin >> a;
	cout << "Lutfen bir b sayisi giriniz..: ";
	cin >> b;
	if (a > b)
	{
		for (x = 0; x < 20; x++)
		{
			cout << endl;
			if (x > a)
			{
				cout << " 1  ";
				for (int i = 0; i < 9; i++)
					cout << "  ";
				for (int i = 0; i < 10; i++)
					cout << "* ";
				cout << endl;
			}
			else if (b <= x && x <= a)
			{
				cout << " 0  ";
				for (int i = 0; i < 3; i++)
					cout << "  ";
				for (int i = 0; i < 6; i++)
					cout << "* ";
				cout << endl;
				//for (int i = 0; i < a; i++)
					//cout << "  ";
			}
			else if (x<b)
			{
				cout << "-1  ";
				for (int i = 0; i < 3; i++)
					cout << "* ";
				//for (int i = 0; i < 20 - b; i++)
					cout <<endl;
			}
			else {}
		}
	}
	
	else
	{
		cout << "a sayisi b sayisindan büyük değildir lütfen yeni 2 sayi giriniz...";
		system("pause");
		system("cls");
		main();
	}

    return 0;
}

