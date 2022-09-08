
#ifndef __STACK__HPP__
#define __STACK__HPP__

#include <iostream>

namespace ft
{
	class Stack
	{
	private:
		/* data */
	public:
		Stack(/* args */);
		~Stack();
	};

	Stack::Stack(/* args */)
	{
		std::cout << "Stack constructor called" << std::endl;
	}

	Stack::~Stack()
	{
	}

}

#endif