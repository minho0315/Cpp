#include <iostream>
using namespace std;
class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0);
	void Print()const;
	int GetX()const;
	int GetY()const;
};
//////////Point.cpp/////////////////
Point::Point(int x, int y ) :x(x), y(y) {}
void Point::Print()const { cout << x << "," << y << endl; }
int Point::GetX()const { return x; }
int Point::GetY()const { return y; }


int main()
{
	Point pt1(2, 3);
	Point pt2(5, 8);

	pt1.Print();
	pt2.Print();
}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y){}
//	void Print()const { cout << x << "," << y << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(5, 8);
//
//	pt1.Print();
//	pt2.Print();
//}

//#include <string>
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class String
//{
//	char* buf;
//public:
//	String(const char* s = "") :buf(NULL)
//	{
//		buf = new char[strlen(s) + 1];
//		strcpy_s(buf, strlen(s) + 1, s);
//	}
//	String(const String& arg) :buf(NULL)
//	{
//		buf = new char[strlen(arg.buf) + 1];
//		strcpy_s(buf, strlen(arg.buf) + 1, arg.buf);
//	}
//	~String()
//	{
//		delete[] buf;
//	}
//	const char* c_str()const
//	{
//		return buf;
//	}
//	void assign(const String& arg)
//	{
//		delete[] buf;
//		buf = new char[strlen(arg.buf) + 1];
//		strcpy_s(buf, strlen(arg.buf) + 1, arg.buf);
//	}
//	void append(const String& arg)
//	{
//
//		//delete[] buf;
//		char* t = new char[strlen(buf) + strlen(arg.buf) + 1];
//		strcpy_s(t, strlen(buf) + 1, buf);
//		strcat_s(t, strlen(buf) + strlen(arg.buf) + 1, arg.buf);
//		delete[] buf;
//		buf = t;
//	}
//	int compare(const String& arg)const
//	{
//		return strcmp(buf, arg.buf);// -1,0,1
//	}
//};
//int main()
//{
//	String s1("hello!");
//	String s2(s1); //기본 복사생성자 호출 - shallow copy => 사용자 정의 복사생성자 - deep copy
//
//	s2 = s1; //기본 복사대입 연산자 호출 - shallow copy => ||
//
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//
//}

//#include <string>
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class String
//{
//	char* buf;
//public:
//	String(const char* s = "") :buf(NULL)
//	{
//		buf = new char[strlen(s) + 1];
//		strcpy_s(buf, strlen(s) + 1, s);
//	}
//	String(const String& arg) :buf(NULL)
//	{
//		buf = new char[strlen(arg.buf) + 1];
//		strcpy_s(buf, strlen(arg.buf) + 1, arg.buf);
//	}
//	~String()
//	{
//		delete[] buf;
//	}
//	const char* c_str()const
//	{
//		return buf;
//	}
//	void assign(const String& arg)
//	{
//		delete[] buf;
//		buf = new char[strlen(arg.buf) + 1];
//		strcpy_s(buf, strlen(arg.buf) + 1, arg.buf);
//	}
//	void append(const String& arg)
//	{
//
//		//delete[] buf;
//		char* t = new char[strlen(buf) + strlen(arg.buf) + 1];
//		strcpy_s(t, strlen(buf) + 1, buf);
//		strcat_s(t, strlen(buf) + strlen(arg.buf) + 1, arg.buf);
//		delete[] buf;
//		buf = t;
//	}
//	int compare(const String& arg)const
//	{
//		return strcmp(buf, arg.buf);// -1,0,1
//	}
//};
//int main()
//{
//	String s1("hello!");
//	String s2(s1); //기본 복사생성자 호출 - shallow copy => 사용자 정의 복사생성자 - deep copy
//
//	s2 = s1; //기본 복사대입 연산자 호출 - shallow copy => ||
//
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//
//}

