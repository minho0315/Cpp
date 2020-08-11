//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person
//{
//	string name;
//	int age;
//public:
//	Person(const string& n = " ", int a = 0) :name(n), age(a) { }
//	const string& GetName()const { return name; }
//	int GetAge()const { return age; }
//	void Print()const
//	{
//		cout << "name: " << name << ", " << "age: " << age << endl;
//	}
//};
//class Student
//{
//	string name;
//	int age;
//	int grade;
//public:
//	Student(const string& n=" ", int a =0, int g = 0):name(n),age(a),grade(g){}
//	const string& GetName()const { return name; }
//	int GetAge()const { return age; }
//	int GetGrade()const { return grade; }
//	void Print()const
//	{
//		cout << "name: " << name << ", " << "age: " << age << ", " << "grade: " <<grade << endl;
//	}
//};
//int main()
//{
//	Person p1("홍길동", 22);
//	Person p2("황진이", 23);
//
//	p1.Print();
//	p2.Print();
//
//	Student s1("김학생", 21, 2);
//	Student s2("장길산", 20, 1);
//
//	s1.Print();
//	s2.Print();
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person
//{
//	string name;
//	int age;
//public:
//	Person(const string& n=" ", int a = 0):name(n), age(a){ }
//	const string& GetName()const { return name; }
//	int GetAge()const { return age; }
//	void Print()const
//	{
//		cout << "name: " << name << ", " << "age: " << age << endl;
//	}
//};
//
//int main()
//{
//	Person p1("홍길동", 22);
//	Person p2("황진이", 23);
//
//	p1.Print();
//	p2.Print();
//}

////////////////////////////////////////////////////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//class Array
//{
//	int* buf;
//	int capacity;
//	int sz;
//public:
//	Array(int cap = 100) :buf(NULL), capacity(cap), sz(0)
//	{
//		buf = new int[capacity];
//	}
//	Array(const Array& arg) :buf(NULL), capacity(arg.capacity), sz(arg.sz)
//	{
//		buf = new int[capacity];
//		for (int i = 0; i < sz; ++i)
//			buf[i] = arg.buf[i];
//	}
//	~Array() { delete[] buf; }
//	void push_back(int data)
//	{
//		buf[sz++] = data;
//	}
//	int size()const
//	{
//		return sz;
//	}
//	int at(int idx)const
//	{
//		return buf[idx];
//	}
//	int remove(int idx)
//	{
//
//	}
//};
//
//int main()
//{
//	Array arr(10);
//	arr.push_back(10);
//	arr.push_back(20);
//	arr.push_back(30);
//	arr.push_back(40);
//	arr.push_back(50);
//
//	Array a2 = arr;
//	arr.push_back(60);
//
//	for (unsigned int i = 0; i < a2.size(); ++i)
//		cout << i << " : " << a2.at(i) << endl;
//
//	cout << endl;
//
//	for (unsigned int i = 0; i < arr.size(); ++i)
//		cout << i << " : " << arr.at(i) << endl;
//}

//#include <iostream>
//using namespace std;
//
//class Array
//{
//	int* buf;
//	int capacity;
//	int sz;
//public:
//	Array(int cap = 100):buf(NULL), capacity(cap),sz(0) 
//	{
//		buf = new int[capacity];
//		for (int i = 0; i < capacity; ++i)
//			buf[i] = 0;
//	}
//	~Array() { delete[] buf; }
//	void push_back(int data)
//	{
//		buf[sz++] = data;
//	}
//	int size()const
//	{
//		return sz;
//	}
//	int at(int idx)const
//	{
//		return buf[idx];
//	}
//};
//
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
//	for (unsigned int i = 0; i < arr.size(); ++i)
//		cout << i << " : " << arr.at(i) << endl;
//	/////////////////////////
//	Array arr2(50);
//
//}

//#include <iostream>
//using namespace std;
//
//class Array
//{
//	int buf[1000];
//	int sz;
//public:
//	Array() :sz(0) {}
//	void push_back(int data)
//	{
//		buf[sz++] = data;
//	}
//	int size()const
//	{
//		return sz;
//	}
//	int at(int idx)const
//	{
//		return 0;
//	}
//};
//
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
//	for (unsigned int i = 0; i < arr.size(); ++i)
//		cout << i << " : " << arr.at(i) << endl;
//}

//#include <iostream>
//using namespace std;
//
//class Array
//{
//	int buf[1000];
//	int sz;
//public:
//	Array() :sz(0) {}
//	void push_back(int data)
//	{
//		buf[sz++] = data;
//	}
//	int size()const
//	{
//		return 0;
//	}
//	int at(int idx)const
//	{
//		return 0;
//	}
//};
//
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
//	for (unsigned int i = 0; i < arr.size(); ++i)
//		cout << i << " : " << arr.at(i) << endl;
//}

//#include <iostream>
//using namespace std;
//
//class Array
//{
//public:
//	void push_back(int dat)
//	{
//	}
//	int size()const
//	{
//		return 0;
//	}
//	int at(int idx)const
//	{
//		return 0;
//	}
//};
//
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
//	for (unsigned int i = 0; i < arr.size(); ++i)
//		cout << i << " : " << arr.at(i) << endl;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//typedef vector<int> Array;
//
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
//	for (unsigned int i = 0; i < arr.size(); ++i)
//		cout << i << " : " << arr.at(i) << endl;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//typedef vector<int> Array;
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
//	for (unsigned int i = 0; i < arr.size(); ++i)
//		cout << i << " : " << arr.at(i) << endl;
//}