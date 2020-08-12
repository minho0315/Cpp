#include <iostream>
#include <string>
using namespace std;

class Unit
{
public:
	virtual void Move() { cout << "Unit::Move()" << endl; } //0x1000
};
class Zealot : public Unit
{
public:
	void Move() { cout << "Zealot::Move()" << endl; } //0x2000
};
class Dragoon : public Unit
{
public:
	void Move() { cout << "Dragoon::Move()" << endl; } //0x3000
};
int main()
{
	Zealot z1;
	Dragoon d1;

	Unit* uarr[5] = { &z1, &z1, &d1, &d1, &z1 };

	//MoveArray(uarr, 5);
	for (int i = 0; i < 5; ++i)
		uarr[i]->Move();
}

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
//	void Move() { cout << "Zealot::Move()" << endl; } //0x2000
//};
//class Dragoon : public Unit
//{
//public:
//	void Move() { cout << "Dragoon::Move()" << endl; } //0x3000
//};
//int main()
//{
//	Unit u1;
//	Zealot z1;
//	Dragoon d1;
//
//	Unit* pu = &z1; // or &d1;
//
//	pu->Move(); //(Ω««‡«— ∞¥√º¿« Move¿« ¡÷º“)();
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Unit
//{
//public:
//	void Move() { cout << "Unit::Move()" << endl; }
//};
//class Zealot : public Unit
//{
//public:
//	void Move() { cout << "Zealot::Move()" << endl; }
//};
//class Dragoon : public Unit
//{
//public:
//	void Move() { cout << "Dragoon::Move()" << endl; }
//};
//int main()
//{
//	Unit u1;
//	Zealot z1;
//	Dragoon d1;
//
//	u1.Move();
//	z1.Move();
//	d1.Move();
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Unit
//{
//public:
//	void Move() { cout << "Unit::Move()" << endl; }
//};
//class Zealot : public Unit
//{
//public:
//	void Move() { cout << "Zealot::Move()" << endl; }
//};
//class Dragoon : public Unit
//{
//public:
//	void Move() { cout << "Dragoon::Move()" << endl; }
//};
//int main()
//{
//	Unit u1;
//	Zealot z1;
//	Dragoon d1;
//
//	u1.Move();
//	z1.Move();
//	d1.Move();
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Unit
//{
//public:
//	void Move() { cout << "Unit::Move()" << endl; }
//};
//class Zealot : public Unit
//{
//
//};
//class Dragoon : public Unit
//{
//
//};
//int main()
//{
//	Unit u1;
//	Zealot z1;
//	Dragoon d1;
//
//	u1.Move();
//	z1.Move();
//	d1.Move();
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x= 0, int y = 0):x(x), y(y) {}
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	void SetX(int x) { this->x = x; }
//	void SetY(int y) { this->y = y; }
//	void Print()const { cout << x << "," << y << endl; }
//};
//class Rect
//{
//	Point start;
//	Point end;
//public:
//	Rect(const Point& s = Point(0, 0), const Point& e = Point(0, 0)) :start(s), end(e) {}
//	Rect(int x1, int y1, int x2, int y2) :start(x1,y1), end(x2,y2){}
//	void Draw()const
//	{
//		cout << start.GetX() << "," << start.GetY() << "-" << end.GetX() << "," << end.GetY() << ":R" << endl;
//	}
//};
//int main()
//{
//	Point p1(2, 3);
//	p1.Print();
//
//	Rect r1(Point(0, 0), Point(100, 100));
//	Rect r2(5, 5, 10, 10);
//
//	r1.Draw();
//	r2.Draw();
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Unit
//{
//
//};
//class Zealot : public Unit
//{
//
//};
//class Dragoon : public Unit
//{
//
//};
//int main()
//{
//	Unit u1;
//	Zealot z1;
//	Dragoon d1;
//
//	Unit* pu = &z1;
//	Unit& ru = z1;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Parent {};
//class Child : public Parent{};
//int main()
//{
//    Child c;
//    Parent* p1 = &c;
//
//    Parent* p2  = new Child;
//    delete p2;
//
//    Child* pc1 = &c;
//    Child* pc2 = new Child;
//    delete pc2;
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
//    void Print()const
//    {
//        cout << "name: " << name << ", " << "age: " << age << endl;
//    }
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
//    Person p1("»´±Êµø", 21);
//    Student s1("»´±Êµø", 21, 1);
//    Professor f1("»´±Êµø", 21, "¡∂±≥ºˆ");
//
//    Person p2 = s1; //X
//    Person& rp = s1; //O
//    Person* pp = &s1;//O
//
//    Student& rs = s1;
//    Student* ps = &s1;
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
//    void Print()const
//    {
//        cout << "name: " << name << ", " << "age: " << age << endl;
//    }
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
//            << "grade: " << GetPosition() << endl;
//    }
//};
//int main()
//{
//    Person p1("»´±Êµø", 21);
//    Student s1("»´±Êµø", 21, 1);
//    Professor f1("»´±Êµø", 21, "¡∂±≥ºˆ");
//
//    p1.Print();
//    s1.Print();
//    f1.Print();
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
//	Person(const string& n = " ", int a = 0) :name(n), age(a) { }
//	const string& GetName()const { return name; }
//	int GetAge()const { return age; }
//	void Print()const
//	{
//		cout << "name: " << name << ", " << "age: " << age << endl;
//	}
//};
//class Student : public Person
//{
//	int grade;
//public:
//	Student(const string& n = " ", int a = 0, int g = 0) :Person(n, a), grade(g) {}
//	int GetGrade()const { return grade; }
//	void Print()const
//	{
//		cout << "name: " << GetName() << ", " << "age: " << GetAge() << ", "
//			<< "grade: " << GetGrade() << endl;
//	}
//};
//class Professor : public Person
//{
//
//};
//int main()
//{
//	Professor pf1;
//
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
//	Person(const string& n = " ", int a = 0) :name(n), age(a) { }
//	const string& GetName()const { return name; }
//	int GetAge()const { return age; }
//	void Print()const
//	{
//		cout << "name: " << name << ", " << "age: " << age << endl;
//	}
//};
//class Student : public Person
//{
//	int grade;
//public:
//	Student(const string& n = " ", int a = 0, int g = 0) :Person(n, a), grade(g) {}
//	int GetGrade()const { return grade; }
//	void Print()const
//	{
//		cout << "name: " << GetName() << ", " << "age: " << GetAge() << ", "
//			<< "grade: " << GetGrade() << endl;
//	}
//};
//int main()
//{
//	Person p1("»´±Êµø", 22);
//	Person p2("»≤¡¯¿Ã", 23);
//	p1.Print();
//	p2.Print();
//
//	Student s1("±Ë«–ª˝", 21, 2);
//	Student s2("¿Â±ÊªÍ", 20, 1);
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
//	Person(const string& n = " ", int a = 0) :name(n), age(a) { }
//	const string& GetName()const { return name; }
//	int GetAge()const { return age; }
//	void Print()const
//	{
//		cout << "name: " << name << ", " << "age: " << age << endl;
//	}
//};
//class Student : public Person
//{
//	int grade;
//public:
//	Student(const string& n = " ", int a = 0, int g = 0) :Person(n,a), grade(g) {}
//	int GetGrade()const { return grade; }
//	void Print()const
//	{
//		cout << "name: " << GetName() << ", " << "age: " << GetAge() << ", " 
//			<< "grade: " << GetGrade() << endl;
//	}
//};
//int main()
//{
//	Person p1("»´±Êµø", 22);
//	Person p2("»≤¡¯¿Ã", 23);
//
//	p1.Print();
//	p2.Print();
//
//	Student s1("±Ë«–ª˝", 21, 2);
//	Student s2("¿Â±ÊªÍ", 20, 1);
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
//	Person p1("»´±Êµø", 22);
//	Person p2("»≤¡¯¿Ã", 23);
//
//	p1.Print();
//	p2.Print();
//
//	Student s1("±Ë«–ª˝", 21, 2);
//	Student s2("¿Â±ÊªÍ", 20, 1);
//
//	s1.Print();
//	s2.Print();
//}