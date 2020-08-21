#pragma once
#include <string>
using  std::string;
class TelPhone
{
	string name;
	string phone;
public:
	explicit TelPhone(const string& n = "", const string& p = "");
	const string& GetName()const;
	const string& GetPhone()const;
	void Print()const;
};
