#include <iostream>
#include <exception>
using namespace std;


//////////////////////////server/////////////////////////////////
//class Exception
//{
//public:
//	virtual const char* what() const = 0;
//};
class RangeException : public exception
{
	int upper = 999;
	int lower = 0;
	int idx;
public:
	RangeException(int index = 0) :idx(index)
	{
	}
	int GetUpper()const { return upper; }
	int GetLower()const { return upper; }
	int GetIndex()const { return idx; }
	const char* what() const
	{
		return "RangeException";
	}
};
class SizeException : public exception
{
	int size;
public:
	SizeException(int sz = 0) :size(sz) {}
	const char* what()const
	{
		return "SizeException";
	}
};
void f1(int idx)
{
	if (0 <= idx && idx < 1000)
		cout << "f1()" << endl;
	else
		throw RangeException(idx);
}
void f2(int size)
{
	if (size < 1000000) {
		cout << "f2()" << endl;
	}
	else
		throw SizeException(size);
	cout << "f2() post" << endl;

}
void f3()
{
	cout << "f3()" << endl;

}
///////////////////////////client//////////////////////////////
int main()
{
	try {
		f1(-5);
		f2(500000000);
		f3();
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
		if (typeid(e) == typeid(RangeException))
		{
			const RangeException& re = static_cast<RangeException&>(e);
			cout << re.GetLower() << "~" << re.GetUpper() << " : index " << re.GetIndex() << endl;
		}
	}
	catch (...)
	{
		cout << "Exception~~" << endl;
	}
	//finally
	//{
	//	// 무조건 실행~!
	//}
}

//#include <iostream>
//#include <exception>
//using namespace std;
//
//
////////////////////////////server/////////////////////////////////
////class Exception
////{
////public:
////	virtual const char* what() const = 0;
////};
//class RangeException : public exception
//{
//	int upper = 999;
//	int lower = 0;
//	int idx;
//public:
//	RangeException(int index = 0) :idx(index)
//	{
//	}
//	int GetUpper()const { return upper; }
//	int GetLower()const { return upper; }
//	int GetIndex()const { return idx; }
//	const char* what() const
//	{
//		return "RangeException";
//	}
//};
//class SizeException : public exception
//{
//	int size;
//public:
//	SizeException(int sz = 0) :size(sz) {}
//	const char* what()const
//	{
//		return "SizeException";
//	}
//};
//void f1(int idx)
//{
//	if (0 <= idx && idx < 1000)
//		cout << "f1()" << endl;
//	else
//		throw RangeException(idx);
//}
//void f2(int size)
//{
//	if (size < 1000000) {
//		cout << "f2()" << endl;
//	}
//	else
//		throw SizeException(size);
//	cout << "f2() post" << endl;
//
//}
//void f3()
//{
//	cout << "f3()" << endl;
//
//}
/////////////////////////////client//////////////////////////////
//int main()
//{
//	try {
//		f1(-5);
//		f2(500000000);
//		f3();
//	}
//	catch (exception& e)
//	{
//		cout << e.what() << endl;
//		if (typeid(e) == typeid(RangeException))
//		{
//			const RangeException& re = static_cast<RangeException&>(e);
//			cout << re.GetLower() << "~" << re.GetUpper() << " : index " << re.GetIndex() << endl;
//		}
//	}
//	catch (...)
//	{
//		cout << "Exception~~" << endl;
//	}
//}

//#include <iostream>
//using namespace std;
//
//
////////////////////////////server/////////////////////////////////
//class Exception
//{
//public:
//	virtual const char* what() const = 0;
//};
//class RangeException : public Exception
//{
//	int upper = 999;
//	int lower = 0;
//	int idx;
//public:
//	RangeException(int index = 0) :idx(index)
//	{
//	}
//	const char* what() const
//	{
//		return "RangeException";
//	}
//};
//class SizeException : public Exception
//{
//	int size;
//public:
//	SizeException(int sz = 0) :size(sz) {}
//	const char* what()const
//	{
//		return "SizeException";
//	}
//};
//void f1(int idx)
//{
//	if (0 <= idx && idx < 1000)
//		cout << "f1()" << endl;
//	else
//		throw RangeException(idx);
//}
//void f2(int size)
//{
//	if (size < 1000000) {
//		cout << "f2()" << endl;
//	}
//	else
//		throw SizeException(size);
//	cout << "f2() post" << endl;
//
//}
//void f3()
//{
//	cout << "f3()" << endl;
//
//}
/////////////////////////////client//////////////////////////////
//int main()
//{
//	try {
//		f1(5);
//		f2(500000000);
//		f3();
//	}
//	catch (Exception& e)
//	{
//		cout << e.what() << endl;
//	}
//	catch (...)
//	{
//		cout << "Exception~~" << endl;
//	}
//}

//#include <iostream>
//using namespace std;
//
//
////////////////////////////server/////////////////////////////////
//class RangeException
//{
//	int upper = 999;
//	int lower = 0;
//	int idx;
//public:
//	RangeException(int index = 0) :idx(index)
//	{
//	}
//	const char* what() const
//	{
//		return "RangeException";
//	}
//};
//class SizeException
//{
//	int size;
//public:
//	SizeException(int sz = 0) :size(sz) {}
//	const char* what()const
//	{
//		return "SizeException";
//	}
//};
//void f1(int idx)
//{
//	if (0 <= idx && idx < 1000)
//		cout << "f1()" << endl;
//	else
//		throw RangeException(idx);
//}
//void f2(int size)
//{
//	if (size < 1000000) {
//		cout << "f2()" << endl;
//	}
//	else
//		throw SizeException(size);
//	cout << "f2() post" << endl;
//
//}
//void f3()
//{
//	cout << "f3()" << endl;
//
//}
/////////////////////////////client//////////////////////////////
//int main()
//{
//	try {
//		f1(5);
//		f2(500000000);
//		f3();
//	}
//	catch (SizeException& e)
//	{
//		cout << e.what() << endl;
//	}
//	catch (RangeException& e)
//	{
//		cout << e.what() << endl;
//	}
//	catch (...)
//	{
//		cout << "Exception~~" << endl;
//	}
//}

