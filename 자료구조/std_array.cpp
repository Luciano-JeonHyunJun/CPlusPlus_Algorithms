#include <iostream>
#include <array>
using namespace std;

int main () 
{

    // 일반적인int 타입 배열
    int a[10] { 1 , 2 , 3 , 4 , 5 , 6 ,  7 , 8 , 9 , 10 };

    // int타입의 STL array
    array<int, 10>b { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 };

    cout << b.data() << endl;
    cout << *b.begin() << " " << *(b.end()) << endl;


    return 0;
}

// 핵심기능
// array::data 
// - 배열의 시작 번지 주소를 반환해준다.
// array::begin() & array::end
// - array 처음과 마지막 반복자를 반환해준다.
// array::front & array::back() 
// - 배열의 처음과 마지막 원소를 반환해준다.
// array::empty() 
// - 배열이 비어있는지 확인해준다, 비어있으면 true , 원소가 있다면 false를 반환한다.
// array::size() & array::max_size() 
// - 배열의 현재 원소 개수와 최대 원소 개수를 반환 해준다.
