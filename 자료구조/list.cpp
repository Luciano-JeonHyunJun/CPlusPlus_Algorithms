#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> tl;
	
	// push_back

	tl.push_back(5);
	tl.push_back(6);
	tl.push_back(7);
	tl.push_back(8);
	tl.push_back(9);
	tl.push_back(10);
	
	// pop_back
	
	tl.pop_back();
	
	// push_front
	
	tl.push_front(4);
	tl.push_front(3);
	tl.push_front(2);
	tl.push_front(1);
	tl.push_front(0);
	
	// pop_front
	
	tl.pop_front();
	
	// back and front
	
	cout << "list name : tl , list front :"<<" "<< tl.front() << endl; 
	cout << "list name : tl , list back :"<<" "<< tl.back() << endl;
	
	// size
	
	cout << "list size : " << tl.size() << endl;
	
	// empty
	cout << "tl list empty?" << (tl.empty() ? "Yes" : "No") << endl;
	
	// iterator
	list<int>::iterator begin_iter = tl.begin();
	list<int>::iterator end_iter = tl.end();

	// insert
	begin_iter++; // 4번째를 가리키는 iterator
	tl.insert(begin_iter, 4);
	
	// erase
	end_iter--; // 마지막 원소를 가리키는 iterator 
	tl.erase(end_iter); 
	
	// iterator 원소 접근
	cout << "list" <<" "<< distance(tl.begin() , begin_iter) + 1 << " " << "element: " << " " << *begin_iter << endl; 
	
	
	
	return 0;
}
