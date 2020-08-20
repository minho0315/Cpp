#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class String
{
    char* buf;
    int length;
public:
    String(const char* s) :buf(NULL), length(0)
    {
        length = strlen(s);
        buf = new char[length + 1];
        strcpy_s(buf, length + 1, s);
    }
    String(const String& arg) :buf(NULL), length(arg.length)
    {
        buf = new char[length + 1];
        strcpy_s(buf, length + 1, arg.buf);
    }
    ~String() { delete[] buf; cout << "~String()" << endl; }
    const char* c_str()const { return buf; }
    int size()const { return length; }

    const String& operator=(const String& arg)
    {
        delete[] buf;

        length = arg.length;
        buf = new char[length + 1];
        strcpy_s(buf, length + 1, arg.buf);

        return *this;
    }
    char operator[](int idx)const
    {
        return buf[idx];
    }
    operator const char* () const
    {
        return buf;
    }
};
int main()
{
    String s1("hello!");
    s1 = "ABC"; // 내부적으로 컴파일러가 String("ABC")로 해석
    //const char* str = s1; // 내부적으로 컴파일러가 const char* str = s1.operator const char* ()으로 해석

    cout << s1 << endl; // 내부적으로 컴파일러가 cout << s1.operator const char* () << endl;으로 해석
    cout << (const char*)"ABC" << endl;

}

//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//class String
//{
//    char* buf;
//    int length;
//public:
//    String(const char* s) :buf(NULL), length(0)
//    {
//        length = strlen(s);
//        buf = new char[length + 1];
//        strcpy_s(buf, length + 1, s);
//    }
//    String(const String& arg) :buf(NULL), length(arg.length)
//    {
//        buf = new char[length + 1];
//        strcpy_s(buf, length + 1, arg.buf);
//    }
//    ~String() { delete[] buf; cout << "~String()" << endl; }
//    const char* c_str()const { return buf; }
//    int size()const { return length; }
//
//    const String& operator=(const String& arg)
//    {
//        delete[] buf;
//
//        length = arg.length;
//        buf = new char[length + 1];
//        strcpy_s(buf, length + 1, arg.buf);
//
//        return *this;
//    }
//    char operator[](int idx)const
//    {
//        return buf[idx];
//    }
//    operator const char* () const
//    {
//        return buf;
//    }
//};
//int main()
//{
//    String s1("hello!");
//    s1 = "ABC"; // 내부적으로 컴파일러가 String("ABC")로 해석
//    const char* str = s1; // 내부적으로 컴파일러가 s1.operator const char* (s1)으로 해석
//
//
//    cout << s1 << endl;
//
//}

