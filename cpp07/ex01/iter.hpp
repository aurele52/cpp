#ifndef MAIN_H
# define MAIN_H

#include <string>
#include <iostream>

template<typename T>
void	iter(T * str, int len,  void (*ft)(T &))
{
	if (!str || !ft || !len)
		return;
	for (int i = 0; i < len; i++)
		ft(str[i]);
}
#endif
