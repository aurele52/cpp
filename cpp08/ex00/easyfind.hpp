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
	typename T::iterator lol = std::find(arg.begin(), arg.end(), len);
	if (lol == arg.end())
		throw (std::range_error("Not the int in range"));
	return (lol);
}
#endif
