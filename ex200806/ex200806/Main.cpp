#include <iostream>
using namespace std;

class Test
{
public:
	Test() { cout << "기본 생성자 호출!" << endl; }
	~Test() { cout << "소멸자 호출!" << endl; }
	Test(const Test& arg) { cout << "복사 생성자 호출!" << endl; }
	const Test& operator=(const Test& arg) { cout << "복사 대입 연산자!" << endl;  return *this; }
};
int main()
{
	//int a = 10;
	//int b = a; // 초기화
	//int c;
	//c = a; //대입

	Test t;
	Test t2 = t;
	Test t3;

	t3 = t;
}

//#include <iostream>
//using namespace std;
//
//class Test
//{
//public:
//	Test() { cout << "기본 생성자 호출!" << endl; }
//	~Test() { cout << "소멸자 호출!" << endl; }
//	Test(const Test& arg) { cout << "복사 생성자 호출!" << endl; }
//	const Test& operator=(const Test& arg) { cout << "복사 대입 연산자!" << endl;  return *this; }
//};
//int main()
//{
//	//int a = 10;
//	//int b = a; // 초기화
//	//int c;
//	//c = a; //대입
//
//	Test t;
//	Test t2 = t;
//	Test t3;
//
//	t3 = t;
//}

//#include <iostream>
//using namespace std;
//
//class Test
//{
//public:
//	Test() { cout << "기본 생성자 호출!" << endl; }
//	~Test() { cout << "소멸자 호출!" << endl; }
//	//Test(const Test& arg) { cout << "복사 생성자 호출!" << endl; }
//
//};
//int main()
//{
//	Test t;
//	Test t2 = t;
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//private:
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	Point(const Point& arg) { this->x = arg.x; this->y = arg.y; }
//	void Print()
//	{
//		cout << x << "," << y << endl;
//	}
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	int GetX() { return x; }
//	int GetY() { return y; }
//};
//int main()
//{
//	Point pt1(2, 3); //int n1 = 10;
//	Point pt2(pt1); //int n2(n1);
//
//	pt1.Print();
//	pt2.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//private:
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	void Print()
//	{
//		cout << x << "," << y << endl;
//	}
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	int GetX() { return x; }
//	int GetY() { return y; }
//};
//int main()
//{
//	Point pt1(2, 3); //int n1 = 10;
//	Point pt2 = pt1; //int n2 = n1;
//
//	pt1.Print();
//	pt2.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//private:
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	void Print()
//	{
//		cout << x << "," << y << endl;
//	}
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	int GetX() { return x; }
//	int GetY() { return y; }
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(4, 5);
//
//	pt1.Print();
//	pt2.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//private:
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	void Print()
//	{
//		cout << x << "," << y << endl;
//	}
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//};
//int main()
//{
//	Point* p = NULL;
//	Point* p2 = NULL;
//
//	p = new Point(2, 3);
//	p2 = new Point(*p);
//
//	p2->SetX(10);
//
//	p->Print();
//	p2->Print();
//
//	delete p;
//	delete p2;
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//private:
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	void Print()
//	{
//		cout << x << "," << y << endl;
//	}
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//};
//int main()
//{
//	Point* p = NULL;
//	Point* p2 = NULL;
//
//	p = new Point(2, 3);
//	p2 = p;
//
//	p2->SetX(10);
//
//	p->Print();
//	p2->Print();
//
//	delete p;
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//private:
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	void Print()
//	{
//		cout << x << "," << y << endl;
//	}
//};
//int main()
//{
//	Point* p = NULL;
//	// 생성, 초기화
//	p = new Point(2, 3);
//
//	p->Print();
//
//	delete p;
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//private:
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	void Print()
//	{
//		cout << x << "," << y << endl;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	
//	pt1.Print();
//}