//#include <iostream>
//using namespace std;
//
//
////////////////////////////server/////////////////////////////////
//class RangeException
//{
//	int upper = 999;
//	int lower = 0;
//	int idx;
//public:
//	RangeException(int index = 0) :idx(index)
//	{
//	}
//	const char* what() const
//	{
//		return "RangeException";
//	}
//};
//class SizeException
//{
//	int size;
//public:
//	SizeException(int sz = 0) :size(sz) {}
//	const char* what()const
//	{
//		return "SizeException";
//	}
//};
//void f1(int idx)
//{
//	if (0 <= idx && idx < 1000)
//		cout << "f1()" << endl;
//	else
//		throw RangeException(idx);
//}
//void f2(int size)
//{
//	if (size < 1000000) {
//		cout << "f2()" << endl;
//	}
//	else
//		throw SizeException(size);
//	cout << "f2() post" << endl;
//
//}
//void f3()
//{
//	cout << "f3()" << endl;
//
//}
/////////////////////////////client//////////////////////////////
//int main()
//{
//	try {
//		f1(10);
//		f2(500000000);
//		f3();
//	}
//	catch (RangeException& e)
//	{
//		cout << e.what() << endl;
//	}
//	catch (...)
//	{
//		cout << "Exception~~" << endl;
//	}
//}

//#include <iostream>
//using namespace std;
//
//
////////////////////////////server/////////////////////////////////
//class RangeException
//{
//	int upper = 999;
//	int lower = 0;
//	int idx;
//public:
//	RangeException(int index = 0) :idx(index)
//	{
//	}
//	const char* what() const
//	{
//		return "RangeException";
//	}
//};
//class SizeException
//{
//	int size;
//public:
//	SizeException(int sz = 0) :size(sz) {}
//	const char* what()const
//	{
//		return "SizeException";
//	}
//};
//void f1(int idx)
//{
//	if (0 <= idx && idx < 1000)
//		cout << "f1()" << endl;
//	else
//		throw RangeException(idx);
//}
//void f2(int size)
//{
//	if (size < 1000000) {
//		cout << "f2()" << endl;
//	}
//	else
//		throw SizeException(size);
//	cout << "f2() post" << endl;
//
//}
//void f3()
//{
//	cout << "f3()" << endl;
//
//}
/////////////////////////////client//////////////////////////////
//int main()
//{
//	try {
//		f1(10);
//		f2(500000000);
//		f3();
//	}
//	catch (...)
//	{
//		cout << "Exception~~" << endl;
//	}
//}

//#include <iostream>
//using namespace std;
//
//
////////////////////////////server/////////////////////////////////
//class RangeException
//{
//	int upper = 999;
//	int lower = 0;
//	int idx;
//public:
//	RangeException(int index = 0) :idx(index)
//	{
//	}
//	const char* what() const
//	{
//		return "RangeException";
//	}
//}; 
//class SizeException
//{
//	int size;
//public:
//	SizeException(int sz = 0):size(sz){}
//	const char* what ()const
//	{
//		return "SizeException";
//	}
//};
//void f1(int idx)
//{
//	if (0 <= idx && idx < 1000)
//		cout << "f1()" << endl;
//	else
//		throw RangeException(idx);
//}
//void f2(int size)
//{
//	if (size < 1000000) {
//		cout << "f2()" << endl;
//	}
//	else
//		throw SizeException(size);
//	cout << "f2() post" << endl;
//
//}
//void f3()
//{
//	cout << "f3()" << endl;
//
//}
/////////////////////////////client//////////////////////////////
//int main()
//{
//	try {
//		f1(10);
//		f2(500);
//		f3();
//	}
//	catch (...)
//	{
//
//	}
//}

//#include <iostream>
//using namespace std;
//
//
////////////////////////////server/////////////////////////////////
//void f1()
//{
//	cout << "f1()" << endl;
//	//throw 100;
//}
//void f2()
//{
//	cout << "f2()" << endl;
//	cout << "f2() post" << endl;
//
//
//}
//void f3()
//{
//	cout << "f3()" << endl;
//
//}
/////////////////////////////client//////////////////////////////
//int main()
//{
//	try {
//		f1();
//		f2();
//		f3();
//	}
//	catch (...)
//	{
//
//	}
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int* buf;
//public:
//	Point() :buf(nullptr)
//	{
//		buf = new int(0);
//	}
//	~Point() { delete buf; cout << "~Point()" << endl; }
//	Point(const Point& arg) :buf(nullptr)
//	{
//		buf = new int(*arg.buf);
//		cout << "copy Point()" << endl;
//	}
//	Point(Point&& arg)noexcept : buf(nullptr)
//	{
//		buf = arg.buf;
//		arg.buf = nullptr;
//		cout << "move Point()" << endl;
//
//	}
//	const Point& operator=(const Point& arg)
//	{
//		delete buf;
//		buf = new int(*arg.buf);
//		cout << "copy operator=()" << endl;
//		return *this;
//	}
//	Point& operator=(Point&& arg)
//	{
//		delete buf;
//		buf = arg.buf;
//		arg.buf = nullptr;
//		cout << "move operator=()" << endl;
//		return *this;
//	}
//
//};
//int main()
//{
//	Point p1;
//	Point p2;
//
//	p1 = p2;
//	p1 = std::move(p2);
//	p1 = Point();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int* buf;
//public:
//	Point() :buf(nullptr)
//	{
//		buf = new int(0);
//	}
//	~Point() { delete buf; cout << "~Point()" << endl; }
//	Point(const Point& arg) :buf(nullptr)
//	{
//		buf = new int(*arg.buf);
//		cout << "copy Point()" << endl;
//	}
//	Point(Point&& arg)noexcept : buf(nullptr)
//	{
//		buf = arg.buf;
//		arg.buf = nullptr;
//		cout << "move Point()" << endl;
//
//	}
//	const Point& operator=(const Point& arg)
//	{
//		delete buf;
//		buf = new int(*arg.buf);
//		cout << "copy operator=()" << endl;
//		return *this;
//	}
//	Point& operator=(Point&& arg)
//	{
//		delete buf;
//		buf = arg.buf;
//		arg.buf = nullptr;
//		cout << "move operator=()" << endl;
//		return *this;
//	}
//
//};
//int main()
//{
//	Point p1;
//	Point p2;
//
//	p1 = p2;
//	p1 = Point();
//}

