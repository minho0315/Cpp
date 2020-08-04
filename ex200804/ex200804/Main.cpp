#include <iostream>
using namespace std;
struct Point
{
private:
	int x;
	int y;
public:
	Point(int _x, int _y)
	{
		x = _x;
		y = _y;
	}
	void Set(int _x, int _y)
	{
		x = _x;
		y = _y;
	}
	void Print()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main() //프로그램 객체
{
	Point pt1(2, 3);
	Point pt2(5, 8);

	pt1.Print();
	pt2.Print();
	///////////////////////////////////////
	Point* p1 = NULL, * p2 = NULL;
	p1 = new Point(10, 20);
	p2 = new Point(20, 40);
	p1->Print();
	p2->Print();
	delete p1;
	delete p2;
}

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
//	void Set(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print()
//	{
//		cout << "(" << x << "," << y << ")" << endl;
//	}
//};
//int main() //프로그램 객체
//{
//	Point pt1(2, 3);
//	Point pt2(5, 8);
//	
//	pt1.Print();
//	pt2.Print();
//	///////////////////////////////////////
//	Point* p1 = NULL, * p2 = NULL;
//	p1 = new Point(10, 20);
//	p2 = new Point(20, 40);
//	p1->Print();
//	p2->Print();
//	delete p1;
//	delete p2;
//}

//#include <iostream>
//using namespace std;
//struct Point
//{
//	int x;
//	int y;
//
//	Point(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//	void Set(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print()
//	{
//		cout << "(" << x << "," << y << ")" << endl;
//	}
//};
//int main() //프로그램 객체
//{
//	Point pt1(2, 3);
//	Point pt2(5, 8);
//
//	pt1.Print();
//	pt2.Print();
//	///////////////////////////////////////
//	Point* p1 = NULL, * p2 = NULL;
//	p1 = new Point(10, 20);
//	p2 = new Point(20, 40);
//	p1->Print();
//	p2->Print();
//	delete p1;
//	delete p2;
//}

//#include <iostream>
//using namespace std;
//struct Point
//{
//	int x;
//	int y;
//
//	Point(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//	void Set(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print()
//	{
//		cout << "(" << x << "," << y << ")" << endl;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(5, 8);
//
//	pt1.Print();
//	pt2.Print();
//
//	Point* p1 = NULL, * p2 = NULL;
//	p1 = new Point(10, 20);
//	p2 = new Point(20, 40);
//	p1->Print();
//	p2->Print();
//	delete p1;
//	delete p2;
//}

//#include <iostream>
//using namespace std;
//struct Point
//{
//	int x;
//	int y;
//
//	Point(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//	void Set(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print()
//	{
//		cout << "(" << x << "," << y << ")" << endl;
//	}
//};
//int main()
//{
//	Point pt1(2, 3);
//	Point pt2(5, 8);
//
//	pt1.Print();
//	pt2.Print();
//
//	Point* p1 = NULL, *p2 = NULL;
//	p1 = new Point(10, 20);
//	p2 = new Point(20, 40);
//	p1->Print();
//	p2->Print();
//	delete p1;
//	delete p2;
//}

//#include <iostream>
//using namespace std;
//struct Point
//{
//	int x;
//	int y;
//
//	Point(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//	void Set(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print()
//	{
//		cout << "(" << x << "," << y << ")" << endl;
//	}
//};
//int main()
//{
//	Point pt(2, 3);
//
//	pt.Print();
//	pt.Set(4, 5);
//	pt.Print();
//
//	Point pt2(5, 8);
//	pt2.Print();
//}

//#include <iostream>
//using namespace std;
//struct Point
//{
//	int x;
//	int y;
//
//	Point(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//	void Set(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print()
//	{
//		cout << "(" << x << "," << y << ")" << endl;
//	}
//};
//int main()
//{
//	Point pt(2,3);
//
//	pt.Print();
//	pt.Set(4, 5);
//	pt.Print();
//}

//#include <iostream>
//using namespace std;
//struct Point
//{
//	int x;
//	int y;
//
//	void Set(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print()
//	{
//		cout << "(" << x << "," << y << ")" << endl;
//	}
//};
//int main()
//{
//	Point pt = { 2,3 };
//
//	pt.Print();
//	pt.Set(4, 5);
//	pt.Print();
//}

//#include <iostream>
//using namespace std;
//struct Point
//{
//	int x;
//	int y;
//
//};
//void SetPoint(Point& pt, int x, int y)
//{
//	pt.x = x;
//	pt.y = y;
//}
//void PrintPoint(const Point& pt)
//{
//	cout << "(" << pt.x << ","<< pt.y << ")" << endl;
//}
//int main()
//{
//	Point pt = { 2,3 };
//
//	PrintPoint(pt);
//	SetPoint(pt, 4, 5);
//	PrintPoint(pt);
//}

//#include <iostream>
//using namespace std;
//struct Test
//{
//	int t;
//	Test()
//	{
//		t = 0;
//		cout << "Test()" << endl;
//	}
//	~Test()
//	{
//		cout << "~Test()" << endl;
//	}
//	void SetT(int data)
//	{
//		t = data;
//	}
//	void Print()
//	{
//		cout << t << endl;
//	}
//};
//int main()
//{
//	Test* pt = new Test();
//
//	pt->SetT(100);
//	pt->Print();
//	delete pt;
//
//	Test t1;
//	Test* pt2 = &t1;
//	pt2->SetT(200);
//	pt2->Print();
//}

//#include <iostream>
//using namespace std;
//struct Test
//{
//	int t;
//	Test()
//	{
//		t = 0;
//		cout << "Test()" << endl;
//	}
//	~Test()
//	{
//		cout << "~Test()" << endl;
//	}
//	void SetT(int data)
//	{
//		t = data;
//	}
//	void Print()
//	{
//		cout << t << endl;
//	}
//};
//int main()
//{
//	Test* pt = new Test();
//
//	pt->SetT(100);
//	pt->Print();
//	delete pt;
//
//	Test t1;
//	t1.SetT(200);
//	t1.Print();
//
//}

//#include <iostream>
//using namespace std;
//struct Test
//{
//	int t;
//	Test()
//	{
//		t = 0;
//		cout << "Test()" << endl;
//	}
//	~Test()
//	{
//		cout << "~Test()" << endl;
//	}
//	void SetT(int data)
//	{
//		t = data;
//	}
//	void Print()
//	{
//		cout << t << endl;
//	}
//};
//int main()
//{
//	Test* pt = new Test();
//
//	pt->SetT(100);
//	//cout << pt->t << endl;
//	pt->Print();
//	delete pt;
//}

//#include <iostream>
//using namespace std;
//struct Test
//{
//	int t;
//	Test()
//	{
//		t = 0;
//		cout << "Test()" << endl;
//	}
//	~Test()
//	{
//		cout << "~Test()" << endl;
//	}
//};
//int main()
//{
//	Test* pt = new Test();
//
//	delete pt;
//}

//#include <iostream>
//using namespace std;
//struct Test
//{
//	int t;
//	Test()
//	{
//		t = 0;
//		cout << "Test()" << endl;
//	}
//	~Test()
//	{
//		cout << "~Test()" << endl;
//	}
//};
//int main()
//{
//	Test t1;
//	Test* pt = &t1;
//
//
//}

//#include <iostream>
//using namespace std;
//struct Test
//{
//	int t;
//	Test()
//	{
//		t = 0;
//		cout << "Test()" << endl;
//	}
//	~Test()
//	{
//		cout << "~Test()" << endl;
//	}
//};
//int main()
//{
//	Test t1;
//	Test t2;
//	Test t3, t4, t5;
//}


//#include <iostream>
//using namespace std;
//
//struct Stack
//{
//	int stack[100];
//	int top = 0;
//
//	Stack() //생성자:constructor
//	{
//		top = 0;
//		cout << "stack 초기화!" << endl;
//	}
//	~Stack()//소멸자:destructor
//	{
//		top = 0;
//		cout << "stack 마무리!" << endl;
//
//	}
//	void Push(int data)
//	{
//		stack[top++] = data;
//	}
//	int Pop()
//	{
//		return stack[--top];
//	}
//};
//int main()
//{
//	Stack st1;
//	Stack st2;
//	Stack st3;
//}

//#include <iostream>
//using namespace std;
//
//struct Stack
//{
//	int stack[100];
//	int top = 0;
//
//	Stack()
//	{
//		top = 0;
//		cout << "stack 초기화!" << endl;
//	}
//	~Stack()
//	{
//		top = 0;
//		cout << "stack 마무리!" << endl;
//
//	}
//	void Push(int data)
//	{
//		stack[top++] = data;
//	}
//	int Pop()
//	{
//		return stack[--top];
//	}
//};
//int main()
//{
//	Stack st1;
//	Stack st2;
//	Stack st3;
//}

//#include <iostream>
//using namespace std;
//
//struct Stack
//{
//	int stack[100];
//	int top = 0;
//	
//	void InitStack()
//	{
//		top = 0;
//		cout << "stack 초기화!" << endl;
//	}
//	void UninitStack()
//	{
//		top = 0;
//		cout << "stack 마무리!" << endl;
//
//	}
//	void Push(int data)
//	{
//		stack[top++] = data;
//	}
//	int Pop()
//	{
//		return stack[--top];
//	}
//};
//int main()
//{
//	Stack st1;
//	Stack st2;
//	Stack st3;
//
//	st1.InitStack();
//	st1.UninitStack();
//
//	st2.InitStack();
//	st2.UninitStack();
//
//	st3.InitStack();
//	st3.UninitStack();
//}

//#include <iostream>
//using namespace std;
//
//struct Stack
//{
//	int stack[100];
//	int top = 0;
//	
//	void InitStack()
//	{
//		top = 0;
//	}
//	void UninitStack()
//	{
//		top = 0;
//	}
//	void Push(int data)
//	{
//		stack[top++] = data;
//	}
//	int Pop()
//	{
//		return stack[--top];
//	}
//};
//int main()
//{
//	Stack st;
//
//	st.InitStack();
//
//	st.Push(10);
//	st.Push(20);
//	st.Push(30);
//
//	cout << st.Pop() << endl;
//	cout << st.Pop() << endl;
//	cout << st.Pop() << endl;
//
//	st.UninitStack();
//
//	Stack stk;
//	stk.InitStack();
//	stk.Push(100);
//	cout << stk.Pop() << endl;
//	stk.UninitStack();
//}

//#include <iostream>
//using namespace std;
//
//struct Stack
//{
//	int stack[100];
//	int top = 0;
//};
//void InitStack(Stack& st)
//{
//	st.top = 0;
//}
//void UninitStack(Stack& st)
//{
//	st.top = 0;
//}
//void Push(Stack& st, int data)
//{
//	st.stack[st.top++] = data;
//}
//int Pop(Stack& st)
//{
//	return st.stack[--st.top];
//}
//int main()
//{
//	Stack st;
//
//	InitStack(st);
//
//	Push(st, 10);
//	Push(st, 20);
//	Push(st, 30);
//
//	cout << Pop(st) << endl;
//	cout << Pop(st) << endl;
//	cout << Pop(st) << endl;
//
//	UninitStack(st);
//
//	Stack stk;
//	InitStack(stk);
//	Push(stk, 100);
//	cout << Pop(stk) << endl;
//	UninitStack(stk);
//}

//#include <iostream>
//using namespace std;
//
//struct Stack
//{
//	int stack[100];
//	int top = 0;
//};
//void InitStack(Stack& st)
//{
//	st.top = 0;
//}
//void UninitStack(Stack& st)
//{
//	st.top = 0;
//}
//void Push(Stack& st, int data)
//{
//	st.stack[st.top++] = data;
//}
//int Pop(Stack& st)
//{
//	return st.stack[--st.top];
//}
//int main()
//{
//	Stack st;
//
//	InitStack(st);
//
//	Push(st, 10);
//	Push(st, 20);
//	Push(st, 30);
//
//	cout << Pop(st) << endl;
//	cout << Pop(st) << endl;
//	cout << Pop(st) << endl;
//
//	UninitStack(st);
//}

//#include <iostream>
//using namespace std;
//
//void InitStack(int stack[], int& top)
//{
//	top = 0;
//}
//void UninitStack(int stack[], int& top)
//{
//	top = 0;
//}
//void Push(int stack[], int& top, int data)
//{
//	stack[top++] = data;
//}
//int Pop(int stack[], int& top)
//{
//	return stack[--top];
//}
//int main()
//{
//	int stack[100];
//	int top = 0;
//
//	InitStack(stack, top);
//
//	Push(stack, top, 10);
//	Push(stack, top, 20);
//	Push(stack, top, 30);
//
//	cout << Pop(stack, top) << endl;
//	cout << Pop(stack, top) << endl;
//	cout << Pop(stack, top) << endl;
//
//	UninitStack(stack, top);
//}