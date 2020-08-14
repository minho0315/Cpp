#include <iostream>
using namespace std;
class Point
{
	int x;
	int* py;
public:
	Point(int x = 0, int y = 0) : x(x), py(NULL)
	{
		py = new int(y);
	}
	Point(const Point& arg) : x(arg.x), py(arg.py)
	{
		py = new int(*arg.py);

	}
	~Point() { delete py; }
	void Print()const
	{
		cout << x << "," << *py << endl;
	}
	void operator=(const Point& arg)
	{
		x = arg.x;
		*py = *arg.py;
	}
};
int main()
{
	Point pt1(0, 0);
	Point pt2(2, 3);
	Point pt3(pt2);

	pt1 = pt2; //pt1.operator=(pt2);

	pt1.Print();
	pt2.Print();
	pt3.Print();
}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y) {}
//	void Print()const
//	{
//		cout << x << "," << y << endl;
//	}
//	void operator+=(const Point& arg)
//	{
//		x += arg.x;
//		y += arg.y;
//	}
//	void operator=(const Point& arg)
//	{
//		x = arg.x;
//		y = arg.y;
//		cout << "operator=" << endl;
//	}
//};
//int main()
//{
//	Point pt1(0, 0);
//	Point pt2(2, 3);
//
//	pt1 = pt2; //기본 복사 대입 연산자 호출(log)
//	pt1 = pt2; //기본 복사 대입 연산자 호출(log)
//	pt1 = pt2; //기본 복사 대입 연산자 호출(log)
//	pt1.Print();
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y) {}
//	void Print()const
//	{
//		cout << x << "," << y << endl;
//	}
//	void operator+=(const Point& arg)
//	{
//		x += arg.x;
//		y += arg.y;
//	}
//	void operator=(const Point& arg)
//	{
//		x = arg.x;
//		y = arg.y;
//		cout << "operator=" << endl;
//	}
//};
//int main()
//{
//	Point pt1(0, 0);
//	Point pt2(2, 3);
//
//	pt1 = pt2; //기본 복사 대입 연산자 호출(log)
//	pt1 = pt2; //기본 복사 대입 연산자 호출(log)
//	pt1 = pt2; //기본 복사 대입 연산자 호출(log)
//	pt1.Print();
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y) {}
//	void Print()const
//	{
//		cout << x << "," << y << endl;
//	}
//	void operator+=(const Point& arg)
//	{
//		x += arg.x;
//		y += arg.y;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(2, 3);
//
//	//pt1 += pt2; //pt1 = pt1+pt2;
//	pt1.operator+=(pt2);
//	pt1.Print();
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y) {}
//	void Print()const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point operator+(const Point& arg)const
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//	const Point operator-(const Point& arg)const
//	{
//		return Point(x - arg.x, y - arg.y);
//	}
//	bool operator==(const Point& arg)const
//	{
//		return x==arg.x && y==arg.y;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(2, 3);
//
//	if (pt1 == pt2) //pt1.opertator==(pt2)
//		cout << "true" << endl;
//	else
//		cout << "false" << endl;
//
//	const int n1 = 10;
//	const int n2 = 20;
//	int n3 = n1 + n2;
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y) {}
//	void Print()const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& operator+(const Point& arg)
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//	const Point& operator-(const Point& arg)
//	{
//		return Point(x-arg.x, y-arg.y);
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(4, 5);
//
//	Point pt3 = pt1 - pt2; //pt1.operator-(pt2)
//	pt3.Print();
//
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y) {}
//	void Print()const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& operator+(const Point& arg)
//	{
//		return Point(x+arg.x, y+arg.y);
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(4, 5);
//	Point pt3;
//
//	//pt3 = pt1.Add(pt2); //(6,8)
//	pt3 = pt1 + pt2; //(6,8)
//	pt3 = pt1.operator+(pt2); //(6,8)
//	pt3.Print();
//
//	int n1 = 10;
//	int n2 = 20;
//	int n3;
//
//	n3 = n1 + n2;
//
//}

//#include <iostream>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y) {}
//	void Print()const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& Add(const Point& arg)
//	{
//		return Point(0,0);
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(4, 5);
//	Point pt3;
//
//	pt3 = pt1.Add(pt2); //(6,8)
//	pt3.Print();
//
//	int n1 = 10;
//	int n2 = 20;
//	int n3;
//
//	n3 = n1 + n2;
//
//}