//#include <iostream>
//using namespace std;
//
//class Test
//{
//
//public:
//    Test(const char*) {}
//    Test(const Test& arg) { cout << "copy Test() " << endl; }
//    Test(Test&& arg)noexcept { cout << "move Test() " << endl; }
//    const Test& operator=(const Test& arg)
//    {
//        cout << "copy Test::operator=" << endl;
//        return *this;
//    }
//    Test& operator=(Test&& arg) noexcept
//    {
//        cout << "move Test::operator=" << endl;
//        return *this;
//    }
//};
//class Array
//{
//    Test name;
//    int* buf;
//    int count;
//    int capacity;
//public:
//    Array(const Test n = "no name", int cap = 100) :name(n), buf(nullptr), count(0), capacity(cap)
//    {
//        buf = new int[capacity];
//        cout << "Array()" << endl;
//    }
//    Array(const Array& arg) :name(arg.name), buf(nullptr), count(arg.count), capacity(arg.capacity)
//    {
//        buf = new int[capacity];
//        for (int i = 0; i < count; ++i)
//            buf[i] = arg.buf[i];
//        cout << " copy Array() " << endl;
//    }
//    Array(Array&& arg) noexcept :name(arg.name), buf(nullptr), count(arg.count), capacity(arg.capacity)
//    {
//        buf = arg.buf; //소유권 이전
//        arg.buf = nullptr; // 소유권 버림
//        cout << " move Array() " << endl;
//    }
//    ~Array() { delete[] buf; buf = nullptr; cout << "~Array() " << endl; }
//    void Add(int data)
//    {
//        buf[count++] = data;
//    }
//    int At(int idx)
//    {
//        return buf[idx];
//    }
//    const Array& operator=(const Array& arg)
//    {
//        name = arg.name;
//        count = arg.count;
//        capacity = arg.capacity;
//        delete buf;
//        buf = new int[arg.capacity];
//        for (int i = 0; i < count; ++i)
//            buf[i] = arg.buf[i];
//        cout << "copy Array::operator=()" << endl;
//
//        return *this;
//    }
//    Array& operator=(Array&& arg)
//    {
//        name = arg.name;
//        count = arg.count;
//        capacity = arg.capacity;
//        delete buf;
//        buf = arg.buf;
//        arg.buf = nullptr;
//        cout << "move Array::operator=()" << endl;
//
//        return *this;
//    }
//    int Size() const { return  count; }
//};
//
//int main()
//{
//    Array a1("hello", 200);
//    Array a2;
//
//    a2 = a1; // 복사 대입연산자
//    a2 = Array("hi", 500);
//}

//#include <iostream>
//using namespace std;
//
//class Test
//{
//
//public:
//    Test(const char*) {}
//    Test(const Test& arg) { cout << "copy Test() " << endl; }
//    Test(Test&& arg)noexcept { cout << "move Test() " << endl; }
//    const Test& operator=(const Test& arg)
//    {
//        cout << "copy Test::operator=" << endl;
//        return *this;
//    }
//    Test& operator=(Test&& arg) noexcept
//    {
//        cout << "move Test::operator=" << endl;
//        return *this;
//    }
//};
//class Array
//{
//    Test name;
//    int* buf;
//    int count;
//    int capacity;
//public:
//    Array(const Test n = "no name", int cap = 100) :name(n), buf(nullptr), count(0), capacity(cap)
//    {
//        buf = new int[capacity];
//        cout << "Array()" << endl;
//    }
//    Array(const Array& arg) :name(arg.name), buf(nullptr), count(arg.count), capacity(arg.capacity)
//    {
//        buf = new int[capacity];
//        for (int i = 0; i < count; ++i)
//            buf[i] = arg.buf[i];
//        cout << " copy Array() " << endl;
//    }
//    Array(Array&& arg) noexcept :name(std::move(arg.name)), buf(nullptr), count(arg.count), capacity(arg.capacity)
//    {
//        buf = arg.buf; //소유권 이전
//        arg.buf = nullptr; // 소유권 버림
//        cout << " move Array() " << endl;
//    }
//    ~Array() { delete[] buf; buf = nullptr; cout << "~Array() " << endl; }
//    void Add(int data)
//    {
//        buf[count++] = data;
//    }
//    int At(int idx)
//    {
//        return buf[idx];
//    }
//    const Array& operator=(const Array& arg)
//    {
//        name = arg.name;
//        count = arg.count;
//        capacity = arg.capacity;
//        delete buf;
//        buf = new int[arg.capacity];
//        for (int i = 0; i < count; ++i)
//            buf[i] = arg.buf[i];
//        cout << "copy Array::operator=()" << endl;
//
//        return *this;
//    }
//    Array& operator=(Array&& arg)
//    {
//        name = std::move(arg.name);
//        count = arg.count;
//        capacity = arg.capacity;
//        delete buf;
//        buf = arg.buf;
//        arg.buf = nullptr;
//        cout << "move Array::operator=()" << endl;
//
//        return *this;
//    }
//    int Size() const { return  count; }
//};
//
//int main()
//{
//    Array a1("hello", 200);
//    Array a2;
//
//    a2 = a1; // 복사 대입연산자
//    a2 = Array("hi", 500);
//}

