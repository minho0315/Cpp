#include <iostream>
using namespace std;

template <typename T>
class Array
{
	T* buf;
	int sz;
	int capacity;
public:
	Array(int cap = 1000) :buf(NULL), sz(0), capacity(cap)
	{
		buf = new T[capacity];
	}
	Array(const Array& arg) :buf(NULL), sz(arg.sz), capacity(arg.capacity)
	{
		buf = new T[capacity];
		for (int i = 0; i < sz; ++i)
			buf[i] = arg.buf[i];
	}
	~Array()
	{
		delete[] buf;
	}
	void push_back(T data)
	{
		buf[sz++] = data;
	}
	int size()const
	{
		return sz;
	}
	T operator[](int idx)const
	{
		return buf[idx];
	}
	const Array& operator=(const Array& arg)
	{
		sz = arg.sz;
		capacity = arg.capacity;
		delete[] buf;

		buf = new T[capacity];
		for (int i = 0; i < sz; ++i)
			buf[i] = arg.buf[i];

		return *this;
	}
};
int main()
{
	Array<int> arr;

	arr.push_back(10);
	arr.push_back(20);
	arr.push_back(30);
	arr.push_back(40);
	arr.push_back(50);

	for (int i = 0; i < arr.size(); ++i)
		cout << arr[i] << " ";
	cout << endl;

	Array<char> ca;
	ca.push_back('A');
	ca.push_back('B');
	ca.push_back('C');

	for (int i = 0; i < ca.size(); ++i)
		cout << ca[i] << " ";
	cout << endl;

	Array<double> da;
	da.push_back(2.23);
	da.push_back(6.23);

	for (int i = 0; i < da.size(); ++i)
		cout << da[i] << " ";
	cout << endl;

	Array<double> k =da;
	k = da;

	for (int i = 0; i < k.size(); ++i)
		cout << k[i] << " ";
	cout << endl;

}

//#include <iostream>
//using namespace std;
//
//template <typename T>
//class Array
//{
//	T* buf;
//	int sz;
//	int capacity;
//public:
//	Array(int cap = 1000) :buf(NULL), sz(0), capacity(cap)
//	{
//		buf = new T[capacity];
//	}
//	~Array()
//	{
//		delete[] buf;
//	}
//	void push_back(T data)
//	{
//		buf[sz++] = data;
//	}
//	int size()const
//	{
//		return sz;
//	}
//	T operator[](int idx)const
//	{
//		return buf[idx];
//	}
//};
//int main()
//{
//	Array<int> arr;
//
//	arr.push_back(10);
//	arr.push_back(20);
//	arr.push_back(30);
//	arr.push_back(40);
//	arr.push_back(50);
//
//	for (int i = 0; i < arr.size(); ++i)
//		cout << arr[i] << " ";
//	cout << endl;
//
//	Array<char> ca;
//	ca.push_back('A');
//	ca.push_back('B');
//	ca.push_back('C');
//
//	for (int i = 0; i < ca.size(); ++i)
//		cout << ca[i] << " ";
//	cout << endl;
//
//	Array<double> da;
//	da.push_back(2.23);
//	da.push_back(6.23);
//
//	for (int i = 0; i < da.size(); ++i)
//		cout << da[i] << " ";
//	cout << endl;
//
//}

