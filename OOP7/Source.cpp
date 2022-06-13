#include <iostream>
#include <vector>
#include <list>
#include <set>        
#include <map>        
#include <deque>        
using namespace std;

class Beast {
public:
	Beast(const char* str):sound(str){}
	void setSound(const char* str) {
		sound = str;
	}
	void say()const {
		cout << sound << endl;
	}
private:
	string sound;
};

class Chiken: virtual public Beast {
public:
	Chiken():Beast("krya"){}
	void Bar() {
		cout << "bar from A\n";
	}
};

class Frog : virtual public Beast {
public:
	Frog():Beast("quack"){}
	void f00() {
		cout << "f00 from B\n";
	}
};

class Duck: public Chiken, public Frog {
public:
	Duck(): Chiken(), Frog(), Beast("krya") {
		/*A::setSound("krya");
		B::setSound("krya");*/
	}
};

//class A {
//public:
//	int f00() {
//		static int i = 0;
//		return i++;
//	}
//	static int getCount() {
//		return count; 
//	}
//private:
//	static int count;
//};
//
//class SmartPointer {
//public:
//	int& operator*() {
//		return *data;
//	}
//	int* operator->() {
//		return data;
//	}
//private:
//	int* data;
//	//List:Node *data;
//};

int main() {
	setlocale(LC_ALL, "Russian");

	Duck duck;
	duck.Bar();
	duck.f00();
	duck.say();
	
	
	//vector<int> coll1;
	//list<A> coll2;
	//set<int> coll3;
	//for (size_t i = 0; i < 10; i++) {
	//	coll1.push_back(_Val:i);
	//	coll2.push_back(_Val:i);
	//	coll3.insert(_Val:i);
	//}
	///*for (size_t i = 0; i < 10; i++) {
	//	coll1[i];
	//}*/
	//auto start = coll3.begin();
	//set<int>::iterator finish = coll3.end();
	//for (; start != finish; start++) {
	//	cout << *start << ' ';
	//}
	//for (int el : coll3) {
	//	cout << el << ' ';
	//}

	//A::getCount();

	return 0;
}