//#include <iostream>
//using namespace std;
//
//class Test
//{
//    
//public:
//    Test(const char*) {}
//    Test(const Test& arg) { cout << "copy Test() " << endl; }
//    Test(Test&& arg)noexcept { cout << "move Test() " << endl; }
//    const Test& operator=(const Test& arg)
//    {
//        cout << "copy Test::operator=" << endl;
//        return *this;
//    }
//    Test& operator=(Test&& arg)
//    {
//        cout << "copy Test::operator=" << endl;
//        return *this;
//    }
//};
//class Array
//{
//    Test name;
//    int* buf;
//    int count;
//    int capacity;
//public:
//    Array(const Test n = "no name", int cap = 100) :name(n), buf(nullptr), count(0), capacity(cap)
//    {
//        buf = new int[capacity];
//        cout << "Array()" << endl;
//    }
//    Array(const Array& arg) :name(arg.name), buf(nullptr), count(arg.count), capacity(arg.capacity)
//    {
//        buf = new int[capacity];
//        for (int i = 0; i < count; ++i)
//            buf[i] = arg.buf[i];
//        cout << " copy Array() " << endl;
//    }
//    Array(Array&& arg) noexcept :name(std::move(arg.name)), buf(nullptr), count(arg.count), capacity(arg.capacity)
//    {
//        buf = arg.buf; //소유권 이전
//        arg.buf = nullptr; // 소유권 버림
//        cout << " move Array() " << endl;
//    }
//    ~Array() { delete[] buf; buf = nullptr; cout << "~Array() " << endl; }
//    void Add(int data)
//    {
//        buf[count++] = data;
//    }
//    int At(int idx)
//    {
//        return buf[idx];
//    }
//    const Array& operator=(const Array& arg)
//    {
//        name = arg.name;
//        count = arg.count;
//        capacity = arg.capacity;
//        delete buf;
//        buf = new int[arg.capacity];
//        for (int i = 0; i < count; ++i)
//            buf[i] = arg.buf[i];
//        cout << "copy Array::operator=()" << endl;
//
//        return *this;
//    }
//    Array& operator=(Array&& arg)
//    {
//        name = std::move(arg.name);
//        count = arg.count;
//        capacity = arg.capacity;
//        delete buf;
//        buf = arg.buf;
//        arg.buf = nullptr;
//        cout << "move Array::operator=()" << endl;
//
//        return *this;
//    }
//    int Size() const { return  count; }
//};
//
//int main()
//{
//    Array a1("hello", 200);
//    Array a2;
//
//    a2 = a1; // 복사 대입연산자
//    a2 = Array("hi", 500);
//}

//#include <iostream>
//using namespace std;
//
//class Array
//{
//    string name;
//    int* buf;
//    int count;
//    int capacity;
//public:
//    Array(const string n = "no name", int cap = 100) :name(n), buf(nullptr), count(0), capacity(cap)
//    {
//        buf = new int[capacity];
//        cout << "Array()" << endl;
//    }
//    Array(const Array& arg) :name(arg.name), buf(nullptr), count(arg.count), capacity(arg.capacity)
//    {
//        buf = new int[capacity];
//        for (int i = 0; i < count; ++i)
//            buf[i] = arg.buf[i];
//        cout << " copy Array() " << endl;
//    }
//    Array(Array&& arg) noexcept :name(std::move(arg.name)),buf(nullptr), count(arg.count), capacity(arg.capacity)
//    {
//        buf = arg.buf; //소유권 이전
//        arg.buf = nullptr; // 소유권 버림
//        cout << " move Array() " << endl;
//    }
//    ~Array() { delete[] buf; buf = nullptr; cout << "~Array() " << endl; }
//    void Add(int data)
//    {
//        buf[count++] = data;
//    }
//    int At(int idx)
//    {
//        return buf[idx];
//    }
//    const Array& operator=(const Array& arg)
//    {
//        name = arg.name;
//        count = arg.count;
//        capacity = arg.capacity;
//        delete buf;
//        buf = new int[arg.capacity];
//        for (int i = 0; i < count; ++i)
//            buf[i] = arg.buf[i];
//        cout << "copy Array::operator=()" << endl;
//
//        return *this;
//    }
//    Array& operator=(Array&& arg)
//    {
//        name = std::move(arg.name);
//        count = arg.count;
//        capacity = arg.capacity;
//        delete buf;
//        buf = arg.buf;
//        arg.buf = nullptr;
//        cout << "move Array::operator=()" << endl;
//
//        return *this;
//    }
//    int Size() const { return  count; }
//};
//
//int main()
//{
//    Array a1("hello",200);
//    Array a2;
//
//    a2 = a1; // 복사 대입연산자
//    a2 = Array("hi",500);
//}

