#include<iostream>
#include<string>
using namespace std;

template<class type>

class Stack {

	int real_size,size;
	type stack[100];
	void Setup();		//sets the stack vars
	
public:
	bool isFull()const;
	bool isEmpty()const;
	bool Push(type);
	bool Pop();
	int Get_Size()const;
	int Get_Real_Size()const;
	type Top()const;
	Stack(){
		Setup();
	}
};