//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//class String
//{
//    char* buf;
//    int length;
//public:
//    String(const char* s) :buf(NULL), length(0)
//    {
//        length = strlen(s);
//        buf = new char[length + 1];
//        strcpy_s(buf, length + 1, s);
//    }
//    String(const String& arg) :buf(NULL), length(arg.length)
//    {
//        buf = new char[length + 1];
//        strcpy_s(buf, length + 1, arg.buf);
//    }
//    ~String() { delete[] buf; }
//    const char* c_str()const { return buf; }
//    int size()const { return length; }
//
//    const String& operator=(const String& arg)
//    {
//        delete[] buf;
//
//        length = arg.length;
//        buf = new char[length + 1];
//        strcpy_s(buf, length + 1, arg.buf);
//
//        return *this;
//    }
//    char operator[](int idx)const
//    {
//        return buf[idx];
//    }
//    operator const char* () const
//    {
//        return buf;
//    }
//};
//int main()
//{
//    String s1("hello!");
//    const char* str = s1;
//
//    cout << s1 << endl;
//    cout << str << endl;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	explicit Point(int x=0, int y = 0) : x(x), y(y)
//	{
//		cout << "Point()" << endl;
//	}
//	void Print()const { cout << x << ',' << y << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	operator int()const
//	{
//		return x;
//	}
//};
//
//int main()
//{
//	Point pt1(2, 3);
//	int temp = 100;
//
//	////////
//	/////////
//	/////////
//	
//	pt1 = (temp);
//
//	pt1.Print();
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(const char* s)
//	{
//		x = y = strlen(s);
//	}
//	Point(int x, int y = 0) : x(x), y(y)
//	{
//		cout << "Point()" << endl;
//	}
//	void Print()const { cout << x << ',' << y << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	operator int()const
//	{
//		return x;
//	}
//};
//
//int main()
//{
//	Point pt1(2, 3);
//
//	pt1 = "ABCDEF";
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
//	Point(int x, int y=0) : x(x), y(y)
//	{
//		cout << "Point()" << endl;
//	}
//	void Print()const { cout << x << ',' << y << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	operator int()const
//	{
//		return x;
//	}
//};
//
//int main()
//{
//	Point pt1(2, 3);
//
//	int n = 10;
//	pt1 = n;
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
//	Point(int x, int y) : x(x), y(y)
//	{
//		cout << "Point()" << endl;
//	}
//	void Print()const { cout << x << ',' << y << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	operator int()const
//	{
//		return x;
//	}
//};
//
//int main()
//{
//	Point pt1(2, 3);
//
//	int n = pt1; // pt1.operator int()
//	cout << n << endl;
//}
//////////////////////////////////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point() :x(0), y(0) { cout << "default Point()" << endl; }
//	Point(int x, int y) : x(x), y(y)
//	{
//		cout << "Point()" << endl;
//	}
//	Point(const Point& arg) :x(arg.x), y(arg.y) { cout << "copy Point()" << endl; }
//	~Point() { cout << "~Point()" << endl; }
//	void Print()const { cout << x << ',' << y << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//};
//Point GetPoint()
//{
//	Point t(2, 3);
//	return t;
//}
//int main()
//{
//	GetPoint().Print();
//
//	Point t2 = GetPoint();
//	cout << "end" << endl;
//	t2.Print();
//
//	t2 = GetPoint();
//	t2.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point() :x(0), y(0) { cout << "default Point()" << endl; }
//	Point(int x, int y) : x(x), y(y)
//	{
//		cout << "Point()" << endl;
//	}
//	~Point() { cout << "~Point()" << endl; }
//	void Print()const { cout << x << ',' << y << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//};
//int main()
//{
//	{
//		Point pt1(2, 5);
//		pt1.Print();
//	}
//	Point pt2 = Point(0, 0);
//	pt2.Print();
//
//	{
//		pt2 = Point(1, 1);
//		pt2.Print();
//	}
//	Point(3, 3).Print();
//	cout << "end" << endl;
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point() :x(0), y(0) { cout << "default Point()" << endl; }
//	Point(int x, int y) : x(x), y(y)
//	{
//		cout << "Point()" << endl;
//	}
//	~Point() { cout << "~Point()" << endl; }
//	void Print()const { cout << x << ',' << y << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//};
//int main()
//{
//	Point pt1(2, 5);
//	pt1.Print();
//
//	Point pt2 = Point(0, 0);
//	pt2.Print();
//
//	pt2 = Point(1, 1);
//	pt2.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point() :x(0), y(0) { cout << "default Point()" << endl; }
//	Point(int x, int y) : x(x), y(y)
//	{
//		cout << "Point()" << endl;
//	}
//	~Point() { cout << "~Point()" << endl; }
//	void Print()const { cout << x << ',' << y << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//};
//int main()
//{
//	Point pt1(2, 5);
//	pt1.Print();
//	pt1 = Point(0, 0);
//	pt1.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point() :x(0), y(0){cout << "default Point()" << endl; }
//	Point(int x, int y) : x(x), y(y)
//	{
//		cout << "Point()" << endl;
//	}
//	~Point() { cout << "~Point()" << endl; }
//	void Print()const { cout << x << ',' << y << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//};
//int main()
//{
//	Point();
//	cout << "main()" << endl;
//	Point(5, 6);
//	cout << "main()" << endl;
//
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x, int y) : x(x), y(y) 
//	{
//		cout << "Point()" << endl;
//	}
//	~Point(){ cout << "~Point()" << endl; }
//	void Print()const { cout << x << ',' << y << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//};
//int main()
//{
//	Point pt1(2, 3);
//
//	cout << "main()" << endl;
//
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//int n = 0;
//	int n = int();
//	double d = double();
//
//	cout << n << d << endl;
//	cout << int() << double() << endl;
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x, int y) : x(x), y(y) {}
//	void Print()const { cout << x << ',' << y << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//};
//ostream& operator<< (ostream& tout, const Point& pt)
//{
//	tout << pt.GetX() << "," << pt.GetY();
//	return tout;
//}
//
//int main()
//{
//	Point pt1(2, 3);
//
//	//cout << pt1 << 100 << endl;
//	//operator<<(cout, pt1);
//	cout << pt1 << " , " << 100 << endl;
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x, int y) : x(x), y(y) {}
//	void Print()const { cout << x << ',' << y << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//};
//
//int main()
//{
//	Point pt1(2, 3);
//
//	//pt1.Print();
//	//cout << pt1 << endl;
//
//	//cout << 100 << endl;
//	//cout.operator<<(100).operator<<(endl);
//	//cout << pt1;
//	operator<<(cout, pt1);
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x, int y) : x(x), y(y) {}
//	void Print()const { cout << x << ',' << y << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	const Point operator+(int n)const
//	{
//		Point t(x + n, y + n);
//		return t;
//	}
//	friend const Point operator+ (int n, const Point& pt);
//};
//const Point operator+ (int n, const Point& pt)
//{
//	return Point(pt.x + n, pt.y + n);
//}
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 4);
//
//	pt2 = 10 + pt1; // operator+(10,pt1) or 10.operator(pt1)
//	pt2.Print(); // 12,13
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x, int y) : x(x), y(y) {}
//	void Print()const { cout << x << ',' << y << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	const Point operator+(int n)const
//	{
//		Point t(x + n, y + n);
//		return t;
//	}
//};
//const Point operator+ (int n, const Point& pt)
//{
//	return Point(pt.GetX()+n,pt.GetY()+n);
//}
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 4);
//
//	pt2 = 10 + pt1  ; // operator+(10,pt1) or 10.operator(pt1)
//	pt2.Print(); // 12,13
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x, int y) : x(x), y(y) {}
//	void Print()const { cout << x << ',' << y << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	const Point operator+(int n)const
//	{
//		Point t(x + n, y + n);
//		return t;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 4);
//
//	pt2 = pt1 + 10; // Point(12,13)
//	pt2.Print(); // 12,13
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x, int y) : x(x), y(y) {}
//	void Print()const { cout << x << ',' << y << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	Point& operator+(int num)
//	{
//		x += num;
//		y += num;
//		return *this;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 4);
//
//	pt2 = pt1 + 10; // Point(12,13)
//	pt2.Print(); // 12,13
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y) {}
//	void Print()const { cout << x << ',' << y << endl; }
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 4);
//
//	pt1.Print();
//	pt2.Print();
//}