//#include <iostream>
//using namespace std;
//
//class Array
//{
//    int* buf;
//    int count;
//    int capacity;
//public:
//    Array(int cap = 100) :buf(nullptr), count(0), capacity(cap)
//    {
//        buf = new int[capacity];
//        cout << "Array()" << endl;
//    }
//    Array(const Array& arg) :buf(nullptr), count(arg.count), capacity(arg.capacity)
//    {
//        buf = new int[capacity];
//        for (int i = 0; i < count; ++i)
//            buf[i] = arg.buf[i];
//        cout << " copy Array() " << endl;
//    }
//    Array(Array&& arg) noexcept :buf(nullptr), count(arg.count), capacity(arg.capacity)
//    {
//        buf = arg.buf;
//        arg.buf = nullptr;
//        cout << " move Array() " << endl;
//    }
//    ~Array() { delete[] buf; buf = nullptr; cout << "~Array() " << endl; }
//    void Add(int data)
//    {
//        buf[count++] = data;
//    }
//    int At(int idx)
//    {
//        return buf[idx];
//    }
//    const Array& operator=(const Array& arg)
//    {
//        count = arg.count;
//        capacity = arg.capacity;
//        delete buf;
//        buf = new int[arg.capacity];
//        for (int i = 0; i < count; ++i)
//            buf[i] = arg.buf[i];
//        cout << "copy Array::operator=()" << endl;
//
//        return *this;
//    }
//    Array& operator=(Array&& arg)
//    {
//        count = arg.count;
//        capacity = arg.capacity;
//        delete buf;
//        buf = arg.buf;
//        arg.buf = nullptr;
//        cout << "move Array::operator=()" << endl;
//
//        return *this;
//    }
//    int Size() const { return  count; }
//};
//
//int main()
//{
//    Array a1(200);
//    Array a2;
//
//    a2 = a1; // 복사 대입연산자
//    a2 = Array(500);
//}

//#include <iostream>
//using namespace std;
//
//class Array
//{
//    int* buf;
//    int count;
//    int capacity;
//public:
//    Array(int cap = 100) :buf(nullptr), count(0), capacity(cap)
//    {
//        buf = new int[capacity];
//        cout << "Array()" << endl;
//    }
//    Array(const Array& arg) :buf(nullptr), count(arg.count), capacity(arg.capacity)
//    {
//        buf = new int[capacity];
//        for (int i = 0; i < count; ++i)
//            buf[i] = arg.buf[i];
//        cout << " copy Array() " << endl;
//    }
//    Array(Array&& arg) noexcept :buf(nullptr), count(arg.count), capacity(arg.capacity)
//    {
//        buf = arg.buf;
//        arg.buf = nullptr;
//        cout << " move Array() " << endl;
//    }
//    ~Array() { delete[] buf; buf = nullptr; cout << "~Array() " << endl; }
//    void Add(int data)
//    {
//        buf[count++] = data;
//    }
//    int At(int idx)
//    {
//        return buf[idx];
//    }
//    const Array& operator=(const Array& arg)
//    {
//        count = arg.count;
//        capacity = arg.capacity;
//        delete buf;
//        buf = new int[arg.capacity];
//        for (int i = 0; i < count; ++i)
//            buf[i] = arg.buf[i];
//    }
//    int Size() const { return  count; }
//};
//
//int main()
//{
//    Array a1(200);
//    Array a2;
//
//    a2 = a1;
//}

