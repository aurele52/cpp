#ifndef MAIN_H
# define MAIN_H

#include <string>
#include <iostream>
# include <exception>
# include <cctype>
# include <map>

template<typename T>
typename T::iterator	easyfind(T & arg, int len)
{
//	typename T::iterator lol;

	return (std::find(arg.begin(), arg.end(), len));
//	if (lol)
//		return (lol);
//	return (0);
}
#endif
