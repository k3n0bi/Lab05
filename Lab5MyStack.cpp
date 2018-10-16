// Lab5MyStack.cpp
// Ben Howe
// COSC 2030
// Lab 5

#include "Lab5MyStack.h"


MyStack::MyStack()
{
	//Constructor
	return;
}

MyStack::~MyStack()
{
	//Destructor
}

bool MyStack::isEmpty() const
{
	return myVector.empty();
}

void MyStack::push(char& c)
{
	myVector.push_back(c);
}
char MyStack::pull()
{
	char c = myVector.back(); // remember the last character added to the vector
	myVector.pop_back(); // remove the last character added to the vector
	return c;
}
