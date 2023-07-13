#include "main.hpp"


PmergeMe::PmergeMe( void ) : _vector(), _realnbr(0)
{

	return;

}

int ft_search(float element, std::vector<float>::iterator deb, int size)
{
	if (size == 1)
	{
		if (element <= *deb)
			return (0);
		else
			return (1);
	}
	int half = size / 2;
	if (element <= *(deb + half))
	{
		int mem = ft_search(element, deb, half);
//		std::cout << "1 " << mem << std::endl;
		return (mem);
	}
	int mem = half + ft_search(element, deb + half, half + 1);
//	std::cout << "2 " << mem << std::endl;
	return (mem);
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
	if  (pow(2, step) < size)
		this->pairsort( step );
//	std::cout << "mid " << *this << std::endl;	
//	const int jacobstal[23] = {1, 3, 3, 3, 5, 5, 5, 5, 5, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 21, 43};
//	int ijacobstal = 0;
	i = size / pow(2, step);
//	i = i + jacobstal[ijacobstal];
	int	ou;
	while (i < size / pow(2, step - 1))
	{
		if (!isnan(_vector[i]))
		{
			int test = 0;
			ou = i - ft_search(_vector[i], _vector.begin(), i);
//			std::cout << "ou " << ou << i - ou << std::endl;	
			while (test < (pow(2, step - 1)) && !isnan(_vector[i + test * size / pow(2, step - 1)]))
			{
//				std::cout << "pre " << *this << std::endl;	
				this->moveback(i + test * size / pow(2, step - 1), ou);
//				std::cout << "post " << *this << std::endl;	
				test++;
			}
		}
		i++;
		//ijacobstal++;
		//i = i + jacobstal[ijacobstal];
	}
//	std::cout << "fin " << *this << std::endl;	
}

void	PmergeMe::issort( void )
{
	for (std::vector<float>::iterator it = _vector.begin(); it != _vector.end(); it++)
	{
		if (it != _vector.begin() && *(it - 1) > *(it))
			std::cout << "error" << std::endl;
	}
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
	_realnbr++;
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

int PmergeMe::getRealnbr( void ) const
{
	return (_realnbr);
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

	return;

}

std::ostream & operator<<( std::ostream & o, PmergeMe const & i )
{
	int re= 0;
	std::vector<float> lol = i.getVector();
	for (std::vector<float>::iterator it = lol.begin(); it != lol.end(); it++)
	{
		int qwe;
		int re1=i.getRealnbr();
		if (!isnan(*it) || re < re1)
		{
			if (isnan(*it))
			{
				o << *it;
				if (it + 1 != lol.end())
					o << " ";
			}
			else
			{
				re++;
				qwe = *it;
				o << qwe;
				if (it + 1 != lol.end())
					o << " ";
			}
		}
	}
	return (o);

}
