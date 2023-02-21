#include <iostream>
#include <vector>
#include <algorithm>
#include "easyfind.hpp"

int main(void)
{
    std::vector<int> vect(10); 
    int value = 0; 
    std::fill(vect.begin(), vect.end(), value);
    std::fill(vect.begin() + 6, vect.end(), 2);
	try
	{
		std::vector<int>::iterator found = easyfind(vect, 2);
		std::vector<int>::iterator beg = vect.begin();
		std::cout << "first occurance of " << *found << " is in index : " << std::distance(beg, found) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::vector<int>::iterator beg = vect.begin();
		std::vector<int>::iterator found = easyfind(vect, 666);
		std::cout << "first occurance of " << *found << " is in index : " << std::distance(beg, found) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

}

