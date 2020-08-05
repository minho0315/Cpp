#include <iostream>
using namespace std;
class Point
{
private:
	int x, y;
public:
	Point(int _x = 0, int _y = 0) :x(_x), y(_y) { cout << "Point() " << endl; }
	~Point() { cout << "~Point()" << endl; }
	void Print() { cout << x << "," << y << endl; }
	int GetX() { return x; }
	int GetY() { return y; }
	void SetX(int _x) { x = _x; }
	void SetY(int _y) { y = _y; }
};
void f1(Point arg)
{
	arg.Print();
}
int main()
{
	Point pt(2, 3);
	f1(pt);
	f1(pt);
	f1(pt);
}

//#include <iostream>
//using namespace std;
//class Point
//{
//private:
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) { cout << "Point() " << endl; }
//	~Point() { cout << "~Point()" << endl; }
//	void Print() { cout << x << "," << y << endl; }
//	int GetX() { return x; }
//	int GetY() { return y; }
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//};
//void f1(Point arg)
//{
//	arg.Print();
//}
//int main()
//{
//	Point pt(2, 3);
//	Point arg(pt);
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//private:
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) { cout << "Point() " << endl; }
//	~Point() { cout << "~Point()" << endl; }
//	void Print() { cout << x << "," << y << endl; }
//	int GetX() { return x; }
//	int GetY() { return y; }
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//};
//void f1(Point* p)
//{
//	p->Print();
//}
//int main()
//{
//	Point pt(2, 3);
//	f1(&pt);
//	cout << "=================" << endl;
//	f1(&pt);
//	cout << "=================" << endl;
//	f1(&pt);
//	cout << "=================" << endl;
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//private:
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) { cout << "Point() " << endl; }
//	~Point() { cout << "~Point()" << endl; }
//	void Print() { cout << x << "," << y << endl; }
//	int GetX() { return x; }
//	int GetY() { return y; }
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//};
//void f1(Point& pt)
//{
//	pt.Print();
//}
//int main()
//{
//	Point pt(2, 3);
//	f1(pt);
//	cout << "=================" << endl;
//	f1(pt);
//	cout << "=================" << endl;
//	f1(pt);
//	cout << "=================" << endl;
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//private:
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) { cout << "Point() " << endl; }
//	~Point() { cout << "~Point()" << endl; }
//	void Print() { cout << x << "," << y << endl; }
//	int GetX() { return x; }
//	int GetY() { return y; }
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//};
//void f1()
//{
//	Point pt(2, 3);
//	pt.Print();
//}
//int main()
//{
//	f1();
//	cout << "=================" << endl;
//	f1();
//	cout << "=================" << endl;
//	f1();
//	cout << "=================" << endl;
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//private:
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) { cout << "Point() " << endl; }
//	~Point() { cout << "~Point()" << endl; }
//	void Print() { cout << x << "," << y << endl; }
//	int GetX() { return x; }
//	int GetY() { return y; }
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//};
//int main()
//{
//	Point pt(2, 3);
//	Point* p = new Point(4, 5);
//	Point* pa = new Point[2];
//	Point arr[2];
//
//
//	pt.Print();
//	p->Print();
//	pa[0].Print();
//	pa[1].Print();
//	arr[0].Print();
//	arr[1].Print();
//
//	delete p;
//	delete[] pa;
//}


