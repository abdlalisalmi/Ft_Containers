
#ifndef __VECTOR__HPP__
#define __VECTOR__HPP__

#include <iostream>

namespace ft
{
	class Vector
	{
	private:
		/* data */
	public:
		Vector(/* args */);
		~Vector();
	};

	Vector::Vector(/* args */)
	{
		std::cout << "Vector constructor called" << std::endl;
	}

	Vector::~Vector()
	{
	}

}

#endif