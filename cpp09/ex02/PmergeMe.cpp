#include "main.hpp"


PmergeMe::PmergeMe( void ) : _vector()
{

	std::cout << "Constructor Called" << std::endl;
	return;

}

int	ft_search(std::vector<float>::iterator deb, std::vector<float>::iterator fin, float act)
{
	std::vector<float>::iterator mem = deb;
	
	int size;
	std::vector<float>::iterator	moitier;

//	std::cout << "deb = "<< *deb  << " fin = " << *fin << std::endl;
	if (deb == fin)
		return (1);
	size = fin - deb;
	while (size < 1)
	{
		size = fin - deb;
		moitier = deb + size / 2;
		if (*moitier < act)
		{
			deb = moitier;
		}
		else if (*moitier > act)
		{
			fin = moitier;
		}
		else
		{
			deb = moitier;
			fin = moitier;
		}
		std::cout << size << std::endl;
	}
	return (fin - mem + 1);
	
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
	int	size = 8;
	while (i < size / pow(2, step))
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
		ou = i - ft_search(_vector.begin(), _vector.begin() + i - 1, _vector[i]);
		int test = 0;
	//	std::cout << "test = " << test << " size / pow(2, step) = " << size / pow(2, step) << std::endl;
		while (test < size / (pow(2, step)))
		{
			std::cout << *this << std::endl;
			this->moveback(i + test * size / pow(2, step - 1), ou);
//			std::cout << "i = "<< i  << " ou = " << ou << std::endl;
			test++;
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
		o << *it;
		if (it + 1 != lol.end())
			o << " ";
	}
	return (o);

}
