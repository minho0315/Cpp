#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
using namespace std;

class IM12
{
public:
	virtual void Method1() = 0;
	virtual void Method2() = 0;
};
class TestA : public IM12
{
	//////////////////////
public:
	void Method1() { cout << "TestA::Method1()" << endl; }
	void Method2() { cout << "TestA::Method2()" << endl; }
};
class TestB : public IM12
{
	//////////////////////
public:
	void Method1() { cout << "TestB::Method1()" << endl; }
	void Method2() { cout << "TestB::Method2()" << endl; }
};
///////
TestA a;
TestB b;
IM12* CreatObject()
{
	return rand() % 2 ? (IM12*)&a : (IM12*)&b;
}
int main()
{
	srand(GetTickCount());
	IM12* im = NULL;
	im = CreatObject();
	im->Method1();
	im->Method2();
}

//#include <iostream>
//#include <string>
//#include <vector>
//#include <windows.h>
//using namespace std;
//
//class IM12
//{
//public:
//	virtual void Method1() = 0;
//	virtual void Method2() = 0;
//};
//class TestA : public IM12
//{
//	//////////////////////
//public:
//	void Method1() { cout << "TestA::Method1()" << endl; }
//	void Method2() { cout << "TestA::Method2()" << endl; }
//};
//class TestB : public IM12
//{
//	//////////////////////
//public:
//	void Method1() { cout << "TestB::Method1()" << endl; }
//	void Method2() { cout << "TestB::Method2()" << endl; }
//};
/////////
//TestA a;
//TestB b;
//IM12* CreatObject()
//{
//	return rand() % 2 ? (IM12*)&a : (IM12*)&b;
//}
//int main()
//{
//	srand(GetTickCount());
//	IM12* im = NULL;
//	im = CreatObject();
//	im->Method1();
//	im->Method2();
//}

