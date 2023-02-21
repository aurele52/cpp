#include "main.hpp"

int	main()
{
	{
		MutantStack<int>	mstack;

		mstack.push(5);
		mstack.push(12);

//		std::cout << mstack.top() << std::endl;
		
		std::cout << mstack.size() << std::endl;

		mstack.push(5);
		mstack.push(5);
		mstack.push(5);
		mstack.push(5);
		mstack.push(5);
		mstack.push(12);
		mstack.push(12);
		mstack.push(12);
		mstack.push(12);
		mstack.push(12);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
	{

		std::list<int>	mstack;

		mstack.push_back(5);
		mstack.push_back(12);

//		std::cout << mstack.top() << std::endl;

		std::cout << mstack.size() << std::endl;

		mstack.push_back(5);
		mstack.push_back(5);
		mstack.push_back(5);
		mstack.push_back(5);
		mstack.push_back(5);
		mstack.push_back(12);
		mstack.push_back(12);
		mstack.push_back(12);
		mstack.push_back(12);
		mstack.push_back(12);

		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
		return (0);
	}
}
