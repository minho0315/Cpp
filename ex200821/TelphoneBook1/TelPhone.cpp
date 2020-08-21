#include <iostream>
#include "TelPhone.h"
using std::cout;

TelPhone::TelPhone(const string& n, const string& p) :name(n), phone(p) {}
const string& TelPhone::GetName()const { return name; }
const string& TelPhone::GetPhone()const { return phone; }
void TelPhone::Print()const { cout << "name: " << name << " , " << "phone: " << phone; }