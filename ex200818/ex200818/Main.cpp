#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) :x(x), y(y) {}
	void Print()const { cout << x << ',' << y << endl; }
	const Point& operator++()
	{
		cout << "전위 ++" << endl;
		++x;
		++y;
		return *this;
	}
	const Point& operator++(int)
	{
		cout << "후위 ++" << endl;
		Point prePt(x, y);
		++x;
		++y;
		return prePt;
	}
	int operator[](int idx)const
	{
		return idx == 0 ? x : y;
	}
};
int main()
{
	Point pt1(2, 3);

	cout << pt1[0] << endl; //pt1.operator[](0)
	cout << pt1[1] << endl; //pt1.operator[](1)

}
//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) {}
//	void Print()const { cout << x << ',' << y << endl; }
//	const Point& operator++()
//	{
//		cout << "전위 ++" << endl;
//		++x;
//		++y;
//		return *this;
//	}
//	const Point& operator++(int)
//	{
//		cout << "후위 ++" << endl;
//		Point prePt(x, y);
//		++x;
//		++y;
//		return prePt;
//	}
//	int operator[](int idx)const
//	{
//		return idx == 0 ? x : y;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//
//	cout << pt1[0] << endl; //pt1.operator[](0)
//	cout << pt1[1] << endl; //pt1.operator[](1)
//
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) {}
//	void Print()const { cout << x << ',' << y << endl; }
//	const Point& operator++()
//	{
//		cout << "전위 ++" << endl;
//		++x;
//		++y;
//		return *this;
//	}
//	const Point& operator++(int)
//	{
//		cout << "후위 ++" << endl;
//		Point prePt(x, y);
//		++x;
//		++y;
//		return prePt;
//	}
//	int operator[](int idx)const
//	{
//		return 0;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	
//	cout << pt1[0] << endl; //pt1.operator[](0)
//	cout << pt1[1] << endl; //pt1.operator[](1)
// 
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) {}
//	void Print()const { cout << x << ',' << y << endl; }
//	const Point& operator++()
//	{
//		cout << "전위 ++" << endl;
//		++x;
//		++y;
//		return *this;
//	}
//	const Point& operator++(int)
//	{
//		cout << "후위 ++" << endl;
//		Point prePt(x, y);
//		++x;
//		++y;
//		return prePt;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2;
//
//	pt1.Print();
//	//pt2 = ++pt1; //pt1.operator++();
//	pt2 = pt1++; //pt1.operator++(0);
//	pt1.Print();
//	pt2.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) {}
//	void Print()const { cout << x << ',' << y << endl; }
//	void operator++()
//	{
//		++x;
//		++y;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2;
//
//	pt1.Print();
//	++pt1; //pt1.operator++();
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
//	void Print()const { cout << x << ',' << y << endl; }
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2;
//
//	pt1.Print();
//	++pt1;
//	pt1.Print();
//}


//#include <string>
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class String
//{
//    char* buf;
//public:
//    String(const char* s = "") :buf(NULL)
//    {
//        buf = new char[strlen(s) + 1];
//        strcpy_s(buf, strlen(s) + 1, s);
//    }
//    String(const String& arg) :buf(NULL)
//    {
//        buf = new char[strlen(arg.buf) + 1];
//        strcpy_s(buf, strlen(arg.buf) + 1, arg.buf);
//    }
//    ~String()
//    {
//        delete[] buf;
//    }
//    const char* c_str()const
//    {
//        return buf;
//    }
//    void assign(const String& arg)
//    {
//        delete[] buf;
//        buf = new char[strlen(arg.buf) + 1];
//        strcpy_s(buf, strlen(arg.buf) + 1, arg.buf);
//    }
//    void append(const String& arg)
//    {
//        //delete[] buf
//        char* t = new char[strlen(buf) + strlen(arg.buf) + 1];
//        strcpy_s(t, strlen(buf) + 1, buf);
//        strcat_s(t, strlen(buf) + strlen(arg.buf) + 1, arg.buf);
//        delete[] buf;
//        buf = t;
//
//    }
//    int compare(const String& arg)const
//    {
//        return strcmp(buf, arg.buf); // 1, -1, 0
//    }
//    const String& operator=(const String& arg)
//    {
//        delete[] buf;
//        buf = new char[strlen(arg.buf) + 1];
//        strcpy_s(buf, strlen(arg.buf) + 1, arg.buf);
//
//        return *this;
//    }
//    const String& operator+=(const String& arg)
//    {
//        //delete[] buf
//        char* t = new char[strlen(buf) + strlen(arg.buf) + 1];
//        strcpy_s(t, strlen(buf) + 1, buf);
//        strcat_s(t, strlen(buf) + strlen(arg.buf) + 1, arg.buf);
//        delete[] buf;
//        buf = t;
//
//        return *this;
//    }
//    bool operator==(const String& arg)const
//    {
//        return false;
//    }
//};
//int main()
//{
//    String s1("hello!");
//    String s2("ABC");
//
//    s2 += s1;
//    cout << s2.c_str() << endl;
//
//    if (s1 == s2)
//        cout << "true" << endl;
//    else
//        cout << "false" << endl;
//
//}