//#include <iostream>
//using namespace std;
//
//class Array
//{
//    int* buf;
//    int count;
//    int capacity;
//public:
//    Array(int cap = 100) :buf(nullptr), count(0), capacity(cap)
//    {
//        buf = new int[capacity];
//        cout << "Array()" << endl;
//    }
//    Array(const Array& arg) :buf(nullptr), count(arg.count), capacity(arg.capacity)
//    {
//        buf = new int[capacity];
//        for (int i = 0; i < count; ++i)
//            buf[i] = arg.buf[i];
//        cout << " copy Array() " << endl;
//    }
//    Array(Array&& arg) noexcept :buf(nullptr), count(arg.count) ,capacity(arg.capacity)
//    {
//        buf = arg.buf;
//        arg.buf = nullptr;
//        cout << " move Array() " << endl;
//    }
//    ~Array() { delete[] buf; buf = nullptr; cout << "~Array() " << endl; }
//    void Add(int data)
//    {
//        buf[count++] = data;
//    }
//    int At(int idx)
//    {
//        return buf[idx];
//    }
//    const Array& operator=(const Array& arg)
//    {
//        count = arg.count;
//        capacity = arg.capacity;
//        delete buf;
//        buf = new int [arg.capacity];
//        for (int i = 0; i < count; ++i)
//            buf[i] = arg.buf[i];
//    }
//    int Size() const { return  count; }
//};
//
//int main()
//{
//    Array a1(200);
//    Array a2;
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//    int x, y;
//public:
//    Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point()" << endl; }
//    ~Point() { cout << "~Point()" << endl; }
//    void Print()const { cout << x << ',' << y << "  "; }
//};
//class Array
//{
//    Point** buf;
//    int count;
//public:
//    Array() :buf(nullptr), count(0)
//    {
//        buf = new Point * [100];
//        cout << "Array()" << endl;
//    }
//    Array(const Array& arg) :buf(nullptr), count(arg.count)
//    {
//        buf = new Point * [100];
//        for (int i = 0; i < count; ++i)
//            buf[i] = arg.buf[i];
//        cout << " copy Array() " << endl;
//    }
//    Array(Array&& arg) noexcept :buf(nullptr), count(arg.count)
//    {
//        buf = arg.buf;
//        arg.buf = nullptr;
//        cout << " move Array() " << endl;
//    }
//    ~Array() { delete[] buf; buf = nullptr; cout << "~Array() " << endl; }
//    void Add(Point* data)
//    {
//        buf[count++] = data;
//    }
//    Point* At(int idx)
//    {
//        return buf[idx];
//    }
//    const Array& operator=(const Array& arg)
//    {
//        count = arg.count;
//        delete buf;
//        buf = new Point * [100];
//        for (int i = 0; i < count; ++i)
//            buf[i] = arg.buf[i];
//    }
//    int Size() const { return  count; }
//};
//Array CreateArray5()
//{
//    Array a1;
//    a1.Add(new Point(1, 1));
//    a1.Add(new Point(2, 2));
//    a1.Add(new Point(3, 3));
//    a1.Add(new Point(4, 4));
//    a1.Add(new Point(5, 5));
//
//    return a1;
//}
//int main()
//{
//    Array arr = CreateArray5();
//
//    for (int i = 0; i < arr.Size(); ++i)
//        arr.At(i)->Print();
//    cout << endl;
//
//    for (int i = 0; i < arr.Size(); ++i)
//        delete arr.At(i);
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//    int x, y;
//public:
//    Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point()" << endl; }
//    ~Point() { cout << "~Point()" << endl; }
//    void Print()const { cout << x << ',' << y << "  "; }
//};
//class Array
//{
//    Point** buf;
//    int count;
//public:
//    Array() :buf(nullptr), count(0)
//    {
//        buf = new Point * [100];
//        cout << "Array()" << endl;
//    }
//    Array(const Array& arg) :buf(nullptr), count(arg.count)
//    {
//        buf = new Point * [100];
//        for (int i = 0; i < count; ++i)
//            buf[i] = arg.buf[i];
//        cout << " copy Array() " << endl;
//    }
//    ~Array() { delete[] buf; buf = nullptr; cout << "~Array() " << endl; }
//    void Add(Point* data)
//    {
//        buf[count++] = data;
//    }
//    Point* At(int idx)
//    {
//        return buf[idx];
//    }
//    const Array& operator=(const Array& arg)
//    {
//        count = arg.count;
//        delete buf;
//        buf = new Point * [100];
//        for (int i = 0; i < count; ++i)
//            buf[i] = arg.buf[i];
//    }
//    int Size() const { return  count; }
//};
//Array CreateArray5()
//{
//    Array a1;
//    a1.Add(new Point(1, 1));
//    a1.Add(new Point(2, 2));
//    a1.Add(new Point(3, 3));
//    a1.Add(new Point(4, 4));
//    a1.Add(new Point(5, 5));
//
//    return a1;
//}
//int main()
//{
//    Array arr = CreateArray5();
//
//    for (int i = 0; i < arr.Size(); ++i)
//        arr.At(i)->Print();
//    cout << endl;
//
//    for (int i = 0; i < arr.Size(); ++i)
//        delete arr.At(i);
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point()" << endl; }
//	~Point() { cout << "~Point" << endl; }
//	void Print()const { cout << x << ',' << y << "  "; }
//
//};
//class Array
//{
//	Point** buf;
//	int count;
//public:
//	Array() :buf(nullptr), count(0)
//	{
//		buf = new Point * [100];
//		cout << "Array()" << endl;
//	}
//	Array(const Array& arg) :buf(nullptr), count(arg.count)
//	{
//		buf = new Point * [100];
//		for (int i = 0; i < count; ++i)
//			buf[i] = arg.buf[i];
//		cout << " copy Array()" << endl;
//	}
//	~Array() { delete [] buf; buf = nullptr; }
//	void Add(Point* data)
//	{
//		buf[count++] = data;
//		cout << "~Array()" << endl;
//	}
//	Point* At(int idx)
//	{
//		return buf[idx];
//	}
//	const Array& operator=(const Array& arg)
//	{
//		count = arg.count;
//		delete buf;
//		buf = new Point * [100];
//		for (int i = 0; i < count; ++i)
//			buf[i] = arg.buf[i];
//	}
//	int Size() const { return count; }
//};
//Array CreateArray5()
//{
//	Array a1;
//	a1.Add(new Point(1, 1));
//	a1.Add(new Point(2, 2));
//	a1.Add(new Point(3, 3));
//	a1.Add(new Point(4, 4));
//	a1.Add(new Point(5, 5));
//	
//	return a1;
//}
//int main()
//{
//	Array arr = CreateArray5();
//
//	for (int i = 0; i < arr.Size(); ++i)
//		arr.At(i)->Print();
//	cout << endl;
//	for (int i = 0; i < arr.Size(); ++i)
//		delete arr.At(i);
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point()" << endl; }
//	~Point() { cout << "~Point" << endl; }
//	void Print()const { cout << x << ',' << y << "  "; }
//	
//};
//class Array
//{
//	Point** buf;
//	int count;
//public:
//	Array() :buf(nullptr), count(0)
//	{
//		buf = new Point * [100];
//	}
//	Array(const Array& arg) :buf(nullptr), count(arg.count)
//	{
//		buf = new Point * [100];
//		for (int i = 0; i < count; ++i)
//			buf[i] = arg.buf[i];
//	}
//	~Array() { delete buf; buf = nullptr; }
//	void Add(Point* data)
//	{
//		buf[count++] = data;
//	}
//	Point* At(int idx)
//	{
//		return buf[idx];
//	}
//	const Array& operator=(const Array& arg)
//	{
//		count = arg.count;
//		delete buf;
//		buf = new Point * [100];
//		for (int i = 0; i < count; ++i)
//			buf[i] = arg.buf[i];
//	}
//	int Size() const { return count; }
//};
//int main()
//{
//	Array a1;
//	a1.Add(new Point(1, 1));
//	a1.Add(new Point(2, 2));
//	a1.Add(new Point(3, 3));
//	a1.Add(new Point(4, 4));
//	a1.Add(new Point(5, 5));
//
//	for (int i = 0; i < a1.Size(); ++i)
//		a1.At(i)->Print();
//	cout << endl;
//	for (int i = 0; i < a1.Size(); ++i)
//		delete a1.At(i);
//}


