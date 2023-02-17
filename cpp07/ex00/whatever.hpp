#ifndef MAIN_H
# define MAIN_H

#include <string>
#include <iostream>

template<typename T>
const T & max(const T & A, const T & B )
{
	return (A > B ? A : B);
}

template<typename T>
const T & min(const T & A, const T & B )
{
	return (A < B ? A : B);
}

template<typename T>
void swap(T & A, T & B )
{
	T tmp = A;
	A = B;
	B = tmp;
}

#endif
