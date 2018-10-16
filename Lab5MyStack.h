// Lab5MyStack.h
// Ben Howe
// COSC 2030
// Lab 5

#ifndef LAB5MYSTACK_H
#define LAB5MYSTACK_H

#include <vector>
//#include <list>
using std::vector;
//using std::list;

class MyStack
{
public:
	MyStack();
	~MyStack();
	bool isEmpty() const;
	void push(char& c);
	char pull();
private:
	vector <char> myVector;
	//list <char> myVector;
};



#endif 

