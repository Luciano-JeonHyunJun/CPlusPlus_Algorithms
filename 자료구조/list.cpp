#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> num; // 기본 생성 
	//list<int> num2(10); // 기본값이 0으로 초기화된 원소 10개를 가진 리스트 생성 
	//list<int> num3(3,2);//2값으로 초기화 된 원소3개를 가진 list를 만듬
	//list<int> num4(num3)//num3으로 num4를 복사 
	 
	num.assign(3, 4); //4로 초기화된 3개의 원소를 할당해줌
	num.front(); // 맨 앞에 원소를 반환해줌
	num.back(); // 맨 뒤에 원소를 반환해줌 
	num.begin(); // 맨 앞의 원소를 가리키는 iterator을 반환해준다
	num.end(); //맨 마지막의 다음을 원소 
	num.rend(); //뒤에서부터 순차적으로 원소를 접근할때 쓰임.end와 동일
	num.push_back(30); //맨 마지막에 30을 삽입  
	num.push_front(20);// 맨 앞에 20을 삽입
	num.pop_back(); // 맨 마지막 원소를 제거
	num.pop_front(); // 맨 앞 원소를 제거
	num.insert(iter, k);// iter가 가리키는 위치에 k를 삽입 
	num.erase(iter); // iterator이 가리키는 원소를 제거합니다. 
	num.size(); // 원소의 사이즈를 반환
	num.remove(20); // 20과 같은 원소를 모두 제거
	   
	
	return 0;
}