//#include <string>
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class String
//{
//	char* buf;
//public:
//	String(const char* s = "") :buf(NULL)
//	{
//		buf = new char[strlen(s) + 1];
//		strcpy_s(buf, strlen(s) + 1, s);
//	}
//	String(const String& arg) :buf(NULL)
//	{
//		buf = new char[strlen(arg.buf) + 1];
//		strcpy_s(buf, strlen(arg.buf) + 1, arg.buf);
//	}
//	~String()
//	{
//		delete[] buf;
//	}
//	const char* c_str()const
//	{
//		return buf;
//	}
//	void assign(const String& arg)
//	{
//		delete[] buf;
//		buf = new char[strlen(arg.buf) + 1];
//		strcpy_s(buf, strlen(arg.buf) + 1, arg.buf);
//	}
//	void append(const String& arg)
//	{
//
//		//delete[] buf;
//		char* t = new char[strlen(buf) + strlen(arg.buf) + 1];
//		strcpy_s(t, strlen(buf) + 1, buf);
//		strcat_s(t, strlen(buf) + strlen(arg.buf) + 1, arg.buf);
//		delete[] buf;
//		buf = t;
//	}
//	int compare(const String& arg)const
//	{
//		return strcmp(buf, arg.buf);// -1,0,1
//	}
//};
//int main()
//{
//	String s1("hello!");
//	String s2(s1); //기본 복사생성자 호출 - shallow copy
//
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//
//}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//#include <string>
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class String
//{
//	char* buf;
//public:
//	String(const char* s = ""):buf(NULL)
//	{
//		buf = new char[strlen(s) + 1];
//		strcpy_s(buf, strlen(s) + 1, s);
//	}
//	~String()
//	{
//		delete[] buf;
//	}
//	const char* c_str()const
//	{
//		return buf;
//	}
//	void assign(const String& arg)
//	{
//		delete[] buf;
//		buf = new char[strlen(arg.buf) + 1];
//		strcpy_s(buf, strlen(arg.buf) + 1, arg.buf);
//	}
//	void append(const String& arg)
//	{
//
//		//delete[] buf;
//		char* t = new char[strlen(buf) + strlen(arg.buf) + 1];
//		strcpy_s(t, strlen(buf) + 1, buf);
//		strcat_s(t, strlen(buf) + strlen(arg.buf) + 1, arg.buf);
//		delete[] buf;
//		buf = t;
//	}
//	int compare(const String& arg)const
//	{
//		return strcmp(buf, arg.buf);// -1,0,1
//	}
//};
//int main()
//{
//	String s1("hello!");
//	String s2("ABC");
//
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//	cout << endl;
//
//	s1.assign(s2);
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//	cout << endl;
//
//	s1.assign("hi~!");
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//	cout << endl;
//
//	s1.append(s2);
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//	cout << endl;
//
//	s1.assign("ABC");
//	if (s1.compare(s2) == 0)
//		cout << "true" << endl;
//	else
//		cout << "false" << endl;
//
//	const char* s = s1.c_str();
//	cout << (void*)s << " : " << s << endl;
//}

//#include <string>
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class String
//{
//	char buf[100];
//public:
//	String(const char* s = "")
//	{
//		strcpy_s(buf, strlen(s) + 1, s);
//	}
//	const char* c_str()const
//	{
//		return buf;
//	}
//	void assign(const String& arg)
//	{
//		*this = arg;
//	}
//	void append(const String& arg)
//	{
//		strcat_s(buf, strlen(buf) + strlen(arg.buf) + 1, arg.buf);
//	}
//	int compare(const String& arg)const
//	{
//		return strcmp(buf, arg.buf);// -1,0,1
//	}
//};
//int main()
//{
//	String s1("hello!");
//	String s2(s1);
//
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//	cout << endl;
//
//	s1.assign(s2);
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//	cout << endl;
//	
//	s1.assign("hi~!");
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//	cout << endl;
//	
//	s1.append(s2);
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//	cout << endl;
//	
//	s1.assign("ABC");
//	if (s1.compare(s2) == 0)
//		cout << "true" << endl;
//	else
//		cout << "false" << endl;
//	
//	const char* s = s1.c_str();
//	cout << (void*)s << " : " << s << endl;
//}

//#include <string>
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class String
//{
//	char buf[100];
//public:
//	String(const char* s = "")
//	{
//		strcpy_s(buf, strlen(s) + 1, s);
//	}
//	const char* c_str()const
//	{
//		return buf;
//	}
//	void assign(const String& arg)
//	{
//		strcpy_s(buf, strlen(arg.buf) + 1, arg.buf);
//	}
//	void append(const String& arg)
//	{
//		strcat_s(buf, strlen(buf) + strlen(arg.buf) + 1, arg.buf);
//	}
//	int compare(const String& arg)const
//	{
//		return strcmp(buf, arg.buf);// -1,0,1
//	}
//};
//int main()
//{
//	String s1("hello!");
//	String s2(s1);
//
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//	cout << endl;
//
//}

//#include <string>
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class String
//{
//	char buf[100];
//public:
//	String(const char* s = "")
//	{
//		strcpy_s(buf, strlen(s) + 1, s);
//	}
//	const char* c_str()const
//	{
//		return buf;
//	}
//	void assign(const String& arg)
//	{
//		strcpy_s(buf, strlen(arg.buf) + 1, arg.buf);
//	}
//	void append(const String& arg)
//	{
//		strcat_s(buf, strlen(buf) + strlen(arg.buf) + 1, arg.buf);
//	}
//	int compare(const String& arg)const
//	{
//		return strcmp(buf, arg.buf);// -1,0,1
//	}
//};
//int main()
//{
//	String s1("hello!");
//	String s2("ABC");
//
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//	cout << endl;
//
//	s1.assign(s2);
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//	cout << endl;
//
//	s1.assign("hi~!");
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//	cout << endl;
//
//	s1.append(s2);
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//	cout << endl;
//
//	s1.assign("ABC");
//	if (s1.compare(s2) == 0)
//		cout << "true" << endl;
//	else
//		cout << "false" << endl;
//
//	const char* s = s1.c_str();
//	cout << (void*)s << " : " << s << endl;
//}

