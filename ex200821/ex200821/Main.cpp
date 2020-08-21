#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	//POINT spt = { 0,1 };
	//POINT ept = { 50,57 };

	//long data = MAKELONG(MAKEWORD(spt.x, spt.y), MAKEWORD(ept.x, ept.y));

	//cout << hex << data << dec << endl;

	//char* pc = (char*)&data;
	long data = 0x44434341;
	char* pc = reinterpret_cast<char*>(&data);

	cout << (int)pc[0] << endl;
	cout << (int)pc[1] << endl;
	cout << (int)pc[2] << endl;
	cout << (int)pc[3] << endl;
	
	//cout << (int)LOBYTE(LOWORD(data)) << endl;
	//cout << (int)HIBYTE(LOWORD(data)) << endl;
	//cout << (int)LOBYTE(HIWORD(data)) << endl;
	//cout << (int)HIBYTE(HIWORD(data)) << endl;
}

//#include <iostream>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	POINT spt = { 0,1 };
//	POINT ept = { 50,57 };
//	    
//	long data = MAKELONG(MAKEWORD(spt.x, spt.y), MAKEWORD(ept.x, ept.y));
//
//	cout << hex << data << dec <<  endl;
//
//	//char* pc = (char*)&data;
//	char* pc = reinterpret_cast<char*>(&data);
//	cout << (int)pc[0] << endl;
//	cout << (int)pc[1] << endl;
//	cout << (int)pc[2] << endl;
//	cout << (int)pc[3] << endl;
//
//	cout << (int)LOBYTE(LOWORD(data)) << endl;
//	cout << (int)HIBYTE(LOWORD(data)) << endl;
//	cout << (int)LOBYTE(HIWORD(data)) << endl;
//	cout << (int)HIBYTE(HIWORD(data)) << endl;
//}

//#include <iostream>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//
//	long data = MAKELONG(MAKEWORD(0, 1), MAKEWORD(100, 102));
//	
//	cout << hex << data << endl;
//}

//#include <iostream>
//using namespace std;
//class Test
//{
//public:
//	void func()
//	{
//		cout << "Test::func() " << endl;
//	}
//};
//int main()
//{
//	int n = 100;
//	const int* pn = &n;
//
//	*(int*)pn = 200;
//	*const_cast<int*>(pn) = 200;
//	cout << n << ", " << *pn << endl;
//	
//	Test t;
//	const Test* pt = &t;
//
//	((Test*)pt)->func();
//	const_cast<Test*>(pt)->func();
//}

//#include <iostream>
//using namespace std;
//
//class A
//{
//public:
//	void PrintA() { cout << "class A" << endl; }
//	virtual void Print()const = 0;
//};
//class B1 : public A
//{
//	int data;
//public:
//	B1():data(0) { }
//	void func_B1()const { cout << "B1: " << data << endl; }
//	void Print()const { cout << "class B1" << endl; }
//};
//class B2 : public A
//{
//	string data;
//public:
//	B2() :data("Hello!") {}
//	void func_B2()const { cout << "B2: " << data << endl; }
//	void Print()const { cout << "class B2" << endl; }
//};
//int main()
//{
//	B1 b1;
//	B2 b2;
//
//	A* pa = NULL;
//
//	pa = &b1;
//	pa->PrintA();
//	pa->Print();
//	((B1*)pa)->func_B1();
//	static_cast<B1*>(pa)->func_B1();
//
//	pa = &b2;
//	pa->PrintA();
//	pa->Print();
//	((B2*)pa)->func_B2();
//	static_cast<B2*>(pa)->func_B2();
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n = 10;
//	double d = 5.5;
//
//	//n = (int)d;
//	n = static_cast<int>(d);
//	cout << n << endl;
//}

