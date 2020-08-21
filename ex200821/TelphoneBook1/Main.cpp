#include <iostream>
#include <conio.h>
#include "Main.h"
#include "TelPhoneBook.h"
using namespace std;

void Main::Menu()
{
	cout << "1. 전화 입력 " << endl;
	cout << "2. 전화 출력 " << endl;
	cout << "3. 전화 검색 " << endl;
	cout << "4. 전화 삭제 " << endl;
	cout << "0. 프로그램종료!! " << endl;
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