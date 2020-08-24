#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
		cout << *iter << endl;

	vector<string> vs;
	vs.push_back("aaa");
	vs.push_back("bbbb");
	vs.push_back("12345");
	vs.push_back("ABC");
	vs.push_back("Hello!");

	for (unsigned i = 0; i < vs.size(); ++i)
		cout << vs[i] << endl;
	cout << endl;

	sort(vs.begin(), vs.end(), greater<string>());
	for (unsigned i = 0; i < vs.size(); ++i)
		cout << vs[i] << endl;
	cout << endl;
}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
//		cout << *iter << endl;
//
//	vector<string> vs;
//	vs.push_back("aaa");
//	vs.push_back("bbbb");
//	vs.push_back("12345");
//	vs.push_back("ABC");
//	vs.push_back("Hello!");
//
//	for (unsigned i = 0; i < vs.size(); ++i)
//		cout << vs[i] << endl;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << v[i] << endl;
//
//	vector<string> vs;
//	vs.push_back("aaa");
//	vs.push_back("bbbb");
//	vs.push_back("12345");
//	vs.push_back("ABC");
//	vs.push_back("Hello!");
//
//	for (unsigned i = 0; i < vs.size(); ++i)
//		cout << vs[i] << endl;
//}

//#include <iostream>
//#include <typeinfo>
//using namespace std;
//
//class A
//{
//public:
//	virtual void Print() const {}
//};
//class B1 : public A
//{
//};
//class B2 : public A
//{
//};
//class C : public B1
//{
//};
//int main()
//{
//	A a;
//	B1 b1;
//	B2 b2;
//	C c;
//	/////////////////////////
//	A* pa = &a;
//	cout << typeid(*pa).name() << endl;
//	pa = &b1;
//	cout << typeid(*pa).name() << endl;
//	pa = &b2;
//	cout << typeid(*pa).name() << endl;
//	pa = &c;
//	cout << typeid(*pa).name() << endl;
//
//	pa = &c;////////////////////
//	if (typeid(*pa) == typeid(A))
//		cout << "1. type A" << endl;
//	if (typeid(*pa) == typeid(B1))
//		cout << "2. type B1" << endl;
//	if (typeid(*pa) == typeid(B2))
//		cout << "3. type B2" << endl;
//	if (typeid(*pa) == typeid(C))
//		cout << "4. type C" << endl;
//
//	/////////////////////////////////
//	// 주의
//	B1* pb1 = dynamic_cast<B1*>(pa);
//	if (pb1 != NULL)
//		cout << "B1 type!" << endl;
//
//	B2* pb2 = dynamic_cast<B2*>(pa);
//	if (pb2 != NULL)
//		cout << "B2 type!" << endl;
//}

//#include <iostream>
//#include <typeinfo>
//using namespace std;
//
//class A
//{
//public:
//	virtual void Print() const {}
//};
//class B1 : public A
//{
//};
//class B2 : public A
//{
//};
//class C : public B1
//{
//};
//int main()
//{
//	A a;
//	B1 b1;
//	B2 b2;
//	C c;
//	/////////////////////////
//	A* pa = &a;
//	cout << typeid(*pa).name() << endl;
//	pa = &b1;
//	cout << typeid(*pa).name() << endl;
//	pa = &b2;
//	cout << typeid(*pa).name() << endl;
//	pa = &c;
//	cout << typeid(*pa).name() << endl;
//
//	pa = &b1;
//	if (typeid(*pa) == typeid(A))
//		cout << "1. type A" << endl;
//	if (typeid(*pa) == typeid(B1))
//		cout << "2. type B1" << endl;
//	if (typeid(*pa) == typeid(B2))
//		cout << "3. type B2" << endl;
//	if (typeid(*pa) == typeid(C))
//		cout << "4. type C" << endl;
//}

//#include <iostream>
//#include <typeinfo>
//using namespace std;
//
//class Unit
//{
//protected:
//	int distance;
//public:
//	Unit(int d = 0) :distance(d) { }
//	virtual ~Unit() {}
//	virtual void Move() = 0;
//};
//class Zealot : public Unit
//{
//public:
//	Zealot() :Unit(1) {}
//	void Move() { cout << "Zealot::Move() : " << distance << endl; }
//};
//class Dragoon : public Unit
//{
//	string boundArea;
//public:
//	Dragoon() :Unit(4), boundArea("r 5의 영역 만큼") {}
//	void Move() { cout << "Dragoon::Move() : " << distance << endl; }
//	const string& GetBoundArea()const { return boundArea; }
//};
//int main()
//{
//	Zealot z1;
//	Dragoon d1;
//
//	Unit& ru = z1;
//	ru.Move();
//
//	
//	try {
//		Dragoon& rd = dynamic_cast<Dragoon&>(ru);
//		cout << rd.GetBoundArea() << endl;
//	}
//	catch (exception& e)
//	{
//		cout << e.what() << endl;
//	}
//}

