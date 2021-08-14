#include <iostream>
#include <list>

using namespace std;

int main()
{

    list<int> test;

    test.push_front(5); // 원소 추가
    test.emplace_front(7);// 제일 앞에 원소 추가

    test.push_back(2); 
    test.emplace_back(1); // 제일 뒤에 원소 추가
     

    for (auto& num : test)
        cout << num << " ";
    cout << endl;

    


    

    return 0;
}
