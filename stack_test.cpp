#include <iostream>
#include "stack.h"
using namespace std;

int main() {
	Stack<int> s;

	cout << "Pushing 10, 20, and 30 onto the stack." << endl;
	s.push(10);
	s.push(20);
	s.push(30);

 	cout<<"Current size: "<<s.size()<<endl;
 	cout<<"Top element: "<<s.top()<<endl;

 	s.pop();
 	cout<<"After one pop, size: "<<s.size()<<endl;
 	cout<<"New top element: "<<s.top()<<endl;

 	s.pop();
 	s.pop();

 	try {
		cout<<"Trying to access top of an empty stack:"<<endl;
 		cout<<s.top()<<endl;
	} 
	catch (const std::underflow_error &e) {
 		cout<<"Caught exception: "<<e.what()<<endl;
	}
	return 0;
}
