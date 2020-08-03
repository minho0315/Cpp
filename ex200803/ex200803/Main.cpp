#include <iostream>
#include <vector>
using namespace std;
int data = 10;

int RetValue()
{
	return ::data;
}
int* RetPointer()
{
	return &::data;
}
int& RetReference()
{
	return ::data;
}
int main()
{
	//RetValue() = 20; X
	//*RetPointer() = 20; O
	RetReference() = 20;

	cout << RetValue() << endl;
	cout << *RetPointer() << endl;
	cout << RetReference() << endl;
}

//#include <iostream>
//#include <vector>
//using namespace std;
//int data = 10;
//
//int RetValue()
//{
//	return ::data;
//}
//int* RetPointer()
//{
//	return &::data;
//}
//int& RetReference()
//{
//	return ::data;
//}
//int main()
//{
//	::data = 20;
//
//	cout << RetValue() << endl;
//	cout << *RetPointer() << endl;
//	cout << RetReference() << endl;
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//int data = 10;
//
//int RetValue()
//{
//	return ::data;
//}
//int* RetPointer()
//{
//	return &::data;
//}
//int& RetReference()
//{
//	return ::data;
//}
//int main()
//{
//	cout << RetValue() << endl;
//	cout << *RetPointer() << endl;
//	cout << RetReference() << endl;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//namespace MyApp_AKJFAJKF
//{
//	void A()
//	{
//		cout << "Hello!" << endl;
//	}
//}
//int main()
//{
//	cout << "Hello!" << endl;
//
//	MyApp_AKJFAJKF::A();
//}

//#include <iostream>
//using std::cout;
//
//int main()
//{
//	cout << "Hello!" << std::endl;
//}


//#include <iostream>
//int main()
//{
//	std::cout << "Hello!" << std::endl;
//}

//#include <iostream> 
//int main()
//{
//	cout << "Hello!" << endl;
//}

//#include <iostream> 
//using namespace std;
//
//namespace AA {
//	int data = 10;
//	void Print()
//	{
//		std::cout << "AA::Print()" << std::endl;
//	}
//	struct Point
//	{
//		int x;
//		int y;
//	};
//}
//using AA::Print;
//
//namespace BB {
//	int data = 100;
//	void Print()
//	{
//		cout << "BB::Print()" << endl;
//	}
//	struct Point
//	{
//		double x;
//		double y;
//		int id;
//	};
//}
//int main()
//{
//	string s = "Hello!";
//	Print(); //AA::Print()
//	BB::Print();
//
//	BB::Point pt = { 2.3, 4.5 , 130 };
//
//	cout << pt.x << "," << pt.y << ":" << pt.id << endl; //std::cout . std::endl
//}

//#include <iostream> 
//using std::cout;
//using std::endl;
//
//namespace AA {
//	int data = 10;
//	void Print()
//	{
//		std::cout << "AA::Print()" << std::endl;
//	}
//	struct Point
//	{
//		int x;
//		int y;
//	};
//}
//using AA::Print;
//
//namespace BB {
//	int data = 100;
//	void Print()
//	{
//		std::cout << "BB::Print()" << std::endl;
//	}
//	struct Point
//	{
//		double x;
//		double y;
//		int id;
//	};
//}
//int main()
//{
//	Print(); //AA::Print()
//	BB::Print();
//
//	BB::Point pt = { 2.3, 4.5 , 130 };
//
//	cout << pt.x << "," << pt.y << ":" << pt.id << endl; //std::cout . std::endl
//}

//#include <iostream> 
//namespace AA {
//	int data = 10;
//	void Print()
//	{
//		std::cout << "AA::Print()" << std::endl;
//	}
//	struct Point
//	{
//		int x;
//		int y;
//	};
//}
//namespace BB {
//	int data = 100;
//	void Print()
//	{
//		std::cout << "BB::Print()" << std::endl;
//	}
//	struct Point
//	{
//		double x;
//		double y;
//		int id;
//	};
//}
//int main()
//{
//	AA::Print();
//	BB::Print();
//
//	BB::Point pt = { 2.3, 4.5 , 130 };
//
//	std::cout << pt.x << "," << pt.y << ":" << pt.id << std::endl;
//}