//#include <iostream>
//#include <conio.h>
//
//using namespace std;
//
//class TelPhone
//{
//	string name;
//	string phone;
//public:
//	explicit TelPhone(const string& n = "", const string& p = "") :name(n), phone(p) {}
//	const string& GetName()const { return name; }
//	const string& GetPhone()const { return phone; }
//	void Print()const { cout << "name: " << name << " , " << "phone: " << phone; }
//};
//class TelPhoneBook
//{
//	TelPhone tpList[100];
//	int tpCount;
//public:
//	TelPhoneBook() :tpCount(0) {}
//	void Add()
//	{
//		string name;
//		string phone;
//
//		cout << "이름 입력:";
//		cin >> name;
//		cout << "전화 입력:";
//		cin >> phone;
//
//		tpList[tpCount++] = TelPhone(name, phone);
//		tpList[tpCount - 1].Print(); cout << ": 정보 추가" << endl;
//	}
//	void Print()const
//	{
//		for (int i = 0; i < tpCount; ++i)
//		{
//			cout << "[" << i << "]:";
//			tpList[i].Print(); cout << endl;
//		}
//	}
//	void Remove()
//	{
//		string name;
//
//		cout << "삭제할 이름 입력:";
//		cin >> name;
//
//		for (int i = 0; i < tpCount; ++i)
//		{
//			if (name == tpList[i].GetName())
//			{
//				for (int j = i; j < tpCount - 1; ++j)
//					tpList[j] = tpList[j + 1];
//				--tpCount;
//				break;
//			}
//		}
//	}
//	void Search()const
//	{
//		string name;
//
//		cout << "검색할 이름 입력:";
//		cin >> name;
//
//		for (int i = 0; i < tpCount; ++i)
//		{
//			if (name == tpList[i].GetName())
//			{
//				cout << "찾은 원소 : " << i << " : ";
//				tpList[i].Print(); cout << endl;
//				break;
//			}
//		}
//	}
//};
//void Menu()
//{
//	cout << "1. 전화 입력 " << endl;
//	cout << "2. 전화 출력 " << endl;
//	cout << "3. 전화 검색 " << endl;
//	cout << "4. 전화 삭제 " << endl;
//	cout << "0. 프로그램종료!! " << endl;
//}
//int main()
//{
//	TelPhoneBook tb;
//
//	bool run = true;
//	while (run)
//	{
//		Menu();
//		switch (_getch())
//		{
//		case '1':
//			tb.Add();
//			break;
//		case '2':
//			tb.Print();
//			break;
//		case '3':
//			tb.Search();
//			break;
//		case '4':
//			tb.Remove();
//			break;
//		case '0':
//			run = false;
//			break;
//		}
//	}
//}

//#include <iostream>
//#include <conio.h>
//
//using namespace std;
//
//class TelPhone
//{
//	string name;
//	string phone;
//public:
//	explicit TelPhone(const string& n = "", const string& p = "") :name(n), phone(p) {}
//	const string& GetName()const { return name; }
//	const string& GetPhone()const { return phone; }
//	void Print()const { cout << "name: " << name << " , " << "phone: " << phone; }
//};
//class TelPhoneBook
//{
//	TelPhone tpList[100];
//	int tpCount;
//public:
//	TelPhoneBook() :tpCount(0) {}
//	void Add()
//	{
//		string name;
//		string phone;
//
//		cout << "이름 입력:";
//		cin >> name;
//		cout << "전화 입력:";
//		cin >> phone;
//
//		tpList[tpCount++] = TelPhone(name, phone);
//		tpList[tpCount - 1].Print(); cout << ": 정보 추가" << endl;
//	}
//	void Print()const
//	{
//		for (int i = 0; i < tpCount; ++i)
//		{
//			cout << "[" << i << "]:";
//			tpList[i].Print(); cout << endl;
//		}
//	}
//	void Remove()
//	{
//		string name;
//
//		cout << "삭제할 이름 입력:";
//		cin >> name;
//
//		for (int i = 0; i < tpCount; ++i)
//		{
//			if (name == tpList[i].GetName())
//			{
//				for (int j = i; j < tpCount - 1; ++i)
//					tpList[j] = tpList[j + 1];
//				--tpCount;
//				break;
//			}
//		}
//	}
//	void Search()const
//	{
//		string name;
//
//		cout << "검색할 이름 입력:";
//		cin >> name;
//
//		for (int i = 0; i < tpCount; ++i)
//		{
//			if (name == tpList[i].GetName())
//			{
//				cout << "찾은 원소 : " << i << " : ";
//				tpList[i].Print(); cout << endl;
//				break;
//			}
//		}
//	}
//};
//void Menu()
//{
//	cout << "1. 전화 입력 " << endl;
//	cout << "2. 전화 출력 " << endl;
//	cout << "3. 전화 검색 " << endl;
//	cout << "4. 전화 삭제 " << endl;
//	cout << "0. 프로그램종료!! " << endl;
//}
//int main()
//{
//	bool run = true;
//	while (run)
//	{
//		Menu();
//		switch (_getch())
//		{
//		case '1':
//			break;
//		case '2':
//			break;
//		case '3':
//			break;
//		case '4':
//			break;
//		case '0':
//			run = false;
//			break;
//		}
//	}
//}

