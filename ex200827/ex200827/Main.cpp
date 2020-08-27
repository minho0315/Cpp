#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

class Point
{
	int x, y;
public:
	explicit Point(int x = 0, int y = 0) : x(x), y(y)
	{
		cout << "Point()" << endl;
	}
	~Point()
	{
		cout << "~Point()" << endl;
	}
	void Print()const { cout << x << ',' << y << endl; }
};
void PrintPoint(shared_ptr<Point> ptr3)
{
	(*ptr3).Print();
}
int main()
{
	shared_ptr<Point> ptr(new Point(2, 3));
	ptr->Print();

	shared_ptr<Point> ptr2 = ptr;
	ptr2->Print();

	PrintPoint(ptr2);
}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	explicit Point(int x = 0, int y = 0) : x(x), y(y)
//	{
//		cout << "Point()" << endl;
//	}
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	void Print()const { cout << x << ',' << y << endl; }
//};
//void PrintPoint(shared_ptr<Point> ptr3)
//{
//	(*ptr3).Print();
//}
//int main()
//{
//	shared_ptr<Point> ptr(new Point(2, 3));
//	ptr->Print();
//
//	shared_ptr<Point> ptr2 = ptr;
//	ptr2->Print();
//
//	PrintPoint(ptr2);
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	explicit Point(int x = 0, int y = 0) : x(x), y(y)
//	{
//		cout << "Point()" << endl;
//	}
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	void Print()const { cout << x << ',' << y << endl; }
//};
//int main()
//{
//	shared_ptr<Point> ptr(new Point(2,3));
//	ptr->Print();
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//using namespace std;
//
//int main()
//{
//	shared_ptr<int> ptr(new int(10));
//	cout << *ptr << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//using namespace std;
//
//int main()
//{
//	int* p = new int[10]{ 1,2,3,4,5 };
//
//	for (auto data : initializer_list<int>(p,p+10) )
//		cout << data << "  ";
//	
//	delete[] p;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//using namespace std;
//
//int main()
//{
//	int* p = new int(10);
//	cout << *p << endl;
//	delete p;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//using namespace std;
//void Print(initializer_list<int> arr)
//{
//	for (auto data : arr)
//		cout << data << " ";
//	cout << endl;
//}
//int main()
//{
//	Print({ 1,2,3,4,5 });
//	Print({ 10, 20, 30 });
//	Print({ 10,20,30,100, 200 });
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//using namespace std;
//
//class TestContainer
//{
//	int buf[5];
//public:
//	TestContainer() :buf{ 21,22,23,24,25 }
//	{
//		for (int i = 0; i < 5; ++i)
//			buf[i] = i;
//	}
//	int* begin() { return buf; }
//	int* end() { return buf + 5; }
//};
//int main()
//{
//	double n = 10;
//	auto m = n;
//
//	cout << n << ',' << m << endl;
//	cout << typeid(n).name() << ',' << typeid(m).name() << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//using namespace std;
//
//class TestContainer
//{
//	int buf[5];
//public:
//	TestContainer() :buf{ 21,22,23,24,25 }
//	{
//		for (int i = 0; i < 5; ++i)
//			buf[i] = i;
//	}
//	int* begin() { return buf; }
//	int* end() { return buf + 5; }
//};
//int main()
//{
//	int a = 0;
//	int b(0);
//	int c{ 0 }; // <= initializer_list 초기화
//	cout << a << ',' << b << ',' << c << endl;
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int data : arr)
//		cout << data << "  ";
//	cout << endl;
//
//	for (int data : initializer_list<int>(arr, arr + 10))
//		cout << data << "  ";
//	cout << endl;
//
//	for (int data : { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 })
//		cout << data << "  ";
//	cout << endl;
//
//	TestContainer tc;
//	for (int& data : tc)
//		data = data + 10;
//
//	for (int data : tc)
//		cout << data << "  ";
//	cout << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//using namespace std;
//
//class TestContainer
//{
//	int buf[5] ;
//public:
//	TestContainer():buf{ 21,22,23,24,25 } 
//	{
//		for (int i = 0; i < 5; ++i)
//			buf[i] = i;
//	}
//	int* begin() { return buf; }
//	int* end() { return buf+5; }
//};
//int main()
//{
//	int a = 0;
//	int b(0);
//	int c{ 0 }; // <= initializer_list 초기화
//	cout << a << ',' << b << ',' << c << endl;
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int data : arr)
//		cout << data << "  ";
//	cout << endl;
//	
//	for (int data : initializer_list<int>(arr, arr + 10))
//		cout << data << "  ";
//	cout << endl;
//	
//	for (int data : { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 })
//		cout << data << "  ";
//	cout << endl;
//
//	TestContainer tc;
//	for (int data : tc)
//		cout << data << "  ";
//	cout << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//using namespace std;
//
//int main()
//{
//	int a = 0;
//	int b(0);
//	int c{ 0 }; // <= initializer_list 초기화
//	cout << a << ',' << b << ',' << c << endl;
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int data : arr)
//		cout << data << "  ";
//	cout << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//using namespace std;
//struct PredTimes
//{
//    int data;
//    PredTimes(int d = 1) :data(d) {}
//    bool operator()(int data)const
//    {
//        return data % this->data == 0;
//    }
//};
//template <typename Iter,typename Func>
//Iter Find_if(Iter bi, Iter ei, Func f)
//{
//    for (; bi != ei; bi++)
//        if (f(*bi))
//            return bi;
//    return ei;
//}
//int main()
//{
//    vector<int> v;
//
//    v.push_back(5);
//    v.push_back(9);
//    v.push_back(3);
//    v.push_back(7);
//    v.push_back(2);
//
//    vector<int>::iterator iter = Find_if(v.begin(), v.end(), PredTimes(3));
//    if (iter != v.end())
//    {
//        cout << *iter << " : 존재!" << endl;
//        v.erase(iter);
//    }
//    PredTimes  even(2);
//    iter = find_if(v.begin(), v.end(), even);
//    if (iter != v.end())
//    {
//        cout << *iter << " : 존재!" << endl;
//        v.erase(iter);
//    }
//
//    for (auto data : v)
//        cout << data << "  ";
//    cout << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//using namespace std;
//struct PredTimes
//{
//    int data;
//    PredTimes(int d = 1) :data(d) {}
//    bool operator()(int data)const
//    {
//        return data % this->data == 0;
//    }
//};
//int main()
//{
//    vector<int> v;
//
//    v.push_back(5);
//    v.push_back(9);
//    v.push_back(3);
//    v.push_back(7);
//    v.push_back(2);
//
//    vector<int>::iterator iter = find_if(v.begin(), v.end(), PredTimes(3));
//    if (iter != v.end())
//    {
//        cout << *iter << " : 존재!" << endl;
//        v.erase(iter);
//    }
//    PredTimes  even(2);
//    iter = find_if(v.begin(), v.end(), even);
//    if (iter != v.end())
//    {
//        cout << *iter << " : 존재!" << endl;
//        v.erase(iter);
//    }
//
//    for (auto data : v)
//        cout << data << "  ";
//    cout << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//using namespace std;
//struct PredTimes
//{
//    int data;
//    PredTimes(int d=1):data(d){}
//    bool operator()(int data)const
//    {
//        return data % this->data == 0;
//    }
//};
//int main()
//{
//    vector<int> v;
//
//    v.push_back(5);
//    v.push_back(9);
//    v.push_back(3);
//    v.push_back(7);
//    v.push_back(2);
//
//    vector<int>::iterator iter = find_if(v.begin(), v.end(), PredTimes(3));
//    if (iter != v.end())
//    {
//        cout << *iter << " : 존재!" << endl;
//        v.erase(iter);
//    }
//    PredTimes  even(2);
//    iter = find_if(v.begin(), v.end(), even);
//    if (iter != v.end())
//    {
//        cout << *iter << " : 존재!" << endl;
//        v.erase(iter);
//    }
//
//    for (auto data : v)
//        cout << data << "  ";
//    cout << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//using namespace std;
//struct PredTimes3
//{
//    bool operator()(int data)const
//    {
//        return data % 3 == 0;
//    }
//};
//int main()
//{
//    vector<int> v;
//
//    v.push_back(5);
//    v.push_back(9);
//    v.push_back(3);
//    v.push_back(7);
//    v.push_back(2);
//
//    vector<int>::iterator iter = find_if(v.begin(), v.end(),PredTimes3() );
//    if (iter != v.end())
//    {
//        cout << *iter << " : 존재!" << endl;
//        v.erase(iter);
//    }
//
//    for (auto data : v)
//        cout << data << "  ";
//    cout << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//using namespace std;
//
//int main()
//{
//    vector<int> v;
//
//    v.push_back(5);
//    v.push_back(8);
//    v.push_back(3);
//    v.push_back(7);
//    v.push_back(2);
//
//    vector<int>::iterator iter = find(v.begin(), v.end(), 3);
//    if (iter != v.end())
//    {
//        cout << *iter << " : 존재!" << endl;
//        v.erase(iter);
//    }
//
//    for (auto data : v)
//        cout << data << "  ";
//    cout << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//using namespace std;
//template <typename T>
//struct Less
//{
//    bool operator()(const T& lhs,const T& rhs)
//    {
//        return lhs < rhs;
//    }
//};
//template <typename T>
//struct Greater
//{
//    bool operator()(const T& lhs, const T& rhs)
//    {
//        return lhs > rhs;
//    }
//};
//int main()
//{
//    vector<int> v;
//
//    v.push_back(5);
//    v.push_back(8);
//    v.push_back(3);
//    v.push_back(7);
//    v.push_back(2);
//
//    //sort(v.begin(), v.end(), less<int>());
//    //sort(v.begin(), v.end(), Less<int>());
//    sort(v.begin(), v.end(), Greater<int>());
//
//    for (int data : v)
//        cout << data << "  ";
//    cout << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//using namespace std;
//
//class Point
//{
//    int x, y;
//public:
//    explicit Point(int x = 0, int y = 0) :x(x), y(y) {}
//    void Print()const { cout << x << ',' << y << " "; }
//    int GetX()const { return x; }
//    int GetY()const { return y; }
//    void SetX(int x) { this->x = x; }
//    void SetY(int y) { this->y = y; }
//    bool operator<(const Point& arg) const
//    {
//        if (x < arg.x)
//            return true;
//        else if (x > arg.x)
//            return false;
//        else
//            return y < arg.y;
//    }
//};
//ostream& operator<<(ostream& o, const Point& pt)
//{
//    o << pt.GetX() << ',' << pt.GetY() << "    ";
//    return o;
//}
//template <typename Iter, typename Func>
//void For_each(Iter bi, Iter ei,
//    Func f)
//{
//    for (; bi != ei; ++bi)
//        f(*bi);
//}
///////////////////////////
//template <typename T>
//struct PrintIter
//{
//    void operator()(const T& arg)const
//    {
//        cout << arg << "\n";
//    }
//};
//int main()
//{
//    vector<Point> v;
//
//    v.push_back(Point(2, 3));
//    v.push_back(Point(4, 5));
//    v.push_back(Point(10, 9));
//    v.push_back(Point(4, 1));
//    v.push_back(Point(5, 7));
//
//    For_each(v.begin(), v.end(), PrintIter<Point>());//user
//    cout << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//using namespace std;
//
//class Point
//{
//    int x, y;
//public:
//    explicit Point(int x = 0, int y = 0) :x(x), y(y) {}
//    void Print()const { cout << x << ',' << y << " "; }
//    int GetX()const { return x; }
//    int GetY()const { return y; }
//    void SetX(int x) { this->x = x; }
//    void SetY(int y) { this->y = y; }
//    bool operator<(const Point& arg) const
//    {
//        if (x < arg.x)
//            return true;
//        else if (x > arg.x)
//            return false;
//        else
//            return y < arg.y;
//    }
//};
//ostream& operator<<(ostream& o, const Point& pt)
//{
//    o << pt.GetX() << ',' << pt.GetY() << "    ";
//    return o;
//}
//struct PointLess
//{
//    bool operator()(const Point& lhs, const Point& rhs)
//    {
//        if (lhs.GetX() < rhs.GetX())
//            return true;
//        else if (lhs.GetX() > rhs.GetX())
//            return false;
//        else
//            return lhs.GetY() < rhs.GetY();
//    }
//};
//template <typename T>
//struct PrintIter
//{
//    void operator()(const T& arg)const
//    {
//        cout << arg << "\n";
//    }
//};
//void Print(const Point& arg)
//{
//    cout << arg << "   ";
//}
//template <typename Iter, typename Func>
//void For_each(Iter bi, Iter ei,
//    Func f)
//{
//    for (; bi != ei; ++bi)
//        f(*bi);
//}
///////////////////////////
//
//int main()
//{
//    vector<Point> v;
//
//    v.push_back(Point(2, 3));
//    v.push_back(Point(4, 5));
//    v.push_back(Point(10, 9));
//    v.push_back(Point(4, 1));
//    v.push_back(Point(5, 7));
//
//    //for_each(v.begin(), v.end(), PrintIter<Point>());//stl
//    int arr[3] = { 1,2,3 };
//    //for_each(arr,arr+3,PrintIter<int>());//stl
//    //For_each(v.begin(), v.end(), Print);//user
//    For_each(v.begin(), v.end(), PrintIter<Point>());//user
//    For_each(arr, arr+3, PrintIter<int>());//user
//    cout << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//using namespace std;
//
//class Point
//{
//    int x, y;
//public:
//    explicit Point(int x = 0, int y = 0) :x(x), y(y) {}
//    void Print()const { cout << x << ',' << y << " "; }
//    int GetX()const { return x; }
//    int GetY()const { return y; }
//    void SetX(int x) { this->x = x; }
//    void SetY(int y) { this->y = y; }
//    bool operator<(const Point& arg) const
//    {
//        if (x < arg.x)
//            return true;
//        else if (x > arg.x)
//            return false;
//        else
//            return y < arg.y;
//    }
//};
//ostream& operator<<(ostream& o, const Point& pt)
//{
//    o << pt.GetX() << ',' << pt.GetY() << "    ";
//    return o;
//}
//struct PointLess
//{
//    bool operator()(const Point& lhs, const Point& rhs)
//    {
//        if (lhs.GetX() < rhs.GetX())
//            return true;
//        else if (lhs.GetX() > rhs.GetX())
//            return false;
//        else
//            return lhs.GetY() < rhs.GetY();
//    }
//};
//template <typename T>
//struct PrintIter
//{
//   void operator()(const T& arg)const
//   {
//      cout << arg << "\n";
//   }
//};
//void Print(const Point& arg)
//{
//    cout << arg << "   ";
//}
//template <typename Func>
//void For_each(vector<Point>::iterator bi, vector<Point>::iterator ei,
//   Func f)
//{
//    for (; bi != ei; ++bi)
//        f(*bi);
//}
///////////////////////////
//
//int main()
//{
//    vector<Point> v;
//
//    v.push_back(Point(2, 3));
//    v.push_back(Point(4, 5));
//    v.push_back(Point(10, 9));
//    v.push_back(Point(4, 1));
//    v.push_back(Point(5, 7));
//
//    //for_each(v.begin(), v.end(), PrintIter<Point>());//stl
//    For_each(v.begin(), v.end(), PrintIter<Point>());//user
//    cout << endl;
//}