//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//class String
//{
//    char* buf;
//    int length;
//public:
//    String(const char* s) :buf(NULL), length(0)
//    {
//        length = strlen(s);
//        buf = new char[length + 1];
//        strcpy_s(buf, length + 1, s);
//    }
//    String(const String& arg) :buf(NULL), length(arg.length)
//    {
//        buf = new char[length + 1];
//        strcpy_s(buf, length + 1, arg.buf);
//    }
//    ~String() { delete[] buf; }
//    const char* c_str()const { return buf; }
//    int size()const { return length; }
//
//    const String& operator=(const String& arg)
//    {
//        delete[] buf;
//
//        length = arg.length;
//        buf = new char[length + 1];
//        strcpy_s(buf, length + 1, arg.buf);
//
//        return *this;
//    }
//    char operator[](int idx)const
//    {
//        return buf[idx];
//    }
//};
//int main()
//{
//    String s1("hello!");
//
//    //cout << s1 << endl;
//    cout << "size : " << s1.size() << endl;
//
//    for (int i = 0; i < s1.size(); ++i)
//        cout << s1[i] << endl;
//}

//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//class String
//{
//    char* buf;
//    int length;
//public:
//    String(const char* s) :buf(NULL), length(0)
//    {
//        length = strlen(s);
//        buf = new char[length + 1];
//        strcpy_s(buf, length + 1, s);
//    }
//    String(const String& arg) :buf(NULL), length(arg.length)
//    {
//        buf = new char[length + 1];
//        strcpy_s(buf, length + 1, arg.buf);
//    }
//    ~String() { delete[] buf; }
//    const char* c_str()const { return buf; }
//    int size()const { return length; }
//
//    const String& operator=(const String& arg)
//    {
//        delete[] buf;
//
//        length = arg.length;
//        buf = new char[length + 1];
//        strcpy_s(buf, length + 1, arg.buf);
//
//        return *this;
//    }
//    char operator[](int idx)const 
//    {
//        return buf[idx];
//    }
//};
//int main()
//{
//    String s1("hello!");
//
//    cout << s1.c_str() << endl;
//    cout << "size : " << s1.size() << endl;
//
//    for (int i = 0; i < s1.size(); ++i)
//        cout << s1[i] << endl;
//}