//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point()" << endl; }
//	Point(const Point& arg) :x(arg.x), y(arg.y) { cout << "copy Point()" << endl; }
//	Point(Point&& arg)noexcept :x(arg.x), y(arg.y) { cout << "move Point()" << endl; }
//	~Point() { cout << "~Point" << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//	Point operator+(const Point& arg)const
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//	const Point& operator=(const Point& arg)
//	{
//		x = arg.x;
//		y = arg.y;
//		cout << "copy Point::operator=()" << endl;
//		return *this;
//	}
//	Point& operator=(Point&& arg)
//	{
//		x = arg.x;
//		y = arg.y;
//		cout << "move Point::operator=()" << endl;
//		return *this;
//	}
//};
//Point CreatePoint()
//{
//	Point pt;
//	return pt;
//}
//
//int main()
//{
//	Point p1(2, 3);
//	Point p3(1, 1);
//	//Point p2(p1); //복사생성자 호출
//	Point p2(CreatePoint()); // 이동생성자 호출
//
//	p2.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point()" << endl; }
//	Point(const Point& arg) :x(arg.x), y(arg.y) { cout << "copy Point()" << endl; }
//	~Point() { cout << "~Point" << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//	Point operator+(const Point& arg)const
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//	const Point& operator=(const Point& arg)
//	{
//		x = arg.x;
//		y = arg.y;
//		cout << "copy Point::operator=()" << endl;
//		return *this;
//	}
//	Point& operator=(Point&& arg)
//	{
//		x = arg.x;
//		y = arg.y;
//		cout << "move Point::operator=()" << endl;
//		return *this;
//	}
//};
//Point CreatePoint()
//{
//	Point pt;
//	return pt;
//}
//
//int main()
//{
//	Point p1(2, 3);
//	Point p2(p1);
//
//	p2 = p1; // 복사 대입연산자
//	p2 = Point(3, 5); // 이동 대입연산자
//	p2.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point()" << endl; }
//	Point(const Point& arg) :x(arg.x), y(arg.y) { cout << "copy Point()" << endl; }
//	~Point() { cout << "~Point" << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//	Point operator+(const Point& arg)const
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//	const Point& operator=(const Point& arg)
//	{
//		x = arg.x;
//		y = arg.y;
//		cout << "Point::operator=()" << endl;
//		return *this;
//	}
//};
//Point CreatePoint()
//{
//	Point pt;
//	return pt;
//}
//
//int main()
//{
//	Point p1(2, 3);
//	Point p2(p1);
//
//	p2 = p1;
//
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point()" << endl; }
//	~Point() { cout << "~Point" << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//	Point operator+(const Point& arg)const
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//};
//Point CreatePoint()
//{
//	Point pt;
//	return pt;
//}
//void PrintInt(const int& data)
//{
//	cout << "int& data : " <<  data << endl;
//}
//void PrintInt(int&& data)
//{
//	cout << "int&& data : " <<  data << endl;
//}
//int main()
//{
//	int n = 200;
//	PrintInt(100);
//	PrintInt(n);
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point()" << endl; }
//	~Point() { cout << "~Point" << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//	Point operator+(const Point& arg)const
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//};
//Point CreatePoint()
//{
//	Point pt;
//	return pt;
//}
//void PrintInt(const int& data)
//{
//	cout << "data : " << endl;
//}
//int main()
//{
//	int n = 200;
//	PrintInt(100);
//	PrintInt(n);
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point()" << endl; }
//	~Point() { cout << "~Point" << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//	Point operator+(const Point& arg)const
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//};
//Point CreatePoint()
//{
//	Point pt;
//	return pt;
//}
//int main()
//{
//	int a = 1;
//	int b = 10;
//	int& r = a;
//	int&& k = 100; // X 똘아이~
//
//	cout << k << endl;
//}


