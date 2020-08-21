#include <iostream>
#include "TelPhoneBook.h"
using namespace std;

//TelPhoneBook::TelPhoneBook() :tpCount(0) {}
void TelPhoneBook::Add()
{
	string name;
	string phone;

	cout << "이름 입력:";
	cin >> name;
	cout << "전화 입력:";
	cin >> phone;

	tpList[tpCount++] = TelPhone(name, phone);
	tpList[tpCount - 1].Print(); cout << ": 정보 추가" << endl;
}
void TelPhoneBook::Print()const
{
	for (int i = 0; i < tpCount; ++i)
	{
		cout << "[" << i << "]:";
		tpList[i].Print(); cout << endl;
	}
}
void TelPhoneBook::Remove()
{
	string name;

	cout << "삭제할 이름 입력:";
	cin >> name;

	for (int i = 0; i < tpCount; ++i)
	{
		if (name == tpList[i].GetName())
		{
			for (int j = i; j < tpCount - 1; ++j)
				tpList[j] = tpList[j + 1];
			--tpCount;
			break;
		}
	}
}
void TelPhoneBook::Search()const
{
	string name;

	cout << "검색할 이름 입력:";
	cin >> name;

	for (int i = 0; i < tpCount; ++i)
	{
		if (name == tpList[i].GetName())
		{
			cout << "찾은 원소 : " << i << " : ";
			tpList[i].Print(); cout << endl;
			break;
		}
	}
}