//#include <string>
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class String
//{
//   char* buf;
//public:
//   String(const char* s = "") :buf(NULL)
//   {
//      buf = new char[strlen(s) + 1];
//      strcpy_s(buf, strlen(s) + 1, s);
//   }
//   String(const String& arg) :buf(NULL)
//   {
//      buf = new char[strlen(arg.buf) + 1];
//      strcpy_s(buf, strlen(arg.buf) + 1, arg.buf);
//   }
//   ~String()
//   {
//      delete[] buf;
//   }
//   const char* c_str()const
//   {
//      return buf;
//   }
//   void assign(const String& arg)
//   {
//      delete[] buf;
//      buf = new char[strlen(arg.buf) + 1];
//      strcpy_s(buf, strlen(arg.buf) + 1, arg.buf);
//   }
//   void append(const String& arg)
//   {
//      //delete[] buf
//      char* t = new char[strlen(buf) + strlen(arg.buf) + 1];
//      strcpy_s(t, strlen(buf) + 1, buf);
//      strcat_s(t, strlen(buf) + strlen(arg.buf) + 1, arg.buf);
//      delete[] buf;
//      buf = t;
//
//   }
//   int compare(const String& arg)const
//   {
//      return strcmp(buf, arg.buf); // 1, -1, 0
//   }
//   const String& operator=(const String& arg)
//   {
//       delete[] buf;
//       buf = new char[strlen(arg.buf) + 1];
//       strcpy_s(buf, strlen(arg.buf) + 1, arg.buf);
//
//       return *this;
//   }
//};
//int main()
//{
//   String s1("hello!");
//   String s2; 
//
//   s2 = s1; //기본 복사대입 연산자 호출-shallow copy =>  사용자 정의 복사대입연산자-deep copy
//
//   String s3 = s1; //기본 복사생성자 호출-shallow copy => 사용자 정의 복사생성자-deep copy
//
//
//   cout << s1.c_str() << endl;
//   cout << s2.c_str() << endl;
//   cout << s3.c_str() << endl;
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int x;
//	int* py;
//public:
//	Point(int x = 0, int y = 0) :x(x), py(NULL)
//	{
//		py = new int(y);
//	}
//	Point(const Point& arg) :x(arg.x), py(NULL)
//	{
//		py = new int(*arg.py);
//	}
//	~Point()
//	{
//		delete py;
//	}
//	void Print()const { cout << x << ',' << *py << endl; }
//	const Point operator+(const Point& arg)const
//	{
//		Point t(this->x + arg.x, *this->py + *arg.py);
//
//		return t;
//	}
//	const Point& operator=(const Point& arg)
//	{
//		x = arg.x;
//		*py = *arg.py;
//
//		return *this;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 4);
//	Point pt3(5, 7); // pt1.operator+(pt2);
//
//	pt3 = pt2 = pt1; 
//
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//
//}

////////////////////////////////////////////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//class Point
//{
//	int x;
//	int* py;
//public:
//	Point(int x = 0, int y = 0) :x(x), py(NULL)
//	{
//		py = new int(y);
//	}
//	Point(const Point& arg) :x(arg.x), py(NULL)
//	{
//		py = new int(*arg.py);
//	}
//	~Point() 
//	{
//		delete py;
//	}
//	void Print()const { cout << x << ',' << *py << endl; }
//	const Point operator+(const Point& arg)const
//	{
//		Point t(this->x + arg.x, *this->py + *arg.py);
//
//		return t;
//	}
//	void operator=(const Point& arg)
//	{
//		x = arg.x;
//		*py = *arg.py;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 4);
//
//	pt1.Print();
//	pt2.Print();
//	Point pt3 = pt1 + pt2; // pt1.operator+(pt2);
//
//	pt1 + pt2; // pt1.operator=(pt2);
//
//	pt3.Print();
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) { cout << "Point(int, int)" << endl; }
//	void Print()const { cout << x << ',' << y << endl; }
//	const Point operator+(const Point& arg)const
//	{
//		Point t(this->x+arg.x, this->y+arg.y);
//
//		return t;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 4);
//
//	pt1.Print();
//	pt2.Print();
//	Point pt3 = pt1 + pt2; // pt1.operator+(pt2);
//
//	pt3.Print(); 
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int x = 0, int y = 0):x(x),y(y) { cout << "Point(int, int)" << endl; }
//	void Print()const { cout << x << ','<< y << endl; }
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 4);
//
//	pt1.Print();
//	pt2.Print();
//	//Point pt3 = pt1 + pt2;
//
//	//pt3.Print(); // (5,7)
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int x=0, int y=0) { cout << "Point(int, int)" << endl; }
//
//};
//int main()
//{
//	Point t;
//	Point pt1(2, 3);
//
//	//Point pt2(3, 4);
//	//Point pt3 = pt1 + pt2;
//
//	//pt3.Print(); // (5,7)
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point() { cout << "Point()" << endl; }
//	Point(int, int) { cout << "Point(int, int)" << endl; }
//	
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point t;
//
//	//Point pt2(3, 4);
//	//Point pt3 = pt1 + pt2;
//
//	//pt3.Print(); // (5,7)
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y){}
//	void Print()const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point operator+(const Point& arg)const
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 4);
//	Point pt3 = pt1 + pt2;
//
//	pt3.Print(); // (5,7)
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int x;
//	int* py;
//public:
//	Point(int x = 0, int y = 0) : x(x), py(NULL)
//	{
//		py = new int(y);
//	}
//	Point(const Point& arg) : x(arg.x), py(arg.py)
//	{
//		py = new int(*arg.py);
//
//	}
//	~Point() { delete py; }
//	void Print()const
//	{
//		cout << x << "," << *py << endl;
//	}
//	const Point operator+(const Point& arg)const
//	{
//		return Point(x + arg.x, *py + *arg.py);
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 4);
//	Point pt3 = pt1 + pt2;
//
//	pt3.Print(); // (5,7)
//}