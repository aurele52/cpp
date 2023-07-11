#include "main.hpp"


PmergeMe::PmergeMe( void ) : _vector()
{

	std::cout << "Constructor Called" << std::endl;
	return;

}

void	PmergeMe::pairsort( int step )
{
	step = step + 1;
	int	i = 0;
	int	size = 4;
	while (i < size / pow(2, step))
	{
		if (_vector[i] < _vector[i + size / pow(2, step)])
			std::swap(_vector[i], _vector[i + size / pow(2, step)]);
		i++;
	}
	step++;
	if  (pow(2, step) < size)
		this->pairsort( step );
	int j = 0;
	i = 0;
	std::cout << step << std::endl;
	while (j < size / pow(2, step))
	{
		while (i < size / pow(2, step))
		{
			int a = i;
			int b = j;
			if (_vector[j] < _vector[j])
			{
				while (a < size)
				{
					std::swap(_vector[a], _vector[b]);
					a = a + size / pow(2, step);
					b = b + size / pow(2, step);
				}
			}

			i++;
		}
		j++;
		i = j + 1;
	}
	std::cout << *this << std::endl;

}

void	PmergeMe::add(char *str)
{
	std::istringstream lol(str);

	if (lol.eof())
		throw std::invalid_argument("Invalid argument");
	int a;
	lol >> a;
	if (lol.bad())
		throw std::invalid_argument("Invalid argument");
	if (!lol.eof())
		throw std::invalid_argument("Invalid argument");
	if (lol.fail())
		throw std::invalid_argument("Invalid argument");
	this->_vector.push_back(a);
}

void	PmergeMe::addnan( void )
{
	this->_vector.push_back(nan(""));
}

PmergeMe::PmergeMe( PmergeMe const & src )
{

	std::cout << "Copy Constructor Called" << std::endl;
	*this = src;

	return;

}

std::vector<float> PmergeMe::getVector( void )
{
	return (_vector);
}

std::vector<float> PmergeMe::getVector( void ) const
{
	return (_vector);
}

PmergeMe & PmergeMe::operator=( PmergeMe const & rhs )
{

	std::cout << "Assignment operator Called" << std::endl;

	if ( this != &rhs )
	{
		this->_vector = rhs.getVector();
	}
	return (*this);
}

PmergeMe::~PmergeMe( void )
{

	std::cout << "Destructor Called" << std::endl;
	return;

}

std::ostream & operator<<( std::ostream & o, PmergeMe const & i )
{
	std::vector<float> lol = i.getVector();
	for (std::vector<float>::iterator it = lol.begin(); it != lol.end(); it++)
	{
		o << *it;
		if (it + 1 != lol.end())
			o << " ";
	}
	return (o);

}