//#include <iostream>
//#include <typeinfo>
//using namespace std;
//
//class Unit
//{
//protected:
//	int distance;
//public:
//	Unit(int d = 0) :distance(d) { }
//	virtual ~Unit() {}
//	virtual void Move() = 0;
//};
//class Zealot : public Unit
//{
//public:
//	Zealot() :Unit(1) {}
//	void Move() { cout << "Zealot::Move() : " << distance << endl; }
//};
//class Dragoon : public Unit
//{
//	string boundArea;
//public:
//	Dragoon() :Unit(4), boundArea("r 5의 영역 만큼") {}
//	void Move() { cout << "Dragoon::Move() : " << distance << endl; }
//	const string& GetBoundArea()const { return boundArea; }
//};
//int main()
//{
//	Zealot z1;
//	Dragoon d1;
//
//	Unit& ru = d1;
//	ru.Move();
//
//	if (typeid(ru) == typeid(Dragoon))
//		cout << static_cast<Dragoon&>(ru).GetBoundArea() << endl;
//}
//
//#include <iostream>
//#include <typeinfo>
//using namespace std;
//
//class Unit
//{
//protected:
//	int distance;
//public:
//	Unit(int d = 0) :distance(d) { }
//	virtual ~Unit() {}
//	virtual void Move() = 0;
//};
//class Zealot : public Unit
//{
//public:
//	Zealot() :Unit(1) {}
//	void Move() { cout << "Zealot::Move() : " << distance << endl; }
//};
//class Dragoon : public Unit
//{
//	string boundArea;
//public:
//	Dragoon() :Unit(4), boundArea("r 5의 영역 만큼") {}
//	void Move() { cout << "Dragoon::Move() : " << distance << endl; }
//	const string& GetBoundArea()const { return boundArea; }
//};
//int main()
//{
//	Zealot z1;
//	Dragoon d1;
//
//	Unit* pu = &z1;
//	Dragoon* pd = dynamic_cast<Dragoon*>(pu);
//	if (pd != NULL)
//		cout << pd->GetBoundArea() << endl;
//
//	pu = &d1;
//	pd = dynamic_cast<Dragoon*>(pu);
//	if (pd != NULL)
//	{
//		cout << "type dragoon" << endl;
//		cout << pd->GetBoundArea() << endl;
//	}
//}

//#include <iostream>
//#include <typeinfo>
//using namespace std;
//
//class Unit
//{
//protected:
//	int distance;
//public:
//	Unit(int d = 0) :distance(d) { }
//	virtual ~Unit() {}
//	virtual void Move() = 0;
//};
//class Zealot : public Unit
//{
//public:
//	Zealot() :Unit(1) {}
//	void Move() { cout << "Zealot::Move() : " << distance << endl; }
//};
//class Dragoon : public Unit
//{
//	string boundArea;
//public:
//	Dragoon() :Unit(4), boundArea("r 5의 영역 만큼") {}
//	void Move() { cout << "Dragoon::Move() : " << distance << endl; }
//	const string& GetBoundArea()const { return boundArea; }
//};
//int main()
//{
//	Zealot z1;
//	Dragoon d1;
//
//	Unit* pu = &z1;
//
//	if (typeid(*pu) == typeid(Zealot))
//		cout << "type zealot" << endl;
//
//	pu = &d1;
//	if (typeid(*pu) == typeid(Dragoon))
//	{
//		cout << "type dragoon" << endl;
//		cout << static_cast<Dragoon*>(pu)->GetBoundArea() << endl;
//	}
//}

//#include <iostream>
//#include <typeinfo>
//using namespace std;
//
//class Unit
//{
//protected:
//	int distance;
//public:
//	Unit(int d = 0) :distance(d) { }
//	virtual ~Unit() {}
//	virtual void Move() = 0;
//};
//class Zealot : public Unit
//{
//public:
//	Zealot() :Unit(1) {}
//	void Move() { cout << "Zealot::Move() : " << distance << endl; }
//};
//class Dragoon : public Unit
//{
//	string boundArea;
//public:
//	Dragoon() :Unit(4), boundArea("r 5의 영역 만큼") {}
//	void Move() { cout << "Dragoon::Move() : " << distance << endl; }
//	const string& GetBoundArea()const { return boundArea; }
//};
//int main()
//{
//	Zealot z1;
//	Dragoon d1;
//	
//	Unit* pu = &z1;
//
//	cout << typeid(pu).name() << endl;
//	cout << typeid(*pu).name() << endl;
//}

//#include <iostream>
//#include <typeinfo>
//using namespace std;
//
//class Unit
//{
//protected:
//	int distance;
//public:
//	Unit(int d = 0) :distance(d) { }
//	virtual ~Unit() {}
//	virtual void Move() = 0;
//};
//class Zealot : public Unit
//{
//public:
//	Zealot() :Unit(1) {}
//	void Move() { cout << "Zealot::Move() : " << distance << endl; }
//};
//class Dragoon : public Unit
//{
//	string boundArea;
//public:
//	Dragoon() :Unit(4), boundArea("r 5의 영역 만큼") {}
//	void Move() { cout << "Dragoon::Move() : " << distance << endl; }
//	const string& GetBoundArea()const { return boundArea; }
//};
//int main()
//{
//	Zealot z1, z2;
//	Dragoon d1, d2;
//
//	const type_info& t1 = typeid(z1);
//	const type_info& t2 = typeid(z2);
//
//	cout << t1.name() << endl;
//	cout << typeid(z1).name() << endl;
//}