//#include <iostream>
//using namespace std;
//class Point
//{
//private:
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) { cout << "Point() " << endl; }
//	~Point() { cout << "~Point()" << endl; }
//	void Print() { cout << x << "," << y << endl; }
//	int GetX() { return x; }
//	int GetY() { return y; }
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//};
//int main()
//{
//	Point pt(2, 3);
//	Point* p = new Point(4, 5);
//	Point* pa = new Point[2];
//
//
//	pt.Print();
//	p->Print();
//	pa[0].Print();
//	pa[1].Print();
//
//	delete p;
//	delete[] pa;
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//private:
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) { cout << "Point() " << endl; }
//	~Point() { cout << "~Point()" << endl; }
//	void Print() { cout << x << "," << y << endl; }
//	int GetX() { return x; }
//	int GetY() { return y; }
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//};
//int main()
//{
//	Point arr[5];
//	Point* pa = new Point[5];
//	Point* parr[5] = { NULL };
//
//	for (int i = 0; i < 5; ++i)
//		parr[i] = new Point(0,0);
//
//	for (int i = 0; i < 5; ++i)
//	{
//		parr[i]->Print();
//	}
//
//	for (int i = 0; i < 5; ++i)
//	{
//		parr[i]->SetX((i + 1) * 100);
//		parr[i]->SetY((i + 1) * 100);
//	}
//	for (int i = 0; i < 5; ++i)
//	{
//		
//		parr[i]->Print();
//	}
//
//	delete[] pa;
//
//	for (int i = 0; i < 5; ++i)
//		delete parr[i];
//
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//private:
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) { cout << "Point() " << endl; }
//	~Point() { cout << "~Point()" << endl; }
//	void Print() { cout << x << "," << y << endl; }
//	int GetX() { return x; }
//	int GetY() { return y; }
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//};
//int main()
//{
//	Point arr[5];
//	Point* pa = new Point[5];
//
//	for (int i = 0; i < 5; ++i)
//	{
//		arr[i].Print();
//		pa[i].Print();
//
//	}
//
//	for (int i = 0; i < 5; ++i)
//	{
//		arr[i].SetX(i + 1);
//		arr[i].SetY(i + 1);
//
//		pa[i].SetX((i + 1) * 10);
//		pa[i].SetY((i + 1) * 10);
//	}
//	for (int i = 0; i < 5; ++i)
//	{
//		arr[i].Print();
//		pa[i].Print();
//	}
//
//	delete [] pa;
//
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//private:
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) { cout << "Point() " << endl; }
//	~Point() { cout << "~Point()" << endl; }
//	void Print() { cout << x << "," << y << endl; }
//	int GetX() { return x; }
//	int GetY() { return y; }
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//};
//int main()
//{
//	Point arr[5];
//
//	for (int i = 0; i < 5; ++i)
//		arr[i].Print();
//
//	for (int i = 0; i < 5; ++i)
//	{
//		arr[i].SetX(i + 1);
//		arr[i].SetY(i + 1);
//	}
//	for (int i = 0; i < 5; ++i)
//		arr[i].Print();
//
//	cout << sizeof(arr) << endl;
//}


//#include <iostream>
//using namespace std;
//class Point
//{
//private:
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	void Print() { cout << x << "," << y << endl; }
//	int GetX() { return x; }
//	int GetY() { return y; }
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//};
//int main()
//{
//	Point arr[5];
//
//	for (int i = 0; i < 5; ++i)
//		arr[i].Print();
//
//	for (int i = 0; i < 5; ++i)
//	{
//		arr[i].SetX(i + 1);
//		arr[i].SetY(i + 1);
//	}
//	for (int i = 0; i < 5; ++i)
//		arr[i].Print();
//
//	cout << sizeof(arr) << endl;
//}


//#include <iostream>
//using namespace std;
//class Point
//{
//private:
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	void Print() { cout << x << "," << y << endl; }
//	int GetX() { return x; }
//	int GetY() { return y; }
//};
//int main()
//{
//	Point pt1;
//
//	pt1.GetX();
//
//	cout << pt1.GetX() << "," << pt1.GetY() << endl;
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	void Print() { cout << x << "," << y << endl; }
//	int GetX() { return x; }
//	int GetY() { return y; }
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//};
//int main()
//{
//	Point pt1;
//	pt1.Print();
//
//	pt1.SetX(10);
//	pt1.Print();
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	void Print() { cout << x << "," << y << endl; }
//};
//int main()
//{
//	Point pt1;
//	Point pt2(2);
//	Point pt3(2,3);
//
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//}

//#include <iostream>
//using namespace std;
//class Test
//{
//public:
//	void PrintThis()
//	{
//		cout << "this: " << this << endl;
//	}
//	Test* GetThis()
//	{
//		return this;
//	}
//	Test GetObject()
//	{
//		return *this;
//	}
//};
//int main()
//{
//	Test t;
//	Test t2;
//	Test t3;
//
//	t.PrintThis();
//	cout << t.GetThis() << endl;
//	cout << &t << endl;
//
//	t2.PrintThis();
//	cout << t2.GetThis() << endl;
//	cout << &t2 << endl;
//
//	t3.PrintThis();
//	cout << t3.GetThis() << endl;
//	cout << &t3 << endl;
//}

//#include <iostream>
//using namespace std;
//class Point //struct == class
//{
//private:
//	int x;
//	int y;
//public:
//
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y)
//	{
//		cout << "Point(int,int)" << endl;
//	}
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	void Print()
//	{
//		cout << this << ":" << this->x << "," << this->y << endl;
//	}
//	void Set(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(3);
//	Point pt3;
//
//	cout << &pt1 << "	"; pt1.Print();
//	cout << &pt2 << "	"; pt2.Print();
//	cout << &pt3 << "	"; pt3.Print();
//}