//#include <iostream>
//using namespace std;
//
//class TelPhone
//{
//	string name;
//	string phone;
//public:
//	explicit TelPhone(const string& n = "", const string& p = "") :name(n), phone(p) {}
//	const string& GetName()const { return name; }
//	const string& GetPhone()const { return phone; }
//	void Print()const { cout << "name: " << name << " , " << "phone: " << phone; }
//};
//class TelPhoneBook
//{
//	TelPhone tpList[100];
//	int tpCount;
//public:
//	TelPhoneBook() :tpCount(0) {}
//	void Add()
//	{
//		string name;
//		string phone;
//
//		cout << "이름 입력:";
//		cin >> name;
//		cout << "전화 입력:";
//		cin >> phone;
//
//		tpList[tpCount++] = TelPhone(name, phone);
//		tpList[tpCount - 1].Print(); cout << ": 정보 추가" << endl;
//	}
//	void Print()const
//	{
//		for (int i = 0; i < tpCount; ++i)
//		{
//			cout << "[" << i << "]:";
//			tpList[i].Print(); cout << endl;
//		}
//	}
//	void Remove()
//	{
//		string name;
//
//		cout << "삭제할 이름 입력:";
//		cin >> name;
//
//		for (int i = 0; i < tpCount; ++i)
//		{
//			if (name == tpList[i].GetName())
//			{
//				for (int j = i; j < tpCount - 1; ++i)
//					tpList[j] = tpList[j + 1];
//				--tpCount;
//				break;
//			}
//		}
//	}
//	void Search()const
//	{
//		string name;
//
//		cout << "검색할 이름 입력:";
//		cin >> name;
//
//		for (int i = 0; i < tpCount; ++i)
//		{
//			if (name == tpList[i].GetName())
//			{
//				cout << "찾은 원소 : " << i << " : ";
//				tpList[i].Print(); cout << endl;
//				break;
//			}
//		}
//	}
//};
//int main()
//{
//	TelPhoneBook tb;
//	tb.Add();
//	tb.Add();
//	tb.Add();
//
//	tb.Print();
//
//	tb.Remove();
//	tb.Search();
//
//	TelPhone tp("홍길동", "010-1234-6555");
//	tp.Print(); cout << endl;
//}

//#include <iostream>
//using namespace std;
//
//class TelPhone
//{
//	string name;
//	string phone;
//public:
//	explicit TelPhone(const string& n = "", const string& p = "") :name(n), phone(p) {}
//	const string& GetName()const { return name; }
//	const string& GetPhone()const { return phone; }
//	void Print()const { cout << "name: " << name << " , " << "phone: " << phone; }
//};
//class TelPhoneBook
//{
//	TelPhone tpList[100];
//	int tpCount;
//public:
//	TelPhoneBook() :tpCount(0) {}
//	void Add()
//	{
//		string name;
//		string phone;
//
//		cout << "이름 입력:";
//		cin >> name;
//		cout << "전화 입력:";
//		cin >> phone;
//
//		tpList[tpCount++] = TelPhone(name, phone);
//		tpList[tpCount - 1].Print(); cout << ": 정보 추가" << endl;
//	}
//	void Print()const
//	{
//		for (int i = 0; i < tpCount; ++i)
//		{
//			cout << "[" << i << "]:";
//			tpList[i].Print(); cout << endl;
//		}
//	}
//	void Remove()
//	{
//		cout << "TB::Remove()" << endl;
//	}
//	void Search()const
//	{
//		cout << "TB::Search()" << endl;
//	}
//};
//int main()
//{
//	TelPhoneBook tb;
//	tb.Add();
//	tb.Add();
//	tb.Add();
//
//	tb.Print();
//
//	tb.Remove();
//	tb.Search();
//
//	TelPhone tp("홍길동", "010-1234-6555");
//	tp.Print(); cout << endl;
//}