//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point()" << endl; }
//	~Point() { cout << "~Point" << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//	Point operator+(const Point& arg)const
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//};
//Point CreatePoint()
//{
//	Point pt;
//	return pt;
//}
//int main()
//{
//	int a = 1;
//	int b = 10;
//	int c = a + b;
//
//	Point pt1(2, 3);
//	Point pt2(4, 5);
//	Point pt3;
//
//	//pt3 = pt1 + pt2;
//	//pt3 = Point(0, 0);
//	pt3 = CreatePoint();
//	cout << "main end!" << endl;
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point()" << endl; }
//	~Point() { cout << "~Point" << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//};
//Point CreatePoint()
//{
//	Point pt;
//	return pt;
//}
//int main()
//{
//	//int n;
//	//n = 10;
//	//10 = n;
//	//Point pt1(2, 3);
//	//Point pt2(3, 4);
//
//	//pt1 = pt2;
//
//	CreatePoint();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point()" << endl; }
//	~Point() { cout << "~Point" << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//};
//Point CreatePoint()
//{
//	Point pt;
//	return pt;
//}
//int main()
//{
//	//int n;
//	//n = 10;
//	//10 = n;
//	Point pt1(2, 3);
//	Point pt2(3, 4);
//
//	pt1 = pt2;
//	CreatePoint() = pt1 ;
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point()" << endl; }
//	~Point() { cout << "~Point" << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//};
//int main()
//{
//	//int n;
//	//n = 10;
//	//10 = n;
//	Point pt1(2, 3);
//	Point pt2(3, 4);
//
//	pt1 = pt2;
//	pt1 = Point(0, 0);
//	Point(0, 0) = pt1;
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point()" << endl; }
//	~Point() { cout << "~Point" << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//};
//int main()
//{
//	int n = 10;
//	int m = 20;
//
//	cout << &n << endl;
//	cout << &m << endl;
//
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point()" << endl; }
//	~Point() { cout << "~Point" << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//};
//template <typename T>
//class Shared_ptr
//{
//	T* ptr;
//	int* refCount;
//public:
//	Shared_ptr(T* p = nullptr) :ptr(p), refCount(nullptr)
//	{
//		if (p != nullptr)
//			refCount = new int(1);
//	}
//	Shared_ptr(const Shared_ptr<T>& arg)
//	{
//		ptr = arg.ptr;
//		refCount = arg.refCount;
//		++* refCount;
//	}
//	~Shared_ptr()
//	{
//		--* refCount;
//		if (*refCount == 0)
//		{
//			delete ptr;
//			delete refCount;
//		}
//	}
//	T* operator->() { return ptr; }
//	T& operator*() { return *ptr; }
//	const Shared_ptr<T>& operator=(const Shared_ptr<T>& arg)
//	{
//		delete ptr;
//		delete refCount;
//		ptr = arg.ptr;
//		refCount = arg.refCount;
//		++* refCount;
//
//		return *this;
//	}
//};
//int main()
//{
//	Shared_ptr<Point> s1(new Point(2, 3));
//
//	s1->Print(); //s1.operator->()->Print();
//	(*s1).Print(); //s1.operator*().Print();
//
//	Shared_ptr<Point> s2 = s1;
//	s2->Print();
//
//	Shared_ptr<Point> s3(new Point(4, 5));
//	s3 = s2;
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point()" << endl; }
//	~Point() { cout << "~Point" << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//};
//template <typename T>
//class Shared_ptr
//{
//	T* ptr;
//	int* refCount;
//public:
//	Shared_ptr(T* p = nullptr) :ptr(p), refCount(nullptr)
//	{
//		if( p!= nullptr)
//			refCount = new int(1);
//	}
//	Shared_ptr(const Shared_ptr<T>& arg)
//	{
//		ptr = arg.ptr;
//		refCount = arg.refCount;
//		++* refCount;
//	}
//	~Shared_ptr()
//	{
//		--* refCount;
//		if (*refCount == 0)
//		{
//			delete ptr;
//			delete refCount;
//		}
//	}
//	T* operator->() { return ptr; }
//	T& operator*() { return *ptr; }
//};
//int main()
//{
//	Shared_ptr<Point> s1(new Point(2, 3));
//
//	s1->Print(); //s1.operator->()->Print();
//	(*s1).Print(); //s1.operator*().Print();
//
//	Shared_ptr<Point> s2 = s1;
//	s2->Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point()" << endl; }
//	~Point() { cout << "~Point" << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//};
//template <typename T>
//class Shared_ptr
//{
//	T* ptr;
//	int* refCount;
//public:
//	Shared_ptr(T* p = nullptr) :ptr(p),refCount(nullptr) 
//	{ 
//		refCount = new int(1);
//	}
//	Shared_ptr(const Shared_ptr<T>& arg)
//	{
//		ptr = arg.ptr;
//		refCount = arg.refCount;
//		++* refCount;
//	}
//	~Shared_ptr() 
//	{ 
//		--*refCount;
//		if (*refCount == 0)
//		{
//			delete ptr;
//			delete refCount;
//		}
//	}
//	T* operator->() { return ptr; }
//	T& operator*() { return *ptr; }
//};
//int main()
//{
//	Shared_ptr<Point> s1(new Point(2, 3));
//
//	s1->Print(); //s1.operator->()->Print();
//	(*s1).Print(); //s1.operator*().Print();
//
//	Shared_ptr<Point> s2 = s1;
//	s2->Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point()" << endl; }
//	~Point() { cout << "~Point" << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//};
//template <typename T>
//class Shared_ptr
//{
//	T* ptr;
//public:
//	Shared_ptr(T* p = nullptr) :ptr(p) { }
//	~Shared_ptr() { delete ptr; }
//	T* operator->() { return ptr; }
//	T& operator*() { return *ptr; }
//};
//int main()
//{
//	Shared_ptr<Point> s1(new Point(2, 3));
//
//	s1->Print(); //s1.operator->()->Print();
//	(*s1).Print(); //s1.operator*().Print();
//
//	Shared_ptr<Point> s2 = s1;
//	s2->Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point()" << endl; }
//	~Point() { cout << "~Point" << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//};
//template <typename T>
//class Shared_ptr
//{
//	T* ptr;
//public:
//	Shared_ptr(T* p=nullptr):ptr(p) { }
//	~Shared_ptr() { delete ptr; }
//	T* operator->(){return ptr; }
//	T& operator*() {return *ptr; }
//};
//int main()
//{
//	Shared_ptr<Point> s1(new Point(2, 3));
//
//	s1->Print();
//	(*s1).Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point()" << endl; }
//	~Point() { cout << "~Point" << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//};
//
//int main()
//{
//	unique_ptr<Point> p1(new Point(2, 3));
//	p1->Print();
//	
//	unique_ptr<Point> p2(p1.get());
//	p1.release();
//	p2->Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point()" << endl; }
//	~Point() { cout << "~Point" << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//};
//
//int main()
//{
//	unique_ptr<Point> p1(new Point(2, 3));
//	p1->Print();
//
//	unique_ptr<Point> p2 (p1.get());
//	p1.release();
//	p2->Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point()" << endl; }
//	~Point() { cout << "~Point" << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//};
//
//int main()
//{
//	shared_ptr<Point> p1(new Point(2, 3));
//	{
//		weak_ptr<Point> p2 = p1;
//
//		p1->Print();
//		p2.lock()->Print();
//	}
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point()" << endl; }
//	~Point() { cout << "~Point" << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//};
//
//int main()
//{
//	shared_ptr<Point> p1(new Point(2, 3));
//	{
//		weak_ptr<Point> p2 = p1;
//
//		p1->Print();
//		p2.lock()->Print();
//	}
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point()" << endl; }
//	~Point() { cout << "~Point" << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//};
//
//int main()
//{
//	shared_ptr<Point> p1(new Point(2, 3));
//	p1->Print();
//	{
//		shared_ptr<Point> p2 = p1;
//		p2->Print();
//	}
//	{
//		shared_ptr<Point> p3 = p1;
//		p3->Print();
//	}
//	p1->Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point()" << endl; }
//	~Point() { cout << "~Point" << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//};
//
//int main()
//{
//	shared_ptr<Point> p1(new Point(2, 3));
//	p1->Print();
//	{
//		shared_ptr<Point> p2 = p1;
//		p2->Print();
//	}
//	{
//		shared_ptr<Point> p3 = p1;
//		p3->Print();
//	}
//	p1->Print();
//}