//#include <iostream>
//using namespace std;
//
//class Array
//{
//	int* buf;
//	int sz;
//	int capacity;
//public:
//	Array(int cap = 1000) :buf(NULL), sz(0), capacity(cap)
//	{
//		buf = new int[capacity];
//	}
//	~Array()
//	{
//		delete[] buf;
//	}
//	void push_back(int data)
//	{
//		buf[sz++] = data;
//	}
//	int size()const
//	{
//		return sz;
//	}
//	int operator[](int idx)const
//	{
//		return buf[idx];
//	}
//};
//int main()
//{
//	Array arr;
//
//	arr.push_back(10);
//	arr.push_back(20);
//	arr.push_back(30);
//	arr.push_back(40);
//	arr.push_back(50);
//
//	for (int i = 0; i < arr.size(); ++i)
//		cout << arr[i] << " ";
//	cout << endl;
//}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//template <typename T>
//void PrintArray(T arr[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << arr[i] << " ";
//	cout << endl;
//}
//int main()
//{
//	int a1[5] = { 10,20,30,40,50 };
//	int a2[3] = { 12,17,29 };
//	double b1[4] = { 1.1, 2.2, 3.3 , 4.4 };
//	double b2[2] = { 100.12,300.56 };
//	char ca[5] = { 'A', 'O','K', 'T', 'o' };
//
//	PrintArray<int>(a1, 5);
//	PrintArray<int>(a2, 3);
//	PrintArray<double>(b1, 4);
//	PrintArray<double>(b2, 2);
//	PrintArray(ca, 5);
//}

//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//template <typename T>
//void PrintArray(T arr[], int size)
//{
//	for (int i = 0; i < size ; ++i)
//		cout << arr[i] << " ";
//	cout << endl;
//}
//int main()
//{
//	int a1[5] = { 10,20,30,40,50 };
//	int a2[3] = { 12,17,29 };
//	double b1[4] = { 1.1, 2.2, 3.3 , 4.4 };
//	double b2[2] = { 100.12,300.56 };
//
//	PrintArray<int>(a1, 5);
//	PrintArray<int>(a2, 3);
//	PrintArray<double>(b1, 4);
//	PrintArray<double>(b2, 2);
//}

//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//template <typename T, typename K>
//void Print(T a, K b)
//{
//	cout << a << "," << b << endl;
//}
//int main()
//{
//	Print(10, 20);
//	Print(10, 2.22);
//	Print("ABC", 2.22);
//	Print(100, "ABC");
//}

//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//template <typename TT>
//void Swap(TT& a, TT& b)
//{
//	TT t = a;
//	a = b;
//	b = t;
//}
//template <typename T>
//void Print(T a,T b)
//{
//	cout << a << "," << b << endl;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	double d = 5.5;
//	double e = 7.7;
//
//	Swap(a, b);
//	Swap(d, e);
//
//	Print(a, b);
//	Print(d, e);
//}

//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//template <typename TT>
//void Swap(TT& a, TT& b)
//{
//	TT t = a;
//	a = b;
//	b = t;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	double d = 5.5;
//	double e = 7.7;
//
//	Swap(a, b);
//	Swap(d, e);
//
//	cout << a << "," << b << endl;
//	cout << d << "," << e << endl;
//}

//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//template <typename T>
//void Print(T data) {
//	cout << typeid(T).name() << ":" << data << endl;
//}
////
//int main()
//{
//	Print<int>(10); //10
//	Print<double>(3.3); // 3.3
//	Print<const char*>("ABC"); // ABC
//	Print<char>('A'); // ABC
//	Print<int>('A'); // ABC
//}

//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//template <typename T>
//void Print(T data) {
//	cout << typeid(T).name() << ":" << data << endl;
//}
////
//int main()
//{
//	Print<int>(10); //10
//	Print<double>(3.3); // 3.3
//	Print<const char*>("ABC"); // ABC
//	Print<char>('A'); // ABC
//	Print<int>('A'); // ABC
//}

//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//template <typename T>
//void Print(T data) {
//	cout << typeid(T).name() << ":" << data << endl;
//}
////
//int main()
//{
//	// 함수 중복...
//	Print(10); // 10
//	Print(3.3); // 3.3
//	Print("ABC"); // ABC
//	Print('A'); // ABC
//}

//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//template <typename T>
//void Print(T data) {
//	cout <<typeid(T).name()<< ":"<< data << endl;
//}
//int main()
//{
//	// 함수 중복...
//	Print(10); // 10
//	Print(3.3); // 3.3
//	Print('A'); // ABC
//}