//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	explicit Point(int x = 0, int y = 0) :x(x), y(y) {}
//	void Print()const { cout << x << ',' << y << "  "; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void SetX(int x) { this->x = x; }
//	void SetY(int y) { this->y = y; }
//	bool operator<(const Point& arg) const
//	{
//		if (x < arg.x)
//			return true;
//		else if (x > arg.x)
//			return false;
//		else
//			return y < arg.y;
//	}
//};
//ostream& operator()(ostream& o, const Point& pt)
//{
//	o << pt.GetX
//}
//struct PointLess
//{
//	bool operator()(const Point& lhs, const Point& rhs)
//	{
//		if (lhs.GetX() < rhs.GetX())
//			return true;
//		else if (lhs.GetX() > rhs.GetX())
//			return false;
//		else
//			return lhs.GetY() < rhs.GetY();
//	}
//};
////template <typename T>
////struct PrintIter
////{
////	void operator()(const T& arg)const
////	{
////		cout << arg << "   ";
////	}
////};
//void Print(const Point& arg)
//{
//	cout << arg << "   ";
//}
//
//void For_each(vector<Point>::iterator bi, vector<Point>::iterator ei, void (*f)(const Point&))
//{
//	for (; bi != ei; ++bi)
//		f(*bi);
//}
//int main()
//{
//	vector<Point> v;
//
//	v.push_back(Point(2, 3));
//	v.push_back(Point(4, 5));
//	v.push_back(Point(10, 9));
//	v.push_back(Point(4, 1));
//	v.push_back(Point(5, 7));
//
//	//for_each(v.begin(), v.end(), PrintIter<Point>()); // stl
//	For_each(v.begin(), v.end(), PrintIter<Point>()); //user
//	cout << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	explicit Point(int x = 0, int y = 0) :x(x), y(y) {}
//	void Print()const { cout << x << ',' << y << "  "; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void SetX(int x) { this->x = x; }
//	void SetY(int y) { this->y = y; }
//	bool operator<(const Point& arg) const
//	{
//		if (x < arg.x)
//			return true;
//		else if (x > arg.x)
//			return false;
//		else
//			return y < arg.y;
//	}
//};
//ostream& operator()(ostream& o, const Point& pt)
//{
//	o<<pt.GetX
//}
//struct PointLess
//{
//	bool operator()(const Point& lhs, const Point& rhs)
//	{
//		if (lhs.GetX() < rhs.GetX())
//			return true;
//		else if (lhs.GetX() > rhs.GetX())
//			return false;
//		else
//			return lhs.GetY() < rhs.GetY();
//	}
//};
//template <typename T>
//struct PrintIter
//{
//	void operator()(const T& arg)const
//	{
//		cout << arg << "   ";
//	}
//};
//
//void For_each(vector<Point>::iterator bi, vector<Point>::iterator ei, PrintIter<Point> f)
//{
//	for (; bi != ei ; ++bi)
//		f(*bi);
//}
//int main()
//{
//	vector<Point> v;
//
//	v.push_back(Point(2, 3));
//	v.push_back(Point(4, 5));
//	v.push_back(Point(10, 9));
//	v.push_back(Point(4, 1));
//	v.push_back(Point(5, 7));
//
//	//for_each(v.begin(), v.end(), PrintIter<Point>()); // stl
//	For_each(v.begin(), v.end(), PrintIter<Point>()); //user
//	cout << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	explicit Point(int x = 0, int y = 0) :x(x), y(y) {}
//	void Print()const { cout << x << ',' << y << "  "; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void SetX(int x) { this->x = x; }
//	void SetY(int y) { this->y = y; }
//	bool operator<(const Point& arg) const
//	{
//		if (x < arg.x)
//			return true;
//		else if (x > arg.x)
//			return false;
//		else
//			return y < arg.y;
//	}
//};
//ostream& operator()(ostream& o, const Point& pt)
//{
//	o<<pt.GetX
//}
//struct PointLess
//{
//	bool operator()(const Point& lhs, const Point& rhs)
//	{
//		if (lhs.GetX() < rhs.GetX())
//			return true;
//		else if (lhs.GetX() > rhs.GetX())
//			return false;
//		else
//			return lhs.GetY() < rhs.GetY();
//	}
//};
//template <typename T>
//struct PrintIter
//{
//	void operator()(const T& arg)const
//	{
//		cout << arg << "   ";
//	}
//};
//int main()
//{
//	vector<Point> v;
//
//	v.push_back(Point(2, 3));
//	v.push_back(Point(4, 5));
//	v.push_back(Point(10, 9));
//	v.push_back(Point(4, 1));
//	v.push_back(Point(5, 7));
//
//	for_each(v.begin(), v.end(), PrintIter<Point>());
//	cout << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	explicit Point(int x = 0, int y = 0) :x(x), y(y) {}
//	void Print()const { cout << x << ',' << y << "  "; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void SetX(int x) { this->x = x; }
//	void SetY(int y) { this->y = y; }
//	bool operator<(const Point& arg) const
//	{
//		if (x < arg.x)
//			return true;
//		else if (x > arg.x)
//			return false;
//		else
//			return y < arg.y;
//	}
//};
//struct PointLess
//{
//	bool operator()(const Point& lhs, const Point& rhs)
//	{
//		if (lhs.GetX() < rhs.GetX())
//			return true;
//		else if (lhs.GetX() > rhs.GetX())
//			return false;
//		else
//			return lhs.GetY() < rhs.GetY();
//	}
//};
//struct PrintIter
//{
//	void operator()(const Point& arg)const
//	{
//		cout << arg.GetX() << ',' << arg.GetY() << "   ";
//	}
//};
//int main()
//{
//	vector<Point> v;
//
//	v.push_back(Point(2, 3));
//	v.push_back(Point(4, 5));
//	v.push_back(Point(10, 9));
//	v.push_back(Point(4, 1));
//	v.push_back(Point(5, 7));
//
//	for_each(v.begin(), v.end(), PrintIter());
//	cout << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	explicit Point(int x = 0, int y = 0) :x(x), y(y) {}
//	void Print()const { cout << x << ',' << y << "  "; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void SetX(int x) { this->x = x; }
//	void SetY(int y) { this->y = y; }
//	bool operator<(const Point& arg) const
//	{
//		if (x < arg.x)
//			return true;
//		else if (x > arg.x)
//			return false;
//		else
//			return y < arg.y;
//	}
//};
//struct PointLess
//{
//	bool operator()(const Point& lhs, const Point& rhs)
//	{
//		if (lhs.GetX() < rhs.GetX())
//			return true;
//		else if (lhs.GetX() > rhs.GetX())
//			return false;
//		else
//			return lhs.GetY() < rhs.GetY();
//	}
//};
//struct PrintIter
//{
//	void operator()(const Point& arg)const
//	{
//		cout << arg.GetX() << ',' << arg.GetY() << "   ";
//	}
//};
//int main()
//{
//	vector<Point> v;
//
//	v.push_back(Point(2, 3));
//	v.push_back(Point(4, 5));
//	v.push_back(Point(10, 9));
//	v.push_back(Point(4, 1));
//	v.push_back(Point(5, 7));
//
//	for_each(v.begin(), v.end(), PrintIter());
//	cout << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	explicit Point(int x = 0, int y = 0) :x(x), y(y) {}
//	void Print()const { cout << x << ',' << y << "  "; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void SetX(int x) { this->x = x; }
//	void SetY(int y) { this->y = y; }
//	bool operator<(const Point& arg) const
//	{
//		if (x < arg.x)
//			return true;
//		else if (x > arg.x)
//			return false;
//		else
//			return y < arg.y;
//	}
//};
//struct PointLess
//{
//	bool operator()(const Point& lhs, const Point& rhs)
//	{
//		if (lhs.GetX() < rhs.GetX())
//			return true;
//		else if (lhs.GetX() > rhs.GetX())
//			return false;
//		else
//			return lhs.GetY() < rhs.GetY();
//	}
//};
//int main()
//{
//	vector<Point> v;
//
//	v.push_back(Point(2, 3));
//	v.push_back(Point(4, 5));
//	v.push_back(Point(10, 9));
//	v.push_back(Point(4, 1));
//	v.push_back(Point(5, 7));
//
//	for (Point pt : v)
//		pt.Print();
//	cout << endl;
//
//	for (auto pt : v)
//		pt.Print();
//	cout << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	explicit Point(int x = 0, int y = 0) :x(x), y(y) {}
//	void Print()const { cout << x << ',' << y << " "; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void SetX(int x) { this->x = x; }
//	void SetY(int y) { this->y = y; }
//	bool operator<(const Point& arg) const
//	{
//		if (x < arg.x)
//			return true;
//		else if (x > arg.x)
//			return false;
//		else
//			return y < arg.y;
//	}
//};
//struct PointLess
//{
//	bool operator()(const Point& lhs, const Point& rhs)
//	{
//		if (lhs.GetX() < rhs.GetX())
//			return true;
//		else if (lhs.GetX() > rhs.GetX())
//			return false;
//		else
//			return lhs.GetY() < rhs.GetY();
//	}
//};
//int main()
//{
//	vector<Point> v;
//
//	v.push_back(Point(2, 3));
//	v.push_back(Point(4, 5));
//	v.push_back(Point(10, 9));
//	v.push_back(Point(4, 1));
//	v.push_back(Point(5, 7));
//
//	for (vector<Point>::iterator iter = v.begin(); iter != v.end(); ++iter)
//		(*iter).Print();
//	cout << endl;
//
//	sort(v.begin(), v.end(), PointLess());
//
//	for (vector<Point>::iterator iter = v.begin(); iter != v.end(); ++iter)
//		(*iter).Print();
//	cout << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	explicit Point(int x = 0, int y = 0) :x(x), y(y) {}
//	void Print()const { cout << x << ',' << y << " "; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void SetX(int x) { this->x = x; }
//	void SetY(int y) { this->y = y; }
//	bool operator<(const Point& arg) const
//	{
//		if (x < arg.x)
//			return true;
//		else if (x > arg.x)
//			return false;
//		else
//			return y < arg.y;
//	}
//};
//struct PointLess
//{
//	bool operator()(const Point& lhs, const Point& rhs)
//	{
//		if (lhs.GetX() < rhs.GetX())
//			return true;
//		else if (lhs.GetX() > rhs.GetX())
//			return false;
//		else
//			return lhs.GetY() < rhs.GetY();
//	}
//};
//int main()
//{
//	vector<Point> v;
//
//	v.push_back(Point(2, 3));
//	v.push_back(Point(4, 5));
//	v.push_back(Point(10, 9));
//	v.push_back(Point(4, 1));
//	v.push_back(Point(5, 7));
//
//	for (vector<Point>::iterator iter = v.begin(); iter != v.end(); ++iter)
//		(*iter).Print();
//	cout << endl;
//
//	sort(v.begin(), v.end(), PointLess() );
//
//	for (vector<Point>::iterator iter = v.begin(); iter != v.end(); ++iter)
//		(*iter).Print();
//	cout << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	explicit Point(int x = 0, int y = 0) :x(x), y(y) {}
//	void Print()const { cout << x << ',' << y << " "; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void SetX(int x) { this->x = x; }
//	void SetY(int y) { this->y = y; }
//	bool operator<(const Point& arg) const
//	{
//		if (x < arg.x)
//			return true;
//		else if (x > arg.x)
//			return false;
//		else
//			return y < arg.y;
//	}
//};
//int main()
//{
//	vector<Point> v;
//
//	v.push_back(Point(2, 3));
//	v.push_back(Point(4, 5));
//	v.push_back(Point(10, 9));
//	v.push_back(Point(4, 1));
//	v.push_back(Point(5, 7));
//
//	for (vector<Point>::iterator iter = v.begin(); iter != v.end(); ++iter)
//		(*iter).Print();
//	cout << endl;
//
//	sort(v.begin(), v.end());
//
//	for (vector<Point>::iterator iter = v.begin(); iter != v.end(); ++iter)
//		(*iter).Print();
//	cout << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	explicit Point(int x = 0, int y = 0) :x(x), y(y) {}
//	void Print()const { cout << x << ',' << y << " "; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void SetX(int x) { this->x = x; }
//	void SetY(int y) { this->y = y; }
//	bool operator<(const Point& arg) const
//	{
//		return x > arg.x;
//	}
//};
//int main()
//{
//	vector<Point> v;
//
//	v.push_back(Point(2, 3));
//	v.push_back(Point(4, 5));
//	v.push_back(Point(10, 9));
//	v.push_back(Point(4, 1));
//	v.push_back(Point(5, 7));
//
//	for (vector<Point>::iterator iter = v.begin(); iter != v.end(); ++iter)
//		(*iter).Print();
//	cout << endl;
//
//	sort(v.begin(), v.end());
//
//	for (vector<Point>::iterator iter = v.begin(); iter != v.end(); ++iter)
//		(*iter).Print();
//	cout << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	explicit Point(int x = 0, int y = 0) :x(x), y(y) {}
//	void Print()const { cout << x << ',' << y << " "; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void SetX(int x) { this->x = x; }
//	void SetY(int y) { this->y = y; }
//};
//int main()
//{
//	vector<Point> v;
//
//	v.push_back(Point(2, 3));
//	v.push_back(Point(4, 5));
//	v.push_back(Point(10, 9));
//	v.push_back(Point(4, 1));
//	v.push_back(Point(5, 7));
//
//	for (vector<Point>::iterator iter = v.begin(); iter != v.end(); ++iter)
//		(*iter).Print();
//	cout << endl;
//
//	sort(v.begin(), v.end());
//
//	for (vector<Point>::iterator iter = v.begin(); iter != v.end(); ++iter)
//		(*iter).Print();
//	cout << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	explicit Point(int x = 0, int y = 0) :x(x), y(y) {}
//	void Print()const { cout << x << ',' << y << " "; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void SetX(int x) { this->x = x; }
//	void SetY(int y) { this->y = y; }
//};
//int main()
//{
//	vector<Point> v;
//
//	v.push_back(Point(2,3));
//	v.push_back(Point(4, 5));
//	v.push_back(Point(10, 9));
//	v.push_back(Point(4, 1));
//	v.push_back(Point(5, 7));
//
//	for (vector<Point>::iterator iter = v.begin(); iter != v.end(); ++iter)
//		(*iter).Print();
//	cout << endl;
//
//	//sort(v.begin(), v.end());
//	
//	for (vector<Point>::iterator iter = v.begin(); iter != v.end(); ++iter)
//		(*iter).Print();
//	cout << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//
//	v.push_back(100);
//	v.push_back(50);
//	v.push_back(70);
//	v.push_back(10);
//	v.push_back(90);
//
//	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
//	cout << endl;
//
//	int arr[5];
//	copy(v.begin(), v.end(), arr);
//	for (int i = 0; i < 5; ++i)
//		cout << arr[i] << " ";
//	cout << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//
//	v.push_back(100);
//	v.push_back(50);
//	v.push_back(70);
//	v.push_back(10);
//	v.push_back(90);
//
//	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
//	cout << endl;
//
//	sort(v.begin(), v.end());
//
//	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
//	cout << endl;
//}