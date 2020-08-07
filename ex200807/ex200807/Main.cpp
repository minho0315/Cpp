#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
	void Reset() { x = 0; y = 0; }
	void SetX(int _x) { x = _x; }
	void SetY(int _y) { y = _y; }
	int GetX()const { return x; }
	int GetY()const { return y; }
	void Print()const { cout << x << ',' << y << endl; }
};
////////////////////////////////////////////////
void PrintPoint(const Point& pt)
{
	pt.Print();
}
void PrintArrayPoint(const Point* arr, int size)
{
	for (int i = 0; i < size; ++i)
		arr[i].Print();
}
void ResetArrayPoint(Point arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		arr[i].Reset();
	}
}
int main()
{
	Point* pa = new Point[5];

	PrintArrayPoint(pa, 5);
	ResetArrayPoint(pa, 5);
	PrintArrayPoint(pa, 5);

	delete[] pa;
}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	void Reset() { x = 0; y = 0; }
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//};
//////////////////////////////////////////////////
//void PrintPoint(const Point& pt)
//{
//	pt.Print();
//}
//void PrintArrayPoint(const Point* arr, int size)
//{
//	for (int i = 0; i < size; ++i)
//		arr[i].Print();
//}
//void ResetArrayPoint(Point arr[], int size)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		arr[i].Reset();
//	}
//}
//int main()
//{
//	Point* pa = new Point[5];
//
//	PrintArrayPoint(pa, 5);
//	ResetArrayPoint(pa, 5);
//	PrintArrayPoint(pa, 5);
//
//	delete[] pa;
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	void Reset() { x = 0; y = 0; }
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//};
//////////////////////////////////////////////////
//void PrintPoint(const Point& pt)
//{
//	pt.Print();
//}
//void PrintArrayPoint(const Point* arr, int size)
//{
//	for (int i = 0; i < size; ++i)
//		arr[i].Print();
//}
//void ResetArrayPoint(Point arr[], int size)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		arr[i].Reset();
//	}
//}
//int main()
//{
//	Point* pa = new Point[5];
//
//	PrintArrayPoint(pa, 5);
//
//	delete[] pa;
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	void Reset() { x = 0; y = 0; }
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//};
//////////////////////////////////////////////////
//void PrintPoint(const Point& pt)
//{
//	pt.Print();
//}
//void PrintArrayPoint(const Point* arr, int size)
//{
//	for (int i = 0; i < size; ++i)
//		arr[i].Print();
//}
//void ResetArrayPoint(Point arr[], int size)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		arr[i].Reset();
//	}
//}
//int main()
//{
//	Point arr[5] = { Point(1,1),Point(2,3),Point(3,5) };
//
//	PrintArrayPoint(arr, 5);
//	ResetArrayPoint(arr, 5);
//	PrintArrayPoint(arr, 5);
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//};
//////////////////////////////////////////////////
//void PrintPoint(const Point& pt)
//{
//	pt.Print();
//}
//void PrintArrayPoint(const Point* arr, int size)
//{
//	for (int i = 0; i < size; ++i)
//		arr[i].Print();
//}
//void ResetArrayPoint(Point arr[], int size)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		arr[i].SetX(0);
//		arr[i].SetY(0);
//	}
//}
//int main()
//{
//	Point arr[5] = { Point(1,1),Point(2,3),Point(3,5) };
//
//	PrintArrayPoint(arr, 5);
//	ResetArrayPoint(arr, 5);
//	PrintArrayPoint(arr, 5);
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//};
//////////////////////////////////////////////////
//void PrintPoint(const Point& pt)
//{
//	pt.Print();
//}
//void PrintArrayPoint(const Point* arr, int size)
//{
//	for (int i = 0; i < size; ++i)
//		arr[i].Print();
//}
//int main()
//{
//	Point arr[5] = { Point(1,1),Point(2,3),Point(3,5) };
//
//	PrintArrayPoint(arr, 5);
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//};
//////////////////////////////////////////////////
//void PrintPoint(const Point& pt)
//{
//	pt.Print();
//}
//int main()
//{
//	Point arr[5] = { Point(1,1),Point(2,3),Point(3,5) };
//
//	for (int i = 0; i < 5; ++i)
//		arr[i].Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x=0, int _y=0) :x(_x), y(_y) {}
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//};
//////////////////////////////////////////////////
//void PrintPoint(const Point& pt)
//{
//	pt.Print();
//}
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//
//	PrintPoint(pt1);
//	PrintPoint(pt2);
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point() :x(0), y(0) {}
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//private:
//	void internalF() const
//	{
//		//.....
//	}
//};
//int main()
//{
//	Point pt;
//	const Point cpt;
//
//	pt.Print();
//	cpt.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point() :x(0), y(0) {}
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//private:
//	void internalF() const
//	{
//		//.....
//	}
//};
//int main()
//{
//	Point pt1, pt2;
//
//	pt1.Print();
//	pt2.Print();
//
//	pt1.SetX(2);
//	pt1.SetY(3);
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
//	Point() :x(0), y(0) {}
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	int GetX() { return x; }
//	int GetY() { return y; }
//	void Print() { cout << x << ',' << y << endl; }
//};
//int main()
//{
//	Point pt1, pt2;
//
//	pt1.Print();
//	pt2.Print();
//
//	pt1.SetX(2);
//	pt1.SetY(3);
//	pt1.Print();
//	pt2.Print();
//
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int* px;
//	int* py;
//public:
//	Point(int _x = 0, int _y = 0) :px(NULL), py(NULL)
//	{
//		px = new int(_x);
//		py = new int(_y);
//		cout << "Point(int,int)" << endl;
//	}
//	Point(const Point& arg) :px(NULL), py(NULL)
//	{
//		py = new int(*arg.px);
//		py = new int(*arg.py);
//		cout << "Point(const Point& arg)" << endl;
//	}
//	~Point()
//	{
//		delete px;
//		delete py;
//	}
//	//Point(const Point& arg) :x(arg.x), y(arg.y) { cout << "Point(const Point& arg)" << endl; }
//	void Print() { cout << *px << "," << *py << endl; }
//};
//int main()
//{
//	Point pt1;
//	Point pt2(2, 3);
//	Point pt3(pt1);
//	Point pt4 = pt2;
//	Point pt5;
//
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//	pt4.Print();
//
//	pt5 = pt2;
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int* px;
//	int* py;
//public:
//	Point(int _x = 0, int _y = 0) :px(NULL), py(NULL)
//	{
//		px = new int(_x);
//		py = new int(_y);
//		cout << "Point(int,int)" << endl;
//	}
//	Point(const Point& arg) :px(NULL), py(NULL)
//	{
//		py = new int(*arg.px);
//		py = new int(*arg.py);
//		cout << "Point(const Point& arg)" << endl;
//	}
//	~Point() 
//	{ 
//		delete px;
//		delete py;
//	}
//	//Point(const Point& arg) :x(arg.x), y(arg.y) { cout << "Point(const Point& arg)" << endl; }
//	void Print() { cout << *px << "," << *py << endl; }
//};
//int main()
//{
//	Point pt1;
//	Point pt2(2, 3);
//	Point pt3(pt1);
//	Point pt4 = pt2;
//
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//	pt4.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x;
//	int* py;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), py(NULL)
//	{
//		py = new int(_y);
//		cout << "Point(int,int)" << endl;
//	}
//	Point(const Point& arg):x(arg.x),py(NULL)
//	{
//		int ty = *arg.py;
//		py = new int(ty);
//		cout << "Point(const Point& arg)" << endl;
//	}
//	~Point() { delete py; }
//	//Point(const Point& arg) :x(arg.x), y(arg.y) { cout << "Point(const Point& arg)" << endl; }
//	void Print() { cout << x << "," << *py << endl; }
//};
//int main()
//{
//	Point pt1;
//	Point pt2(2, 3);
//	Point pt3(pt1);
//
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x;
//	int* py;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), py(NULL)
//	{
//		py = new int(_y);
//		cout << "Point(int,int)" << endl;
//	}
//	~Point() { delete py; }
//	//Point(const Point& arg) :x(arg.x), y(arg.y) { cout << "Point(const Point& arg)" << endl; }
//	void Print() { cout << x << "," << *py << endl; }
//};
//int main()
//{
//	Point pt1;
//	Point pt2(2, 3);
//	Point pt3(pt1);
//
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x;
//	int* py;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), py(NULL) 
//	{ 
//		py = new int(_y);
//		cout << "Point(int,int)" << endl; 
//	}
//	~Point() { delete py; }
//	//Point(const Point& arg) :x(arg.x), y(arg.y) { cout << "Point(const Point& arg)" << endl; }
//	void Print() { cout << x << "," << *py << endl; }
//};
//int main()
//{
//	Point pt1;
//	Point pt2(2, 3);
//	//Point pt3(pt1);
//
//	pt1.Print();
//	pt2.Print();
//	//pt3.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) { cout << "Point(int,int)" << endl; }
//	//Point(const Point& arg) :x(arg.x), y(arg.y) { cout << "Point(const Point& arg)" << endl; }
//	void Print() { cout << x << "," << y << endl; }
//};
//int main()
//{
//	Point pt1;
//	Point pt2(2, 3);
//	Point pt3(pt1);
//
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) { cout << "Point(int,int)" << endl; }
//	Point(const Point& arg) :x(arg.x), y(arg.y) { cout << "Point(const Point& arg)" << endl; }
//	void Print() { cout << x << "," << y << endl; }
//};
//int main()
//{
//	Point pt1;
//	Point pt2(2, 3);
//	Point pt3(pt1);
//
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) { cout << "Point(int,int)" << endl; }
//	Point(const Point& arg) { cout << "Point(const Point& arg)" << endl; }
//	void Print() { cout << x << "," << y << endl; }
//};
//int main()
//{
//	Point pt1;
//	Point pt2(2, 3);
//	Point pt3(pt1);
//
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
//	Point(int _x = 0, int _y = 0):x(_x),y(_y){}
//	void Print() { cout << x << "," << y << endl; }
//};
//int main()
//{
//	Point pt1;
//	Point pt2(2, 3);
//
//	pt1.Print();
//	pt2.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Test
//{
//public:
//	//1. Test() {}
//	//2. ~Test() {}
//	//3. Test(const Test& ){}
//	//4. const Test& operator=(const Test& ) {}
//	Test(const char* s) { cout << "Test(const char* s)" << endl; };
//	Test(int data) { cout << "Test(int data)" << endl; }
//	Test(const Test& arg) { cout << "Test(const Test& arg)" << endl; }
//	void Print() { cout << "class Test" << endl; }
//};
//int main()
//{
//	Test t1("ABC"), t2(0);
//	Test t3(t1);
//}

//#include <iostream>
//using namespace std;
//
//class Test
//{
//public:
//	//1. Test() {}
//	//2. ~Test() {}
//	//3. Test(const Test& ){}
//	//4. const Test& operator=(const Test& ) {}
//	void Print() { cout << "class Test" << endl; }
//};
//int main()
//{
//	Test t1, t2;
//
//	t1.Print();
//	t2.Print();
//}