//#include <iostream>
//using namespace std;
//
//class TelPhone
//{
//	string name;
//	string phone;
//public:
//	explicit TelPhone(const string& n = "", const string& p = "") :name(n), phone(p) {}
//	const string& GetName()const { return name; }
//	const string& GetPhone()const { return phone; }
//	void Print()const { cout << "name: " << name << " , " << "phone: " << phone; }
//};
//class TelPhoneBook
//{
//	TelPhone tpList[100];
//	int tpCount;
//public:
//	TelPhoneBook() :tpCount(0) {}
//	void Add()
//	{
//		string name;
//		string phone;
//
//		cout << "이름 입력:";
//		cin >> name;
//		cout << "전화 입력:";
//		cin >> phone;
//
//		tpList[tpCount++] = TelPhone(name, phone);
//		tpList[tpCount - 1].Print(); cout << ": 정보 추가" << endl;
//	}
//	void Print()const
//	{
//		cout << "TB::Print()" << endl;
//	}
//	void Remove()
//	{
//		cout << "TB::Remove()" << endl;
//	}
//	void Search()const
//	{
//		cout << "TB::Search()" << endl;
//	}
//};
//int main()
//{
//	TelPhoneBook tb;
//	tb.Add();
//	tb.Add();
//	tb.Add();
//
//	tb.Print();
//
//	tb.Remove();
//	tb.Search();
//
//	TelPhone tp("홍길동", "010-1234-6555");
//	tp.Print(); cout << endl;
//}

//#include <iostream>
//using namespace std;
//
//class TelPhone
//{
//	string name;
//	string phone;
//public:
//	explicit TelPhone(const string& n = "", const string& p = "") :name(n), phone(p) {}
//	const string& GetName()const { return name; }
//	const string& GetPhone()const { return phone; }
//	void Print()const { cout << "name: " << name << " , " << "phone: " << phone; }
//};
//class TelPhoneBook
//{
//	TelPhone tpList[1000];
//	int tpCount;
//public:
//	TelPhoneBook():tpCount(0){}
//	void Add()
//	{
//		cout << "TB::Add()" << endl;
//	}
//	void Print()const
//	{
//		cout << "TB::Print()" << endl;
//	}
//	void Remove()
//	{
//		cout << "TB::Remove()" << endl;
//	}
//	void Search()const
//	{
//		cout << "TB::Search()" << endl;
//	}
//};
//int main()
//{
//	TelPhoneBook tb;
//	tb.Add();
//	tb.Add();
//	tb.Add();
//
//	tb.Print();
//
//	tb.Remove();
//	tb.Search();
//
//	TelPhone tp("홍길동", "010-1234-6555");
//	tp.Print(); cout << endl;
//}

//#include <iostream>
//using namespace std;
//
//class TelPhone
//{
//	string name;
//	string phone;
//public:
//	explicit TelPhone(const string& n = "", const string& p = "") :name(n), phone(p) {}
//	const string& GetName()const { return name; }
//	const string& GetPhone()const { return phone; }
//	void Print()const { cout << "name: " << name << " , " << "phone: " << phone; }
//};
//class TelPhoneBook
//{
//public:
//	void Add()
//	{
//		cout << "TB::Add()" << endl;
//	}
//	void Print()const
//	{
//		cout << "TB::Print()" << endl;
//	}
//	void Remove()
//	{
//		cout << "TB::Remove()" << endl;
//	}
//	void Search()const
//	{
//		cout << "TB::Search()" << endl;
//	}
//};
//int main()
//{
//	TelPhoneBook tb;
//	tb.Add();
//	tb.Add();
//	tb.Add();
//
//	tb.Print();
//
//	tb.Remove();
//	tb.Search();
//
//	TelPhone tp("홍길동", "010-1234-6555");
//	tp.Print(); cout << endl;
//}

//#include <iostream>
//using namespace std;
//
//class TelPhoneBook 
//{
//public:
//	void Add()
//	{
//		cout << "TB::Add()" << endl;
//	}
//	void Print()const
//	{
//		cout << "TB::Print()" << endl;
//	}
//	void Remove()
//	{
//		cout << "TB::Remove()" << endl;
//	}
//	void Search()const
//	{
//		cout << "TB::Search()" << endl;
//	}
//
//};
//int main() 
//{
//	TelPhoneBook tb;
//
//	tb.Add();
//	tb.Add();
//	tb.Add();
//
//	tb.Print();
//
//	tb.Remove();
//	tb.Search();
//}