//#include <iostream> 
//using namespace std;
//namespace AA {
//	int data = 10;
//	void Print()
//	{
//		cout << "AA::Print()" << endl;
//	}
//	struct Point
//	{
//		int x;
//		int y;
//	};
//}
//namespace BB {
//	int data = 100;
//	void Print()
//	{
//		cout << "BB::Print()" << endl;
//	}
//	struct Point
//	{
//		double x;
//		double y;
//		int id;
//	};
//}
//int main()
//{
//	AA::Print();
//	BB::Print();
//
//	BB::Point pt = { 2.3, 4.5 , 130 };
//
//	cout << pt.x << "," << pt.y<< ":" << pt.id << endl;
//}

//#include <iostream> 
//using namespace std;
//namespace AA {
//	int data = 10;
//	void Print()
//	{
//		cout << "AA::Print()" << endl;
//	}
//	struct Point
//	{
//		int x;
//		int y;
//	};
//}
//namespace BB {
//	int data = 100;
//	void Print()
//	{
//		cout << "BB::Print()" << endl;
//	}
//	struct Point
//	{
//		double x;
//		double y;
//		int id;
//	};
//}
//int main()
//{
//	AA::Print();
//	BB::Print();
//}


//#include <iostream> 
//#include <cstring> 
//#include <cstdio> 
//using namespace std;
//
//void Print(int n=1, double d = 0, const char* s = "none")
//{
//	cout << n << ", " << d << ", " << s << endl;
//}
//
//int main()
//{
//	//default parameter value
//	Print();
//	Print(10);
//	Print(10, 5.5);
//	Print(10, 5.5, "Hello!");
//}

//#include <iostream> 
//#include <cstring> 
//#include <cstdio> 
//using namespace std;
//
//void Print(int n, double d=0, const char* s="none")
//{
//	cout << n << ", " << d << ", " << s << endl;
//}
//
//int main()
//{
//	//default parameter value
//	Print(10);
//	Print(10, 5.5);
//	Print(10,5.5,"Hello!");
//}

//#include <iostream> 
//#include <cstring> 
//#include <cstdio> 
//using namespace std;
//
//void Print(char data)
//{
//	cout << "char : " << data << endl;
//}
//void Print(int data)
//{
//	cout << "int : " << data << endl;
//
//}
//void Print(const string& data)
//{
//	cout << "string : " << data << endl;
//
//}
//int main()
//{
//	string str = "Hello!";
//
//	Print(str);
//	Print("ABCDE");
//}

//#include <iostream> 
//#include <cstring> 
//#include <cstdio> 
//using namespace std;
//
//void Print(char data)
//{
//	cout <<"char : " << data << endl;
//}
//void Print(int data)
//{
//	cout << "int : " << data << endl;
//
//}
//void Print(const char* data)
//{
//	cout << "string : " << data << endl;
//
//}
//int main()
//{
//	//function overloading(함수 중복)
//	Print(100);
//	Print("hello!");
//	Print("hi~");
//	Print(10);
//	Print((int)'A');
//}

//#include <iostream> 
//#include <cstring> 
//#include <cstdio> 
//using namespace std;
//
//void Print(char data)
//{
//	printf("char : %c\n", data);
//}
//void Print(int data)
//{
//	printf("int : %d\n", data);
//}
//void Print(const char* s)
//{
//	printf("string : %s\n", s);
//}
//int main()
//{
//	//function overloading(함수 중복)
//	Print(100);
//	Print("hello!");
//	Print("hi~");
//	Print(10);
//	Print((int)'A');
//}

//#include <iostream> 
//#include <cstring> 
//#include <cstdio> 
//using namespace std;
//
//void Print(int data)
//{
//	printf("int : %d\n", data);
//}
//void Print(const char* s)
//{
//	printf("string : %s\n", s);
//}
//int main()
//{
//	//function overloading(함수 중복)
//	Print(100);
//	Print("hello!");
//	Print("hi~");
//	Print(10);
//	Print('A');
//}

//#include <iostream> 
//#include <cstring> 
//#include <cstdio> 
//using namespace std;
//
//int main()
//{
//	char buf[100];
//
//	cout << "문자열 입력: ";
//	cin >> buf;
//
//	char* s = new char[strlen(buf) + 1];
//	strcpy_s(s, strlen(buf) + 1, buf);
//
//	cout << "string : " << s << endl;
//	printf("string : %s\n",s);
//
//	delete[] s;
//}


//#include <iostream> 
//using namespace std;
//
//int main()
//{
//	char buf[100];
//
//	cout << "문자열 입력: ";
//	cin >> buf;
//	cout << "string : " << buf << endl;
//}