//#include <string>
//#include <iostream>
//using namespace std;
//
//class String
//{
//public:
//	String(const char* s = "")
//	{
//	}
//	const char* c_str()const
//	{
//		return "";
//	}
//	void assign(const String& arg)
//	{
//	}
//	void append(const String& arg)
//	{
//	}
//	int compare(const String& arg) 
//	{
//		return 0;// -1,0,1
//	}
//};
//int main()
//{
//	String s1("hello!");
//	String s2("ABC");
//
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//	cout << endl;
//
//	s1.assign(s2);
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//	cout << endl;
//
//	s1.assign("hi~!");
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//	cout << endl;
//
//	s1.append(s2);
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//	cout << endl;
//
//	s1.assign("ABC");
//	if (s1.compare(s2) == 0)
//		cout << "true" << endl;
//	else
//		cout << "false" << endl;
//
//	const char* s = s1.c_str();
//	cout << (void*)s << " : " << s << endl;
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//#include <string>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	string s1("hello!");
//	string s2("ABC");
//
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//	cout << endl;
//
//	s1.assign(s2);
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//	cout << endl;
//
//	s1.assign("hi~!");
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//	cout << endl;
//
//	s1.append(s2);
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//	cout << endl;
//
//	s1.assign("ABC");
//	if (s1.compare(s2) == 0)
//		cout << "true" << endl;
//	else
//		cout << "false" << endl;
//
//	const char* s = s1.c_str();
//	cout << (void*)s << " : " << s << endl;
//}

//#include <string>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	string s1 = "hello!";
//	string s2 = "ABC";
//
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << endl;
//
//	s1 = s2;
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << endl;
//
//	s1 = "hi~!";
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << endl;
//
//	s1 += s2;
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << endl;
//
//	s1 = "ABC";
//	if (s1 == s2)
//		cout << "true" << endl;
//	else
//		cout << "false" << endl;
//
//	const char* s = s1.c_str();
//	cout << (void*)s << " : " << s << endl;
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int* px;
//	int* py;
//public:
//	Point(int x = 0, int y = 0) :px(NULL), py(NULL)
//	{
//		px = new int(x);
//		py = new int(y);
//		cout << "Point()" << endl;
//	}
//	~Point()
//	{
//		delete px;
//		delete py;
//		cout << "~Point()" << endl;
//	}
//	Point(const Point& arg) :px(NULL), py(NULL)
//	{
//		px = new int(*arg.px);
//		py = new int(*arg.py);
//		cout << "Copy Point()" << endl;
//
//	}
//	void Print() const
//	{
//		cout << *px << ',' << *py << endl;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(pt1);
//
//	pt1.Print();
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int* px;
//	int* py;
//public:
//	Point(int x = 0, int y = 0) :px(NULL), py(NULL)
//	{
//		px = new int(x);
//		py = new int(y);
//		cout << "Point()" << endl;
//	}
//	~Point()
//	{
//		delete px;
//		delete py;
//		cout << "~Point()" << endl;
//	}
//	void Print() const
//	{
//		cout << *px << ',' << *py << endl;
//	}
//};
//void PrintPoint(const Point& arg)
//{
//
//}
//Point temp(0, 0);
//const Point RetPoint()
//{
//
//
//	return temp;
//}
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 4);
//	//Point pt3 = pt1; //(1)
//	//PrintPoint(pt1); //(2)
//	//RetPoint(); //(3)
//
//	pt1.Print();
//	pt2.Print();
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int* px;
//	int* py;
//public:
//	Point(int x = 0, int y = 0) :px(NULL), py(NULL)
//	{
//		px = new int(x);
//		py = new int(y);
//		cout << "Point()" << endl;
//	}
//	~Point()
//	{
//		delete px;
//		delete py;
//		cout << "~Point()" << endl;
//	}
//	void Print() const
//	{
//		cout << *px << ',' << *py << endl;
//	}
//};
//void PrintPoint(const Point& arg)
//{
//
//}
//Point temp(0, 0);
//const Point RetPoint()
//{
//	
//
//	return temp;
//}
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 4);
//	//Point pt3 = pt1; //(1)
//	//PrintPoint(pt1); //(2)
//
//	//RetPoint(); //(3)
//
//	pt1.Print();
//	pt2.Print();
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int* px;
//	int* py;
//public:
//	Point(int x = 0, int y = 0) :px(NULL), py(NULL)
//	{
//		px = new int(x);
//		py = new int(y);
//		cout << "Point()" << endl;
//	}
//	~Point()
//	{
//		delete px;
//		delete py;
//		cout << "~Point()" << endl;
//	}
//	void Print() const
//	{
//		cout << *px << ',' << *py << endl;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 4);
//
//	pt1.Print();
//	pt2.Print();
//}