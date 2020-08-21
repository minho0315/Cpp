#pragma once
#include "TelPhone.h"

class TelPhoneBook
{
	TelPhone tpList[100];
	int tpCount;
public:
	TelPhoneBook() :tpCount(0) {}
	void Add();
	void Print()const;
	void Remove();
	void Search()const;
};