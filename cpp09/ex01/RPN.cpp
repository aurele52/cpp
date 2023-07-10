#include "main.hpp"


RPN::RPN( char *str ) : _stack()
{
	int	i = 0;
	int a;
	int b;
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (str[i] >= '0' && str[i] <= '9')
			_stack.push(str[i] - '0');
		else if (str[i] == '-')
		{
			if (_stack.size() < 2)
				throw std::invalid_argument("bad number of sign");
			a = _stack.top();	
			_stack.pop();
			b = _stack.top();
			_stack.pop();
			_stack.push(b - a);
		}
		else if (str[i] == '+')
		{
			if (_stack.size() < 2)
				throw std::invalid_argument("bad number of sign");
			a = _stack.top();	
			_stack.pop();
			b = _stack.top();
			_stack.pop();
			_stack.push(a + b);
		}
		else if (str[i] == '*')
		{
			if (_stack.size() < 2)
				throw std::invalid_argument("bad number of sign");
			a = _stack.top();	
			_stack.pop();
			b = _stack.top();
			_stack.pop();
			_stack.push(a * b);
		}
		else if (str[i] == '/')
		{
			if (_stack.size() < 2)
				throw std::invalid_argument("bad number of sign");
			a = _stack.top();	
			_stack.pop();
			b = _stack.top();
			_stack.pop();
			if (b == 0)
				throw std::invalid_argument("division by zero");
			_stack.push(b / a);
		}
		else
			throw std::invalid_argument("Unknow sign or number");
		i++;
	}
	if (_stack.size() != 1)
		throw std::invalid_argument("bad number of sign");
	std::cout << _stack.top();
	return;
}

RPN::RPN( void )
{

	return;

}

std::stack<int>	RPN::getStack( void )
{
	return (this->_stack);
}

RPN::RPN( RPN & src )
{

	*this = src;

	return;

}

RPN & RPN::operator=( RPN & rhs )
{

	std::cout << "Assignment operator Called" << std::endl;
	this->_stack = rhs.getStack();
	return (*this);
}

RPN::~RPN( void )
{

	return;

}

std::ostream & operator<<( std::ostream & o, RPN & i )
{
	o << (i.getStack()).top();
	return (o);

}
