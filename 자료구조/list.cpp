#include <iostream>
#include <list>
using namespace std;

int main()
{
// 기본 선언문

    list<int> list1;
    
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(7);
    list1.push_back(8);
    list1.push_back(9);
    list1.push_back(10);
    
    list1.pop_back(); // 제일 뒤 원소를 삭제

    list1.push_front(4);
    list1.push_front(3);
    list1.push_front(2);
    list1.push_front(1);
    list1.push_front(0);

    list1.pop_front(); // 제일 앞 원소를 삭제
 
    cout << " list front value: "<<list1.front() << endl;
    cout << " list end value: "<< list1.back() << endl; 

    cout << " list size: " << list1.size() << endl;

    cout << list1.max_size() << endl;
    cout << "empty: " <<list1.empty() << endl; //list1이 비었는지 안비었는지 확인해주는것

    list<int>::iterator begin_iter = list1.begin(); // auto begin_iter = list1.begin() 도 가능 
    list<int>::iterator end_iter = list1.end(); // auto end_iter = list1.end() 도 가능

    begin_iter++; // 2번째를 가르키는 iterator
    list1.insert(begin_iter,2);

    end_iter--; 
    list1.erase(end_iter);

    cout << "list1 sort:" << list1.sort() << endl;

    //cout << "list" << distance(list1.begin,begin_iter) + 1 << "element: " *begin_iter << endl;

    return 0;
}