//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//class Person
//{
//    string name;
//    int age;
//public:
//    Person(const string& n = "", int a = 0) :name(n), age(a) { cout << "Person()" << endl; }
//    virtual ~Person() { cout << "~Person()" << endl; }
//    const string& GetName()const { return name; }
//    int GetAge()const { return age; }
//    virtual void Print()const = 0;
//};
//class Student : public Person
//{
//    int grade;
//public:
//    Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) { cout << "Student()" << endl; }
//    ~Student()
//    {
//        cout << "~Student()" << endl;
//        //부모의 소멸자 호출
//    }
//
//    int GetGrade()const { return grade; }
//    void Print()const
//    {
//        cout << "name: " << GetName() << ", " << "age: " << GetAge() << ", "
//            << "grade: " << GetGrade() << endl;
//    }
//};
//class Professor : public Person
//{
//    string position;
//public:
//    Professor(const string& n = "", int a = 0, const string& pos = "") :Person(n, a), position(pos) { cout << "Professor()" << endl; }
//    ~Professor() { cout << "~Professor()" << endl; }
//
//    const string& GetPosition()const { return position; }
//    void Print()const
//    {
//        cout << "name: " << GetName() << ", " << "age: " << GetAge() << ", "
//            << "position: " << GetPosition() << endl;
//    }
//};
//int main()
//{
//    vector<Person*> v;
//
//    v.push_back(new Student("홍길동", 21, 2));
//    v.push_back(new Professor("성춘향", 23, "조교수"));
//    v.push_back(new Student("임꺽정", 29, 1));
//    v.push_back(new Professor("장길산", 51, "부교수"));
//    v.push_back(new Student("홍길동", 21, 2));
//
//    for (unsigned int i = 0; i < v.size(); ++i)
//        v[i]->Print();
//
//    for (unsigned int i = 0; i < v.size(); ++i)
//        delete v[i];
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person
//{
//    string name;
//    int age;
//public:
//    Person(const string& n = "", int a = 0) :name(n), age(a) { cout << "Person()" << endl; }
//    virtual ~Person() { cout << "~Person()" << endl; }
//    const string& GetName()const { return name; }
//    int GetAge()const { return age; }
//    virtual void Print()const = 0;
//};
//class Student : public Person
//{
//    int grade;
//public:
//    Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) { cout << "Student()" << endl; }
//    ~Student()
//    {
//        cout << "~Student()" << endl;
//        //부모의 소멸자 호출
//    }
//
//    int GetGrade()const { return grade; }
//    void Print()const
//    {
//        cout << "name: " << GetName() << ", " << "age: " << GetAge() << ", "
//            << "grade: " << GetGrade() << endl;
//    }
//};
//class Professor : public Person
//{
//    string position;
//public:
//    Professor(const string& n = "", int a = 0, const string& pos = "") :Person(n, a), position(pos) { cout << "Professor()" << endl; }
//    ~Professor() { cout << "~Professor()" << endl; }
//
//    const string& GetPosition()const { return position; }
//    void Print()const
//    {
//        cout << "name: " << GetName() << ", " << "age: " << GetAge() << ", "
//            << "position: " << GetPosition() << endl;
//    }
//};
//int main()
//{
//    Person* p = new Student("홍길동", 21, 2);
//    p->Print();
//    delete p;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class A
//{
//public:
//	A()
//	{
//		cout << "A()" << endl;
//	}
//	virtual ~A() // 별2개 virtual 소멸자
//	{
//		cout << "~A()" << endl;
//	}
//};
//class B : public A
//{
//public:
//	B()
//	{
//		cout << "B()" << endl;
//	}
//	~B()
//	{
//		cout << "~B()" << endl;
//	}
//};
//class C : public B
//{
//public:
//	C()
//	{
//		cout << "C()" << endl;
//	}
//	~C()
//	{
//		cout << "~C()" << endl;
//	}
//};
//int main()
//{
//	A* pa = new C; //3. or K or B or ....
//	cout << "------------" << endl;
//	delete pa; //4.
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class A
//{
//public:
//	A()
//	{
//		cout << "A()" << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//};
//class B : public A
//{
//public:
//	B()
//	{
//		cout << "B()" << endl;
//	}
//	~B()
//	{
//		cout << "~B()" << endl;
//	}
//};
//class C : public B
//{
//public:
//	C()
//	{
//		cout << "C()" << endl;
//	}
//	~C()
//	{
//		cout << "~C()" << endl;
//	}
//};
//int main()
//{
//	A* pa = new C; //3.
//	cout << "------------" << endl;
//	delete pa;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class A
//{
//public:
//	A()
//	{
//		cout << "A()" << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//};
//class B : public A
//{
//public:
//	B()
//	{
//		cout << "B()" << endl;
//	}
//	~B()
//	{
//		cout << "~B()" << endl;
//	}
//};
//class C : public B
//{
//public:
//	C()
//	{
//		cout << "C()" << endl;
//	}
//	~C()
//	{
//		cout << "~C()" << endl;
//	}
//};
//int main()
//{
//	C* pc = new C; //2.
//	cout << "------------" << endl;
//	delete pc;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class A
//{
//public:
//	A()
//	{
//		cout << "A()" << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//};
//class B : public A
//{
//public:
//	B()
//	{
//		cout << "B()" << endl;
//	}
//	~B()
//	{
//		cout << "~B()" << endl;
//	}
//};
//class C : public B
//{
//public:
//	C()
//	{
//		cout << "C()" << endl;
//	}
//	~C()
//	{
//		cout << "~C()" << endl;
//	}
//};
//int main()
//{
//	C oc; // 1. stack
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person
//{
//    string name;
//    int age;
//public:
//    Person(const string& n = "", int a = 0) :name(n), age(a) { cout << "Person()" << endl; }
//    ~Person() { cout << "~Person()" << endl; }
//
//    const string& GetName()const { return name; }
//    int GetAge()const { return age; }
//    virtual void Print()const = 0;
//};
//class Student : public Person
//{
//    int grade;
//public:
//    Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) { cout << "Student()" << endl; }
//    ~Student()
//    {
//        cout << "~Student()" << endl;
//        //부모의 소멸자 호출
//    }
//
//    int GetGrade()const { return grade; }
//    void Print()const
//    {
//        cout << "name: " << GetName() << ", " << "age: " << GetAge() << ", "
//            << "grade: " << GetGrade() << endl;
//    }
//};
//class Professor : public Person
//{
//    string position;
//public:
//    Professor(const string& n = "", int a = 0, const string& pos = "") :Person(n, a), position(pos) { cout << "Professor()" << endl; }
//    ~Professor() { cout << "~Professor()" << endl; }
//
//    const string& GetPosition()const { return position; }
//    void Print()const
//    {
//        cout << "name: " << GetName() << ", " << "age: " << GetAge() << ", "
//            << "position: " << GetPosition() << endl;
//    }
//};
//int main()
//{
//    Person* p = NULL;
//
//    Student s1("홍길동", 21, 1);
//    Professor f1("홍길동", 21, "조교수");
//
//    p = &f1; //or &s1
//    p->Print();
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person
//{
//    string name;
//    int age;
//public:
//    Person(const string& n = "", int a = 0) :name(n), age(a) { cout << "Person()" << endl; }
//    ~Person(){ cout << "~Person()" << endl; }
//
//    const string& GetName()const { return name; }
//    int GetAge()const { return age; }
//    virtual void Print()const = 0;
//};
//class Student : public Person
//{
//    int grade;
//public:
//    Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) { cout << "Student()" << endl; }
//    ~Student()
//    {
//        cout << "~Student()" << endl;
//        //부모의 소멸자 호출
//    }
//
//    int GetGrade()const { return grade; }
//    void Print()const
//    {
//        cout << "name: " << GetName() << ", " << "age: " << GetAge() << ", "
//            << "grade: " << GetGrade() << endl;
//    }
//};
//class Professor : public Person
//{
//    string position;
//public:
//    Professor(const string& n = "", int a = 0, const string& pos = "") :Person(n, a), position(pos) { cout << "Professor()" << endl; }
//    ~Professor(){ cout << "~Professor()" << endl; }
//
//    const string& GetPosition()const { return position; }
//    void Print()const
//    {
//        cout << "name: " << GetName() << ", " << "age: " << GetAge() << ", "
//            << "position: " << GetPosition() << endl;
//    }
//};
//int main()
//{
//    Person* p = NULL;
//
//    Student s1("홍길동", 21, 1);
//    Professor f1("홍길동", 21, "조교수");
//
//    p = &f1; //or &s1
//    p->Print();
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person
//{
//    string name;
//    int age;
//public:
//    Person(const string& n = "", int a = 0) :name(n), age(a) { }
//    const string& GetName()const { return name; }
//    int GetAge()const { return age; }
//    virtual void Print()const = 0;
//};
//class Student : public Person
//{
//    int grade;
//public:
//    Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) { }
//    int GetGrade()const { return grade; }
//    void Print()const
//    {
//        cout << "name: " << GetName() << ", " << "age: " << GetAge() << ", "
//            << "grade: " << GetGrade() << endl;
//    }
//};
//class Professor : public Person
//{
//    string position;
//public:
//    Professor(const string& n = "", int a = 0, const string& pos = "") :Person(n, a), position(pos) { }
//    const string& GetPosition()const { return position; }
//    void Print()const
//    {
//        cout << "name: " << GetName() << ", " << "age: " << GetAge() << ", "
//            << "position: " << GetPosition() << endl;
//    }
//};
//int main()
//{
//    Person* p = NULL;
//
//    Student s1("홍길동", 21, 1);
//    Professor f1("홍길동", 21, "조교수");
//
//    p = &f1; //or &s1
//    p->Print();
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Point {};
//class Unit
//{
//	Point pos;
//public:
//	virtual void Move() = 0; // 순수 가상 함수
//};
//class Zealot : public Unit
//{
//public:
//	virtual void Move() { cout << "Zealot::Move()" << endl; } //0x2000
//};
//class Dragoon : public Unit
//{
//public:
//	virtual void Move() { cout << "Dragoon::Move()" << endl; } //0x3000
//};
//int main()
//{
//	Unit* uarr[5] = { NULL };
//
//	for (int i = 0; i < 5; ++i)
//	{
//		if (rand() % 2)
//			uarr[i] = new Zealot;
//		else
//			uarr[i] = new Dragoon;
//	}
//
//	for (int i = 0; i < 5; ++i)
//		uarr[i]->Move();
//
//	for (int i = 0; i < 5; ++i)
//		delete uarr[i];
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Unit
//{
//public:
//	virtual void Move() = 0; // 순수 가상 함수
//};
//class Zealot : public Unit
//{
//public:
//	virtual void Move() { cout << "Zealot::Move()" << endl; } //0x2000
//};
//class Dragoon : public Unit
//{
//public:
//	virtual void Move() { cout << "Dragoon::Move()" << endl; } //0x3000
//};
//int main()
//{
//	Unit u1;
//	Zealot z1;
//	Dragoon d1;
//
//	u1.Move();
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Unit
//{
//public:
//	virtual void Move() { cout << "Unit::Move()" << endl; } //0x1000
//};
//class Zealot : public Unit
//{
//public:
//	virtual void Move() { cout << "Zealot::Move()" << endl; } //0x2000
//};
//class Dragoon : public Unit
//{
//public:
//	virtual void Move() { cout << "Dragoon::Move()" << endl; } //0x3000
//};
//int main()
//{
//	Zealot z1;
//	Dragoon d1;
//
//	Unit* pu = &d1; // or &d1
//
//	//pu->Move();
//	pu->Move();
//
//}