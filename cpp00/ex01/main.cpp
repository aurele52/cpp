/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audreyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 16:45:15 by audreyer          #+#    #+#             */
/*   Updated: 2023/02/01 15:06:27 by audreyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.class.hpp"
#include "phonebook.class.hpp"

int 	main()
{
	std::string test;
	std::string first;
	std::string last;
	std::string nick;
	std::string phone;
	std::string darkest;
	phonebook	phonebook;

	std::cout << "Enter an instruction among ADD, SEARCH and EXIT" << std::endl;
	while (test != "EXIT")
	{
		std::getline(std::cin, test);
		if (std::cin.eof())
			return (0);
		if (test == "ADD")
		{
			while (first.length() == 0)
			{
				std::cout << "Firstname:";
				std::getline(std::cin, first);
				if (std::cin.eof())
					return (0);
			}
			while (last.length() == 0)
			{
				std::cout << "lastname:";
				std::getline(std::cin, last);
				if (std::cin.eof())
					return (0);
			}
			while (nick.length() == 0)
			{
				std::cout << "nickname:";
				std::getline(std::cin, nick);
				if (std::cin.eof())
					return (0);
			}
			while (phone.length() == 0)
			{
				std::cout << "phone number:";
				std::getline(std::cin, phone);
				if (std::cin.eof())
					return (0);
			}
			while (darkest.length() == 0)
			{
				std::cout << "Darkest secret:";
				std::getline(std::cin, darkest);
				if (std::cin.eof())
					return (0);
			}
			phonebook.addcontact(first, last, nick, phone, darkest);
			first.clear();
			last.clear();
			nick.clear();
			phone.clear();
			darkest.clear();
		}
		else if (test == "SEARCH")
			phonebook.search();
		if (test != "EXIT")
			std::cout << "instruction must be ADD or SEARCH or EXIT" << std::endl;
	}
}
