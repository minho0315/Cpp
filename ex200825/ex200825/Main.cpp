#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int data)
{
    return data == 90;
}
int main()
{

    vector<int> v;

    v.push_back(50);
    v.push_back(90);
    v.push_back(20);
    v.push_back(100);
    v.push_back(10);

    vector<int>::iterator iter;
    iter = find_if(v.begin(), v.end(), Pred);
    cout << *iter << endl;

    vector<int>::reverse_iterator riter;
    riter = find_if(v.rbegin(), v.rend(), Pred);
    cout << *riter << endl;

}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//bool Pred(int data)
//{
//    return data > 50;
//}
//int main()
//{
//
//    vector<int> v;
//
//    v.push_back(50);
//    v.push_back(90);
//    v.push_back(20);
//    v.push_back(100);
//    v.push_back(10);
//
//    vector<int>::iterator iter;
//    iter = find_if(v.begin(), v.end(), Pred);
//    cout << *iter << endl;
//
//    vector<int>::reverse_iterator riter;
//    riter = find_if(v.rbegin(), v.rend(), Pred);
//    cout << *riter << endl;
//
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//
//    vector<int> v;
//
//    v.push_back(50);
//    v.push_back(90);
//    v.push_back(20);
//
//
//    for (vector<int>::reverse_iterator iter = v.rbegin(); iter != v.rend(); ++iter)
//        cout << *iter << " ";
//    cout << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//
//    vector<int> v;
//
//    v.push_back(50);
//    v.push_back(90);
//    v.push_back(20);
//
//    vector<int>::iterator biter = v.begin();
//    vector<int>::iterator eiter = v.end() - 1;
//
//    //sort(v.begin(), v.end());
//    sort(biter, eiter);
//    for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
//        cout << *iter << " ";
//    cout << endl;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//
//    vector<int> v;
//
//    v.push_back(50);
//    v.push_back(90);
//    v.push_back(20);
//    
//    vector<int>::iterator biter = v.begin();
//    vector<int>::iterator eiter = v.end()-1;
//
//    for (vector<int>::iterator iter = biter; iter != eiter; ++iter)
//        cout << *iter << " ";
//    cout << endl;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//
//    vector<int> v;
//
//    v.push_back(50);
//    v.push_back(90);
//    v.push_back(20);
//
//    for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
//        cout << *iter << " ";
//    cout << endl;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//
//    vector<int> v;
//
//    v.push_back(50);
//    v.push_back(90);
//    v.push_back(20);
//
//    vector<int>::iterator iter;
//    iter = v.end();
//    --iter;
//    cout << *iter << endl;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//   
//    vector<int> v;
//
//    v.push_back(50);
//    v.push_back(90);
//    v.push_back(20);
//
//    vector<int>::iterator iter;
//    iter = v.begin();
//    cout << *iter << endl;
//    ++iter;
//    cout << *iter << endl;
//    ++iter;
//    cout << *iter << endl;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//template <typename T>
//class Array
//{
//public:
//    class Iterator
//    {
//
//    };
//};
//template <typename T>
//class List
//{
//public:
//    class Iterator
//    {
//
//    };
//};
//int main()
//{
//    Array<int>::Iterator iter;
//    List<int>::Iterator liter;
//    vector<int> v;
//
//    v.push_back(50);
//    v.push_back(90);
//    v.push_back(20);
//
//    vector<int>::iterator iter;
//    iter = v.begin();
//    cout << *iter << endl;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//    vector<int> v;
//
//    v.reserve(10);
//
//    v.push_back(50);
//    v.push_back(90);
//    v.push_back(20);
//
//    for (vector<int>::size_type i = 0; i < v.size(); ++i)
//        cout << v[i] << " ";
//    cout << endl;
//
//    cout << v.size() << " : " << v.capacity() << endl;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//    vector<int> v;
//
//    v.reserve(10);
//
//    v.push_back(50);
//    v.push_back(90);
//    v.push_back(20);
//
//    for (vector<int>::size_type i = 0; i < v.size(); ++i)
//        cout << v[i] << " ";
//    cout << endl;
//
//    cout << v.size() << " : " << v.capacity() << endl;
//}

//#include <iostream>
//#include <list>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//using namespace std;
//
//void Print(int data)
//{
//    cout << data << " ";
//}
//int main()
//{
//    vector<int> v;
//    list<int> lt;
//    set<int> s;
//
//
//    v.push_back(10);
//    cout << v.size() << " : " << v.capacity() << endl;
//    v.push_back(20);
//    cout << v.size() << " : " << v.capacity() << endl;
//    v.push_back(30);
//    cout << v.size() << " : " << v.capacity() << endl;
//    v.push_back(40);
//    cout << v.size() << " : " << v.capacity() << endl;
//    v.push_back(50);
//    cout << v.size() << " : " << v.capacity() << endl;
//    v.push_back(60);
//    cout << v.size() << " : " << v.capacity() << endl;
//    v.push_back(70);
//    cout << v.size() << " : " << v.capacity() << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//using namespace std;
//
//void Print(int data)
//{
//    cout << data << " ";
//}
//int main()
//{
//    vector<int> v;
//
//    v.push_back(10);
//    v.push_back(20);
//    v.push_back(30);
//    v.push_back(40);
//    v.push_back(50);
//
//    for (unsigned i = 0; i < v.size(); ++i) ///////////////2.
//        cout << v[i] << " ";
//    cout << endl;
//
//    for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter) ///////////////1.
//        cout << *iter << " ";
//    cout << endl;
//
//    for (auto data : v)
//        cout << data << " ";
//    cout << endl;
//
//    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
//    cout << endl;
//
//    for_each(v.begin(), v.end(), Print);
//    cout << endl;
//}