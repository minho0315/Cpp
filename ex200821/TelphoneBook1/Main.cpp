#include <iostream>
#include <conio.h>
#include "Main.h"
#include "TelPhoneBook.h"
using namespace std;

void Main::Menu()
{
	cout << "1. ��ȭ �Է� " << endl;
	cout << "2. ��ȭ ��� " << endl;
	cout << "3. ��ȭ �˻� " << endl;
	cout << "4. ��ȭ ���� " << endl;
	cout << "0. ���α׷�����!! " << endl;
}
int main()
{
	TelPhoneBook tb;

	cout << "TelPhoneBool1..." << endl;
	bool run = true;
	while (run)
	{
		Main::Menu();
		switch (_getch())
		{
		case '1':
			tb.Add();
			break;
		case '2':
			tb.Print();
			break;
		case '3':
			tb.Search();
			break;
		case '4':
			tb.Remove();
			break;
		case '0':
			run = false;
			break;
		}
	}
}