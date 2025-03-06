#include <iostream>
#include <functional>
#include "heap.h"
#include <string>
using namespace::std;
int main() {
	cout<<endl;
	cout<<"Testing min-heap (default comparator less):"<<endl;
	Heap<int> minHeap;
	int values[] = {5,3,8,1,9,2};
	for(int i=0; i<6; i++) {
		minHeap.push(values[i]);
		cout<<"Pushed "<<values[i]<<" into minHeap"<<endl;
	}
	cout<<"Popping from minHeap: "<<endl;
	while(!minHeap.empty()) {
		cout<<minHeap.top()<<" ";
		minHeap.pop();
	}
	cout<<endl<<endl;

	cout<<"Testing max-heap (using greater):"<<endl;
	Heap<int, std::greater<int>> maxHeap(2, std::greater<int>());
	for(int i=0; i<6; i++) {
		maxHeap.push(values[i]);
		cout<<"Pushed "<<values[i]<<" into maxHeap"<<endl;
	}
	cout<<"Popping from maxHeap: "<<endl;
	while(!maxHeap.empty()) {
		cout<<maxHeap.top()<<" ";
		maxHeap.pop();
	}
	cout<<endl<<endl;
	cout<<"Testing string min-heap (alphabetical):"<<endl;
	Heap<string> strHeap;
	strHeap.push("banana");
	strHeap.push("apple");
	strHeap.push("cherry");
	cout<<"Popping from strheap: ";
	while(!strHeap.empty()) {
		cout<<strHeap.top()<<" ";
		strHeap.pop();
	}
	cout<<endl<<endl;
	return 0;
}