//#include <iostream>
//#include <cstring>
//using namespace std;
//class String
//{
//    char* buf;
//    int length;
//public:
//    String(const char* s) :buf(NULL), length(0)
//    {
//        length = strlen(s);
//        buf = new char[length + 1];
//        strcpy_s(buf, length + 1, s);
//    }
//    String(const String& arg) :buf(NULL), length(arg.length)
//    {
//        buf = new char[length + 1];
//        strcpy_s(buf, length + 1, arg.buf);
//    }
//    ~String() { delete[] buf; }
//    const char* c_str()const { return buf; }
//    const String& operator=(const String& arg)
//    {
//        delete[] buf;
//
//        length = arg.length;
//        buf = new char[length + 1];
//        strcpy_s(buf, length + 1, arg.buf);
//
//        return *this;
//    }
//    int size()const { return length; }
//};
//int main()
//{
//    String s1("hello!");
//
//    cout << s1.c_str() << endl;
//    cout << "size : " << s1.size() << endl;
//}

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class String
//{
//	char* buf;
//public:
//	String(const char* s)
//	{
//		buf = new char[strlen(s) + 1];
//		strcpy_s(buf, strlen(s) + 1, s);
//	}
//	String(const String& arg)
//	{
//		buf = new char[strlen(arg.buf) + 1];
//		strcpy_s(buf, strlen(arg.buf) + 1, arg.buf);
//	}
//	~String() { delete[] buf; }
//	const char* c_str()const { return buf; }
//	const String& operator=(const String& arg)
//	{
//		delete[] buf;
//
//		buf = new char[strlen(arg.buf) + 1];
//		strcpy_s(buf, strlen(arg.buf) + 1, arg.buf);
//		return *this;
//	}
//};
//int main()
//{
//	String s1("hello!");
//	String s2 = s1;
//
//	s2 = s1;
//
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//}

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class String
//{
//	char* buf;
//public:
//	String(const char* s)
//	{
//		buf = new char[strlen(s) + 1];
//		strcpy_s(buf, strlen(s) + 1, s);
//	}
//	String(const String& arg) 
//	{
//		buf = new char[strlen(arg.buf) + 1];
//		strcpy_s(buf, strlen(arg.buf) + 1, arg.buf);
//	}
//	~String() { delete[] buf; }
//	const char* c_str()const { return buf; }
//	const String& operator=(const String& arg)
//	{
//		delete[] buf;
//
//		buf = new char[strlen(arg.buf) + 1];
//		strcpy_s(buf, strlen(arg.buf) + 1, arg.buf);
//		return *this;
//	}
//};
//int main()
//{
//	String s1("hello!");
//
//	cout << s1.c_str() << endl;
//}

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class String
//{
//	char* buf;
//public:
//	String(const char* s)
//	{
//		buf = new char[strlen(s) + 1];
//		strcpy_s(buf, strlen(s) + 1, s);
//	}
//	const char* c_str()const {return buf;}
//};
//int main()
//{
//	String s1("hello!");
//
//	cout << s1.c_str() << endl;
//}