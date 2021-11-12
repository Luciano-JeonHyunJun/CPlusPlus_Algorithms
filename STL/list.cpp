#include <algorithm>
#include <iostream>
#include <list>
using namespace std;


int main()
{
	
	list<int> nums{1,2,3,4,5}; 
	
	nums.emplace_back(6);
	nums.emplace_front(0);
	
	auto it = find(nums.begin(),nums.end(), 3); // 3�̶�� element �� ã�� �� �� ��ġ�� 100�̶�� ���ڸ� ���� 
	if (it != nums.end()) // ���� 3 �� ���� ��츦 ���� ������ �� 
	{
		nums.emplace(it, 100);
	}
	
	
	
	for(auto num : nums)
	{
		cout << num << " ";
	}
	
	
	cout << endl;
	
}

