#include <iostream>
#include <queue>
using namespace std;

// Stack using two queues

template<class T>
class Stack {
	queue<T> q1, q2;
public:

	void push(T n) {
		q1.push(n);
	}

	void pop() {
		if (empty()) {cout << "Empty!" << endl; return;}
		while (q1.size() > 1) {
			T temp = q1.front();
			q2.push(temp);
			q1.pop();
		}
		q1.pop();
		swap(q1, q2);
	}

	T top() {
		if (empty()) {cout << "Empty!" << endl; return -1;}
		while (q1.size() > 1) {
			T temp = q1.front();
			q2.push(temp);
			q1.pop();
		}
		T temp = q1.front();
		q1.pop();
		q2.push(temp);
		swap(q1, q2);
		return temp;
	}

	int size() {
		return q1.size() + q2.size();
	}

	bool empty() {
		return size() == 0;
	}

};

int main(int argc, char const *argv[])
{
	Stack<int> s;

	s.push(1);
	s.push(2);
	s.push(3);

	s.push(4);

	s.pop(); s.pop();
	cout << s.top() << endl;
	cout << s.size() << endl;
	cout << s.empty() << endl;


	return 0;
}