//#include <iostream>
//using namespace std;
//class Point //struct == class
//{
//private:
//	int x;
//	int y;
//public:
//
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y)
//	{
//		cout << "Point(int,int)" << endl;
//	}
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	void Print()
//	{
//		cout << this << ":" << this->x << "," << this->y << endl;
//	}
//	void Set(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(3);
//	Point pt3;
//
//	pt1.Print(); //Print(&pt1);
//	pt2.Print();
//	pt3.Print();
//
//}

//#include <iostream>
//using namespace std;
//class Point //struct == class
//{
//private:
//	int x;
//	int y;
//public:
//
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y)
//	{
//		cout << "Point(int,int)" << endl;
//	}
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	void Print()
//	{
//		cout << x << "," << y << endl;
//	}
//	void Set(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(3);
//	Point pt3;
//
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//
//}

//#include <iostream>
//using namespace std;
//class Point //struct == class
//{
//private:
//	int x;
//	int y;
//public:
//
//	Point(int _x = 0, int _y = 0):x(_x),y(_y)
//	{
//		x = _x;
//		cout << "Point(int,int)" << endl;
//	}
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	void Print()
//	{
//		cout << x << "," << y << endl;
//	}
//	void Set(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(3);
//	Point pt3;
//
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//}

//#include <iostream>
//using namespace std;
//class Point //struct == class
//{
//private:
//	int x;
//	int y;
//public:
//
//	Point(int _x = 0, int _y = 0) //3개 구현
//	{
//		x = _x;
//		y = _y;
//		cout << "Point(int,int)" << endl;
//	}
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	void Print()
//	{
//		cout << x << "," << y << endl;
//	}
//	void Set(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(3);
//	Point pt3;
//
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//}

//#include <iostream>
//using namespace std;
//class Point //struct == class
//{
//private:
//	int x;
//	int y;
//public:
//	
//	Point(int _x =0, int _y=0) //3개 구현
//	{
//		x = _x;
//		y = _y;
//		cout << "Point(int,int)" << endl;
//	}
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	void Print()
//	{
//		cout << x << "," << y << endl;
//	}
//	void Set(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(3);
//	Point pt3;
//
//	pt1.Print();
//	pt2.Print();
//
//	pt1.Set(0, 0);
//	pt1.Print();
//	pt1.Set(5, 6);
//	pt1.Print();
//}


//#include <iostream>
//using namespace std;
//class Point //struct == class
//{
//private:
//	int x;
//	int y;
//public:
//	Point()
//	{
//		x = 0;
//		y = 0;
//		cout << "Point()" << endl;
//	}
//	Point(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//		cout << "Point(int,int)" << endl;
//	}
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	void Print()
//	{
//		cout << x << "," << y << endl;
//	}
//	void Set(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 4);
//	Point pt3;
//
//	pt1.Print();
//	pt2.Print();
//
//	pt1.Set(0, 0);
//	pt1.Print();
//	pt1.Set(5, 6);
//	pt1.Print();
//}

//#include <iostream>
//using namespace std;
//class Point //struct == class
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//		cout << "Point()" << endl;
//	}
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	void Print()
//	{
//		cout << x << "," << y << endl;
//	}
//	void Set(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 4);
//
//	pt1.Print();
//	pt2.Print();
//
//	pt1.Set(0, 0);
//	pt1.Print();
//	pt1.Set(5, 6);
//	pt1.Print();
//
//
//}


//#include <iostream>
//using namespace std;
//class Point //struct == class
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print()
//	{
//		cout << x << "," << y << endl;
//	}
//	void Set(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 4);
//
//	pt1.Print();
//	pt2.Print();
//
//	pt1.Set(0, 0);
//	pt1.Print();
//	pt1.Set(5, 6);
//	pt1.Print();
//
//
//}

//#include <iostream>
//using namespace std;
//struct Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print()
//	{
//		cout << x << "," << y << endl;
//	}
//	void Set(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 4);
//
//	pt1.Print();
//	pt2.Print();
//
//	pt1.Set(0, 0);
//	pt1.Print();
//	pt1.Set(5, 6);
//	pt1.Print();
//
//
//}

//#include <iostream>
//using namespace std;
//struct Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print()
//	{
//		cout << x << "," << y << endl;
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