//#include <iostream> 
//using namespace std;
//
//int main()
//{
//	int* p = new int(10);
//	cout << *p << endl;
//	delete p;
//
//	int* pa = new int[10]{10,20,30,40,50};
//	for (int i = 0; i < 10; ++i)
//		cout << pa[i] << endl;
//	delete[] pa;
//}


//#include <iostream> 
//using namespace std;
//
//int main()
//{
//	//malloc(), free(); <= C++ 절대 사용X
//	//new, delete      : 단일 heap
//	//new[] , delete[] : 여러 heap
//
//	int* p = new int;
//	*p = 10;
//	cout << *p << endl;
//	delete p;
//
//	int* pa = new int[10];
//	for (int i = 0; i < 10; ++i)
//		pa[i] = (i + 1) * 10;
//	for (int i = 0; i < 10; ++i)
//		cout << pa[i] << endl;
//	delete[] pa;
//}

//#include <iostream> 
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}
//int main()
//{
//	int a = 5;
//	int b = 12;
//
//	cout << a << ", " << b << endl;
//	Swap(a, b);
//	cout << a << ", " << b << endl;
//}

//#include <iostream> 
//using namespace std;
//void Increment(int& rdata)
//{
//	++rdata;
//}
//int main()
//{
//	int n = 10;
//	cout << n << endl;
//
//	Increment(n);
//	cout << n << endl;
//	Increment(n);
//	cout << n << endl;
//}

//#include <iostream> 
//using namespace std;
//void Increment(int* pdata)
//{
//	++* pdata;
//}
//int main()
//{
//	int n = 10;
//	cout << n << endl;
//
//	Increment(&n);
//	cout << n << endl;
//	Increment(&n);
//	cout << n << endl;
//}

//#include <iostream> 
//using namespace std;
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int r = n;
//
//	cout << n << "," << *p << "," << r << endl;
//	cout << &n << "," << &*p << "," << &r << endl;
//}


//#include <iostream> 
//using namespace std;
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int& r;// = n;
//
//	r = n;
//
//	cout << n << "," << *p << "," << r << endl;
//	cout << &n << "," << &*p << "," << &r << endl;
//}

//#include <iostream> 
//using namespace std;
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int& r = n;
//
//	cout << n << "," << *p << "," << r << endl;
//	cout << &n << "," << &*p << "," << &r << endl;
//}


//#include <iostream> //stdio.h
//using namespace std; //std 이름 공간(namespace)
//
//int main()
//{
//	int n = 0;
//
//	cout << "정수 입력:";
//	cin >> n;
//
//	cout << "정수 출력 : " << n << endl;
//}


//#include <iostream> //stdio.h
//using namespace std; //std 이름 공간(namespace)
//
//int main()
//{
//	int n = 10;
//	double d = 5.5;
//
//	//n = (int)d;
//	//n = int(d);
//	n = static_cast<int>(d);
//	cout << n << ',' << d << endl;
//}


//#include <iostream> //stdio.h
//using namespace std; //std 이름 공간(namespace)
//
//int main()
//{
//	int n = 10;
//	int m(10);
//	//int k = { 10 };
//
//	cout << n << ',' << m << ',' << endl; // k << endl;
//}

//#include <iostream> //stdio.h
//using namespace std; //std 이름 공간(namespace)
//
//int main()
//{
//	//cout : ostream 객체
//	// << : ostream(출력스트림) 연산자
//	//endl : '\n'
//	cout << "hello!" << endl; //printf()
//	cout << "hello!" << '\n';
//	cout << 100 << endl;
//	cout << 3.3 << endl;
//	cout << 'A' << endl;
//	//cout << 사용자 객체 << endl; 
//}

//#include <iostream> //stdio.h
//using namespace std; //std 이름 공간(namespace)
//
//int main()
//{
//	//cout : ostream 객체
//	// << : ostream(출력스트림) 연산자
//	//endl : '\n'
//	cout << "hello!" << endl; //printf()
//	cout << "hello!" << '\n';
//	cout << 100 << endl;
//	cout << 3.3 << endl;
//	cout << 'A' << endl;
//	//cout << 사용자 객체 << endl; 
//}

//#include <iostream> //stdio.h
//using namespace std; //std 이름 공간(namespace)
//
//int main()
//{
//	//cout : ostream 객체
//	// << : ostream(출력스트림) 연산자
//	//endl : '\n'
//	cout << "hello!" << endl;
//}