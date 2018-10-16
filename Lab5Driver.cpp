// Lab5Driver.cpp
// Ben Howe
// COSC 2030
// Lab 5

#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <list>

#include "Lab5MyStack.h"

using std::string;
using std::stack;
using std::vector;
using std::list;
using std::cout;
using std::endl;

// function prototypes

string stringReversal1(string stringinput);  // String reversal using a stack.
string stringReversal2(string stringinput);  // String reversal using a vector.
string stringReversal3(string stringinput);  // String reversal using a list.
string stringReversal4(string stringinput);  // String reversal using Mystack


int main()
{
	//Part 1 not requried for lab.

	string teststring = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout << "Starting String: " << teststring << endl;

	//Part 2.
	cout << "Part 2" << endl;
	cout << "Stack reversed: " << stringReversal1(teststring) << endl;

	//Part 3.
	cout << "Part 3" << endl;
	cout << "Vector reversed: " << stringReversal2(teststring) << endl;

	//Part 4.
	cout << "Part 4" << endl;
	cout << "List reversed: " << stringReversal3(teststring) << endl;

	//Part 5.
	cout << "Part 5" << endl;
	cout << "Mystack reversed: " << stringReversal4(teststring) << endl;


	system("Pause");
	return 0;
}

string stringReversal1(string stringinput) // String reversal using a stack.
{
	/*
	(a) bool empty() const;
	(b) void pop();
	(c) void push(char& c);
	(d) char& top();
	*/
	string stringoutput;
	stack <char> fatstack;

	// Populate the stack
	for (int i = 0; i < stringinput.length(); i++)
	{
		//cout << stringinput.at(i) << endl;
		fatstack.push(stringinput.at(i));
	}
	// Pop characters off the stack into the output

	while (!fatstack.empty())
	{
		//cout << fatstack.top() << endl;
		stringoutput += fatstack.top();
		fatstack.pop();
	}
	return stringoutput;
}

string stringReversal2(string stringinput)  // String reversal using a vector.
{
	/*
	(a) bool empty() const;
	(b) void pop_back();
	(c) void push_back(char& c);
	(d) char& back();
	*/
	string stringoutput;
	vector <char> vec;

	// Populate the vector
	for (int i = 0; i < stringinput.length(); i++)
	{
		//cout << stringinput.at(i) << endl;
		vec.push_back(stringinput.at(i));
	}
	// Pop characters off the stack into the output

	while (!vec.empty())
	{
		stringoutput += vec.back();
		vec.pop_back();
	}
	return stringoutput;
}
string stringReversal3(string stringinput) // String reversal using a list.
{
	/*
	(a) bool empty() const;
	(b) void pop_back();
	(c) void push_back(char& c);
	(d) char& back();
	*/
	string stringoutput;
	list <char> myList;

	// Populate the vector
	for (int i = 0; i < stringinput.length(); i++)
	{
		//cout << stringinput.at(i) << endl;
		myList.push_back(stringinput.at(i));
	}
	// Pop characters off the stack into the output

	while (!myList.empty())
	{
		stringoutput += myList.back();
		myList.pop_back();
	}
	return stringoutput;
}
string stringReversal4(string stringinput)
{
	/*
	(a) bool isEmpty() const;
	(b) void push(char& c);
	(c) char pull();
	*/
	string stringoutput;
	MyStack anotherstack;
	
	// Populate the MyStack
	for (int i = 0; i < stringinput.length(); i++)
	{
		//cout << stringinput.at(i) << endl;
		anotherstack.push(stringinput.at(i));
	}
	// Pop characters off the stack into the output

	while (!anotherstack.isEmpty())
	{
		stringoutput += anotherstack.pull(); // Pull a character off MyStack
	}
	return stringoutput;
}
