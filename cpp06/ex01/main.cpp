#include "main.hpp"
#include <stdint.h>

typedef struct s_Data
{
	std::string str;
}	Data;

Data* deserialize(uintptr_t lol)
{
	return (reinterpret_cast<Data *>(lol));
}

uintptr_t serialize(Data* lol)
{
	return (reinterpret_cast<uintptr_t>(lol));
}

int	main()
{
	Data test;
	Data *ptr = &test;
	uintptr_t	lol;

	test.str = "lol";
	lol = serialize(ptr);
	ptr = deserialize(lol);
	std::cout << test.str << std::endl;
	
}