//#include <iostream>
//#include <typeinfo>
//using namespace std;
//
//class Unit
//{
//protected:
//	int distance;
//public:
//	Unit(int d = 0) :distance(d) { }
//	virtual ~Unit() {}
//	virtual void Move() = 0;
//};
//class Zealot : public Unit
//{
//public:
//	Zealot() :Unit(1) {}
//	void Move() { cout << "Zealot::Move() : " << distance << endl; }
//};
//class Dragoon : public Unit
//{
//	string boundArea;
//public:
//	Dragoon() :Unit(4), boundArea("r 5의 영역 만큼") {}
//	void Move() { cout << "Dragoon::Move() : " << distance << endl; }
//	const string& GetBoundArea()const { return boundArea; }
//};
//int main()
//{
//	Zealot z1, z2;
//	Dragoon d1, d2;
//
//	const type_info& t1 = typeid(z1);
//	const type_info& t2 = typeid(z2);
//	if ( t1 == t2 )
//		cout << "zealot true" << endl;
//	if (typeid(d2) == typeid(d1))
//		cout << "dragoon true" << endl;
//}

//#include <iostream>
//#include <typeinfo>
//using namespace std;
//
//class Unit
//{
//protected:
//	int distance;
//public:
//	Unit(int d = 0) :distance(d) { }
//	virtual ~Unit() {}
//	virtual void Move() = 0;
//};
//class Zealot : public Unit
//{
//public:
//	Zealot() :Unit(1) {}
//	void Move() { cout << "Zealot::Move() : " << distance << endl; }
//};
//class Dragoon : public Unit
//{
//	string boundArea;
//public:
//	Dragoon() :Unit(4), boundArea("r 5의 영역 만큼") {}
//	void Move() { cout << "Dragoon::Move() : " << distance << endl; }
//	const string& GetBoundArea()const { return boundArea; }
//};
//int main()
//{
//	Zealot z1, z2;
//	Dragoon d1, d2;
//
//	if (typeid(z1) == typeid(z2))
//		cout << "zealot true" << endl;
//	if (typeid(d2) == typeid(d1))
//		cout << "dragoon true" << endl;
//}

//#include <iostream>
//using namespace std;
//
//class Unit
//{
//protected:
//	int distance;
//public:
//	Unit(int d = 0) :distance(d) { }
//	virtual ~Unit() {}
//	virtual void Move() = 0;
//};
//class Zealot : public Unit
//{
//public:
//	Zealot() :Unit(1) {}
//	void Move() { cout << "Zealot::Move() : " << distance << endl; }
//};
//class Dragoon : public Unit
//{
//	string boundArea;
//public:
//	Dragoon() :Unit(4), boundArea("r 5의 영역 만큼") {}
//	void Move() { cout << "Dragoon::Move() : " << distance << endl; }
//	const string& GetBoundArea()const { return boundArea; }
//};
//bool choose_unit()
//{
//	return true;
//}
//int main()
//{
//	Unit* pu = NULL;
//
//	if (choose_unit())
//		pu = new Zealot;
//	else
//		pu = new Dragoon;
//
//	if(pu is Dragoon)//((Dragoon*)pu); // pu type ?
//		cout << static_cast<Dragoon*>(pu)->GetBoundArea() << endl; //pu type? 
//	pu->Move(); // 가상함수:실시간 동적 바인딩
//
//	delete pu; // 비가상함수:컴파일 정적 바인딩 => 가상함수:실시간 동적 바인딩
//}

//#include <iostream>
//using namespace std;
//
//class Unit
//{
//protected:
//	int distance;
//public:
//	Unit(int d = 0):distance(d) { }
//	virtual ~Unit() {}
//	virtual void Move() = 0;
//};
//class Zealot : public Unit
//{
//public:
//	Zealot():Unit(1) {}
//	void Move() { cout << "Zealot::Move() : " << distance << endl; }
//};
//class Dragoon : public Unit
//{
//	string boundArea;
//public:
//	Dragoon() :Unit(4),boundArea("r 5의 영역 만큼") {}
//	void Move() { cout << "Dragoon::Move() : " << distance << endl; }
//	const string& GetBoundArea()const { return boundArea; }
//};
//int main()
//{
//	Unit* pu = new Zealot;
//
//	pu->Move(); // 가상함수:실시간 동적 바인딩
//
//	delete pu; // 비가상함수:컴파일 정적 바인딩 => 가상함수:실시간 동적 바인딩
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int n = 10;
//	double d = 5.5;
//	const int* pn = &n;
//
//	cout << n << ',' << d << *pn << endl;
//
//	n = static_cast<int>(d);
//	int* pm = const_cast<int*>(pn);
//	long* pl = reinterpret_cast<long*>(pm);
//	cout << n << ',' << *pm << ',' << *pl << endl;
//}