#include "main.hpp"


PmergeMe::PmergeMe( void ) : _vector()
{

	std::cout << "Constructor Called" << std::endl;
	return;

}

int ft_search(float element, std::vector<float>::iterator deb, int size, std::vector<float>::iterator end)
{
	if (size == 1)
	{
		if (element <= *deb)
			return (0);
		else
			return (1);
	}
	int moitier = size / 2;
//	std::cout << "moitier =" << moitier << std::endl;
	if (end <= (deb + moitier))
		return (1);
	if (element <= *(deb + moitier))
		return (ft_search(element, deb, moitier, end));
	return (moitier + ft_search(element, deb + moitier, size, end));
}

void	PmergeMe::moveback( int lol, int back)
{
	while (back)
	{
		std::swap(_vector[lol], _vector[lol - 1]);
		lol--;
		back--;
	}
}

void	PmergeMe::pairsort( int step )
{
	step = step + 1;
	int	i = 0;
	int	size = _vector.size();
	while (!isnan(_vector[i]) && i < size / pow(2, step))
	{
		if (_vector[i] < _vector[i + size / pow(2, step)])
		{
			int test = 0;
			while (test < (pow(2, step - 1)))
			{
				std::swap(_vector[i + test * size / pow(2, step - 1)], _vector[i + size / pow(2, step) + test * size / pow(2, step - 1)]);
				test++;
			}
		}
		i++;
	}
	
	std::cout << "avant " << *this << std::endl;
	if  (pow(2, step) < size)
		this->pairsort( step );
	std::cout << "mid " << *this << std::endl;
//	const int jacobstal {1, 3, 5, 11, 21, 43}
//	int ijacobstal = 0;
	i = size / pow(2, step);
	int	ou;
	while (i < size / pow(2, step - 1))
	{
		if (!isnan(_vector[i]))
		{
			int test = 0;
			ou = i - ft_search(_vector[i], _vector.begin(), i, _vector.end());
//			std::cout << "test = " << test << " size / pow(2, step) = " << size / pow(2, step) << std::endl;
			while (test < (pow(2, step - 1)))
			{
//				std::cout << "test " << test  << " pow(2, step - 1) " << pow(2, step - 1) << std::endl;
				std::cout << "pre = "<< *this << std::endl;
				this->moveback(i + test * size / pow(2, step - 1), ou);
				std::cout << "post = "<< *this << std::endl;
				test++;
			}
		}
		i++;
	}
	std::cout << "fin " << *this << std::endl;
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
//		if (!isnan(*it))
//		{
			o << *it;
			if (it + 1 != lol.end())
				o << " ";
//		}
	}
	return (o);

}
