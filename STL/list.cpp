#include <iostream>
#include <list>
using namespace std;


int main()
{
	
	list<int> nums{1,2,3,4,5}; 
	
	nums.emplace_back(6);
	nums.emplace_front(0);
	
	auto it = find(nums.begin(),nums.end(), 3); // 3이라는 element 를 찾은 후 그 위치에 100이라는 숫자를 대입 
	if (it != nums.end()) // 만약 3 이 없는 경우를 위해 조건을 검 
	{
		nums.emplace(it, 100);
	}
	
	
	
	for(auto num : nums)
	{
		cout << num << " ";
	}
	
	
	cout << endl;
	
}

