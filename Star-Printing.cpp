
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	for (int i = 0; i < 24; i++)
	{
		cout << "* ";
	} //1.Satırdaki yıldızları yazdırır..
	cout << endl;
	for (int i = 0; i < 2; i++) //2. satırda 2 tane yıldız olduğu için döngü 2 defa döner
	{
		cout << "* ";
		if (i == 0) //1. yıldız yazıldıktan sonra SAÜ BİLGİSAYAR yazısını ekrana basar
		{
			cout << "S A Ü   B İ L G İ S A Y A R";
			for (int k = 0; k < 17; k++)
			{
				cout << " ";
			}
		}

	}
	cout << endl;
	for (int i = 0; i < 2; i++)			//3. satırda 2 tane yıldız olduğu için döngü 2 defa döner
	{
		cout << "* ";
		if (i == 0)						// 1 yıldız yazdıktan sonra satır sonuna kadar boşluk bırakır
		{
			for (int k=0;k<22;k++)
			{
				cout << "  ";
			}
		}
	}
	cout << endl;
	for (int i = 0; i < 7; i++) //3. satıra 7 tane yıldız yazdırır
	{
		cout << "* ";
		if (i == 0)  //1 tane yıldız yazdırdıktan sonra 5 boşluk bırakır
		{
			for (int k = 0; k < 5; k++) 
			{
				cout << "  ";
			}
		}
		if (i == 1)  //2. yıldızdan sonra gerektiği kadar boşluk bırakır
		{
			for (int j = 0; j < 10; j++)
			{
				cout << "  ";
			}
		}
		if (i == 2) //3. yıldızdan sonra satırı tamamlaması için döngü devam eder.
		{
			for (int g = 0; g < 2; g++)
			{
				cout << "  ";
			}
		}


	}
	cout << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << "* ";
		if (i == 0)
		{
			for (int k = 0; k < 4; k++)
			{
				cout << "  ";
			}
		}
		if (i == 3)
		{
			for (int j = 0; j < 8; j++)
			{
				cout << "  ";
			}
		}
		if (i == 6)
		{
			for (int g = 0; g < 2; g++)
			{
				cout << "  ";
			}
		}
		if (i == 7)
		{
			cout << "  ";
		}
	}
	cout << endl;
	for (int i = 0; i < 12; i++)
	{
		cout << "* ";
		if (i == 0)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << "  ";
			}
		}
		if (i == 5)
		{
			for (int g = 0; g < 6; g++)
			{
				cout << "  ";
			}
		}
		if (i == 10)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << "  ";
			}
		}
	}
	cout << endl;
	for (int i = 0; i < 16; i++)
	{
		cout << "* ";
		if (i == 0)
		{
			for (int j = 0; j < 2; j++)
			{
				cout << "  ";
			}

		}
		if (i == 7)
		{
			for (int g = 0; g < 4; g++)
			{
				cout << "  ";
			}
		}
		if (i == 14)
		{
			for (int k = 0; k < 2; k++)
			{
				cout << "  ";
			}
		}
	}
	cout << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << "* ";
		if (i == 0)
		{
			cout << "  ";
		}
		if (i == 9)
		{
			for (int k = 0; k < 2; k++)
			{
				cout << "  ";
			}
		}
		if (i == 18)
		{
			cout << "  ";
		}

	}
	cout << endl;
	for (int i = 0; i < 24; i++)
	{
		cout << "* ";
	}
	cout << endl;
	for (int i = 0; i < 2; i++)	{		
		cout << "* ";
		if (i == 0)						
		{
			for (int k = 0; k<22; k++)
			{
				cout << "  ";
			}
		}
	}
	cout << endl;
	for (int i = 0; i < 2; i++) 
	{
		cout << "* ";
		if (i == 0) 
		{
			cout << "M Ü H E N D İ S L İ Ğ İ  B Ö L Ü M Ü";
			for (int k = 0; k < 8; k++)
			{
				cout << " ";
			}
		}

	}
	cout << endl;
	for (int i = 0; i < 2; i++) {
		cout << "* ";
		if (i == 0)
		{
			for (int k = 0; k<22; k++)
			{
				cout << "  ";
			}
		}
	}
	cout << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << "* ";
		if (i == 0)
		{
			for(int k=0;k<5;k++)
			cout << "  ";
		}
		if (i ==1)
		{
			for (int k = 0; k < 2; k++)
				cout << "  ";
		}
		if (i == 4)
		{
			for (int k = 0; k < 5; k++)
			{
				cout << "  ";
			}
		}
		if (i == 5)
		{
			for (int k = 0; k < 5; k++)
			{
				cout << "  ";
			}
		}
		
		
	}
	cout << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << "* ";
		if (i == 0)
		{
			for (int k = 0; k < 4; k++)
			{
				cout << "  ";
			}
		}
		if (i == 3)
		{
			for (int k = 0; k < 2; k++)
				cout << "  ";
		}
		if (i == 4)
		{
			for (int k = 0; k < 5; k++)
			{
				cout << "  ";
			}
		}
		if (i == 7)
		{
			for (int k = 0; k < 4; k++)
				cout << "  ";
		}
	}
	cout << endl;
	for (int i = 0; i < 12; i++)
	{
		cout << "* ";
		if (i == 0)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << "  ";
			}
		}
		if (i == 5)
		{
			for (int g = 0; g < 6; g++)
			{
				cout << "  ";
			}
		}
		if (i == 10)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << "  ";
			}
		}
	}
	cout << endl;
	for (int i = 0; i < 16; i++)
	{
		cout << "* ";
		if (i == 0)
		{
			for (int j = 0; j < 2; j++)
			{
				cout << "  ";
			}

		}
		if (i == 7)
		{
			for (int g = 0; g < 4; g++)
			{
				cout << "  ";
			}
		}
		if (i == 14)
		{
			for (int k = 0; k < 2; k++)
			{
				cout << "  ";
			}
		}
	}
	cout << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << "* ";
		if (i == 0)
		{
			cout << "  ";
		}
		if (i == 9)
		{
			for (int k = 0; k < 2; k++)
			{
				cout << "  ";
			}
		}
		if (i == 18)
		{
			cout << "  ";
		}

	}
	cout << endl;
	for (int i = 0; i < 24; i++)
	{
		cout << "* ";
	}
	cout << endl;
	return 0;
}
	

    