//#include <iostream>
//using namespace std;
//
////interface
//struct IPointy
//{
//	virtual int GetPoint()const = 0;
//};
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) {}
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//};
//class Shape
//{
//protected:
//	Point startPt;
//public:
//	Shape(const Point& pt) :startPt(pt) {}
//	virtual ~Shape() {}
//	virtual void Draw()const = 0;
//};
//class Rect : public Shape, public IPointy
//{
//	Point endPt;
//public:
//	Rect(const Point& spt = Point(0, 0), const Point& ept = Point(0, 0)) :Shape(spt), endPt(ept) {}
//	void Draw()const { cout << startPt.GetX() << "," << startPt.GetY() << " - " << endPt.GetX() << "," << endPt.GetY() << " : R" << endl; }
//	int GetPoint()const { return 4; }
//};
//class Circle : public Shape
//{
//	int radius;
//public:
//	Circle(const Point& spt = Point(0, 0), int r = 0) : Shape(spt), radius(r) {}
//	void Draw()const {
//		cout << startPt.GetX() << "," << startPt.GetY() << " - " << radius << " : C" << endl;
//	}
//};
//class Fork : public IPointy
//{
//public:
//	void eat()const { cout << "Fork::eat().." << endl; }
//	int GetPoint()const { return 5; }
//};
//int main()
//{
//	Shape* ps[3] = { new Rect(Point(0,0),Point(2,3)),new Circle(Point(0,0), 5),new Rect(Point(5,5),Point(10,10)) };
//
//	for (int i = 0; i < 3; ++i)
//		ps[i]->Draw();
//
//	for (int i = 0; i < 3; ++i)
//		if (NULL != dynamic_cast<IPointy*>(ps[i]))
//		{
//			cout << i << ":" << dynamic_cast<IPointy*>(ps[i])->GetPoint() << endl;
//		}
//
//	Fork* pf = new Fork;
//	pf->eat();
//	IPointy* iarr[3] = { pf, (Rect*)ps[0], (Rect*)ps[2] };
//	for (int i = 0; i < 3; ++i)
//		cout << "IPointy : " << iarr[i]->GetPoint() << endl;
//
//    delete pf;
//	for (int i = 0; i < 3; ++i)
//		delete ps[i];
//}

//#include <iostream>
//using namespace std;
//
////interface
//struct IPointy
//{
//	virtual int GetPoint()const = 0;
//};
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) {}
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//};
//class Shape
//{
//protected:
//	Point startPt;
//public:
//	Shape(const Point& pt) :startPt(pt) {}
//	virtual ~Shape() {}
//	virtual void Draw()const = 0;
//};
//class Rect : public Shape, public IPointy
//{
//	Point endPt;
//public:
//	Rect(const Point& spt = Point(0, 0), const Point& ept = Point(0, 0)) :Shape(spt), endPt(ept) {}
//	void Draw()const { cout << startPt.GetX() << "," << startPt.GetY() << " - " << endPt.GetX() << "," << endPt.GetY() << " : R" << endl; }
//	int GetPoint()const { return 4; }
//};
//class Circle : public Shape
//{
//	int radius;
//public:
//	Circle(const Point& spt = Point(0, 0), int r = 0) : Shape(spt), radius(r) {}
//	void Draw()const {
//		cout << startPt.GetX() << "," << startPt.GetY() << " - " << radius << " : C" << endl;
//	}
//};
//class Fork : public IPointy
//{
//public:
//	void eat()const { cout << "Fort::eat().." << endl; }
//	int GetPoint()const { return 5; }
//};
//int main()
//{
//	Shape* ps[3] = { new Rect(Point(0,0),Point(2,3)),new Circle(Point(0,0), 5),new Rect(Point(5,5),Point(10,10)) };
//
//	for (int i = 0; i < 3; ++i)
//		ps[i]->Draw();
//
//	IPointy* ip = dynamic_cast<IPointy*>(ps[0]);
//	cout << ip->GetPoint() << endl;
//
//	for (int i = 0; i < 3; ++i)
//		delete ps[i];
//}

//#include <iostream>
//using namespace std;
//
////interface
//struct IPointy
//{
//	virtual int GetPoint()const = 0;
//};
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) {}
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void Print()const { cout << x << ',' << y << endl; }
//};
//class Shape
//{
//protected:
//	Point startPt;
//public:
//	Shape(const Point& pt) :startPt(pt) {}
//	virtual ~Shape() {}
//	virtual void Draw()const = 0;
//};
//class Rect : public Shape, public IPointy
//{
//	Point endPt;
//public:
//	Rect(const Point& spt = Point(0, 0), const Point& ept = Point(0, 0)) :Shape(spt), endPt(ept) {}
//	void Draw()const { cout << startPt.GetX() << "," << startPt.GetY() << " - " << endPt.GetX() << "," << endPt.GetY() << " : R" << endl; }
//	int GetPoint()const { return 4; }
//};
//class Circle : public Shape
//{
//	int radius;
//public:
//	Circle(const Point& spt = Point(0, 0), int r = 0) : Shape(spt), radius(r) {}
//	void Draw()const {
//		cout << startPt.GetX() << "," << startPt.GetY() << " - " << radius << " : C" << endl;
//	}
//};
//class Fork : public IPointy
//{
//public:
//	void eat()const { cout << "Fort::eat().." << endl; }
//	int GetPoint()const { return 5; }
//};
//int main()
//{
//	Shape* ps[3] = { new Rect(Point(0,0),Point(2,3)),new Circle(Point(0,0), 5),new Rect(Point(5,5),Point(10,10)) };
//
//	for (int i = 0; i < 3; ++i)
//		ps[i]->Draw();
//
//	for (int i = 0; i < 3; ++i)
//		delete ps[i];
//}