//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//template <typename T>
//void Print(T data) {
//	cout << data << endl;
//}
//int main()
//{
//	// 함수 중복...
//	Print(10); // 10
//	Print(3.3); // 3.3
//	Print("ABC"); // ABC
//}

//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//void Print(int data) {
//	cout << data << endl;
//}
//void Print(double data) {
//	cout << data << endl;
//}
//void Print(const char* data) {
//	cout << data << endl;
//}
//int main()
//{
//	// 함수 중복...
//	Print(10);
//	Print(3.3);
//	Print("ABC");
//}

//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//struct Pred
//{
//	void operator()()
//	{
//		cout << "Pred::operator()( ) : " << endl;
//	}
//	void operator()(int n)
//	{
//		cout << "Pred::operator()(int ) : " << n << endl;
//	}
//	void operator()(const char* s)
//	{
//		cout << "Pred::operator()(c c*) : " << s << endl;
//	}
//	int operator()(int a, int b)
//	{
//		if (a > b)
//			return 1;
//		else if (a < b)
//			return -1;
//		else
//			return 0;
//	}
//	bool operator()(const char* s1, const char* s2)
//	{
//		//return strcmp(s1, s2) == 0;
//		return string(s1) == string(s2);
//	}
//};
//
//int main()
//{
//	Pred f;
//
//	f();
//	f(10);
//	f("Hello!");
//	cout << f(10, 20) << endl;
//	if ( f("ABC", "ABC") )
//		cout << "true" << endl;
//	else
//		cout << "false" << endl;
//}

//#include <iostream>
//using namespace std;
//
//struct Pred
//{
//	void operator()(int n)
//	{
//		cout << "Pred::operator()(int ) : " << n << endl;
//	}
//};
//
//int main()
//{
//	Pred f;
//
//	f(10);
//}

//#include <iostream>
//using namespace std;
//
//class Pred
//{
//public:
//	void operator()(int n)
//	{
//		cout << "Pred::operator()(int ) : " << n << endl;
//	}
//};
//void f(int n)
//{
//	cout << "f(int n) : " << n << endl;
//}
//int main()
//{
//	Pred f;
//
//	f(10);
//	::f(10);
//}

//#include <iostream>
//using namespace std;
//
//class Pred
//{
//public:
//	void operator()(int n)
//	{
//		cout << "Pred::operator()(int ) : " << n << endl;
//	}
//};
//void f(int n)
//{
//	cout << "f(int n) : " << n << endl;
//}
//int main()
//{
//	Pred f;
//
//	f(10);
//	::f(10);
//}

//#include <iostream>
//using namespace std;
//
//class Pred
//{
//public:
//	void operator()(int n)
//	{
//		cout << "Pred::operator()(int ) : " << n << endl;
//	}
//};
//int main()
//{
//	Pred f;
//	f(10);
//	f.operator()(10);
//}

//#include <iostream>
//using namespace std;
//
//void f(int n)
//{
//	cout << "f(int n): " << n << endl;
//}
//int main()
//{
//	f(10);
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) {}
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	int& operator[](int idx) { return idx == 0 ? x : y; }
//
//	void Print()const { cout << x << ',' << y << endl; }
//};
//int main()
//{
//	Point pt1(2, 3);
//
//	pt1[0] = 4;
//	pt1[1] = 5;
//	pt1.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) {}
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	int operator[](int idx)const { return idx == 0 ? x : y; }
//
//	void Print()const { cout << x << ',' << y << endl; }
//};
//int main()
//{
//	Point pt1(2, 3);
//
//	pt1.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x= 0, int y = 0):x(x),y(y){}
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	int operator[](int idx)const { return idx == 0 ? x : y; }
//};
//int main()
//{
//	Point pt1(2, 3);
//
//	cout << pt1.GetX() << ',' << pt1.GetY() << endl; // 2,3
//	cout << pt1[0] << ',' << pt1[1] << endl;
//	cout << pt1.operator[](0) << ',' << pt1.operator[](1) << endl;
//}