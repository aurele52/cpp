#include "main.hpp"
#include <time.h>
#include <stdlib.h>

class Base
{
	public:
	virtual ~Base(){}
};

class A: public Base
{
};

class B: public Base
{
};

class C: public Base
{
};

Base	*generate(void)
{
	srand(time(NULL));

	switch (rand() % 3)
	{
		case 0:
			std::cout << "A" << std::endl;
			return (new A);
			break;
		case 1:
			std::cout << "B" << std::endl;
			return (new B);
			break;
		case 2:
			std::cout << "C" << std::endl;
			return (new C);
			break;
	}
	throw new std::exception();
}

void	identify( Base *ptr)
{
	{
		A	*test = dynamic_cast<A *>(ptr);
		if (test)
			std::cout << "A" << std::endl;
		(void)test;
	}
	{
		B	*test = dynamic_cast<B *>(ptr);
		if (test)
			std::cout << "B" << std::endl;
		(void)test;
	}
	{
		C	*test = dynamic_cast<C *>(ptr);
		if (test)
			std::cout << "C" << std::endl;
	}
}

void	identify( Base &ref)
{
	try
	{
		A	&test = dynamic_cast<A &>(ref);
			std::cout << "A" << std::endl;
		(void)test;
	}
	catch (std::exception &e){}
	try
	{
		B	&test = dynamic_cast<B &>(ref);
			std::cout << "B" << std::endl;
		(void)test;
	}
	catch (std::exception &e){}
	try
	{
		C	&test = dynamic_cast<C &>(ref);
			std::cout << "C" << std::endl;
		(void)test;
	}
	catch (std::exception &e){}
}

int	main()
{
	A lol;
	identify(&lol);
}
