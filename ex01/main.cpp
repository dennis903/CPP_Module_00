/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 16:54:24 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/24 14:40:46 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


void		change_to_upper(std::string &str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
}

void			get_command(std::string &command)
{
	std::cout << "type command : ";
	std::getline(std::cin, command);
}

void			add_phonebook(Phonebook &phonebook)
{
	std::string	str;

	std::cout << "set Firstname:";
	std::getline(std::cin, str);
	phonebook.set_firstname(str);
	std::cout << "set Lastname:";
	std::getline(std::cin, str);
	phonebook.set_lastname(str);
	std::cout << "set Nickname:";
	std::getline(std::cin, str);
	phonebook.set_nickname(str);
	std::cout << "set login:";
	std::getline(std::cin, str);
	phonebook.set_firstname(str);
	std::cout << "set Firstname:";
	std::getline(std::cin, str);
	phonebook.set_firstname(str);
	std::cout << "set Firstname:";
	std::getline(std::cin, str);
	phonebook.set_firstname(str);
	std::cout << "set Firstname:";
	std::getline(std::cin, str);
	phonebook.set_firstname(str);
	std::cout << "set Firstname:";
	std::getline(std::cin, str);
	phonebook.set_firstname(str);
	std::cout << "set Firstname:";
	std::getline(std::cin, str);
	phonebook.set_firstname(str);
	std::cout << "set Firstname:";
	std::getline(std::cin, str);
	phonebook.set_firstname(str);
	std::cout << "set Firstname:";
	std::getline(std::cin, str);
	phonebook.set_firstname(str);
}

void			show_list(Phonebook phonebook[], int i)
{
	
}

int				main()
{
	Phonebook	phonebook[8];
	std::string	command;
	int			i;

	i = 0;
	while (1)
	{
		get_command(command);
		change_to_upper(command);
		if (command.compare("set") == 0)
		{
			if (i > 7)
				std::cout << "you can't add anymore (This phonebook is full)" << std::endl;
			else
			{
				add_phonebook(phonebook[i]);
				i++;
			}
		}
		else if (command.compare("SEARCH") == 0)
			show_list(phonebook, i);
		else if (command.compare("EXIT") == 0)
			break ;
		else
		{
			std::cout << "Command not found:" << std::endl;
			std::cout << "Please enter one of ADD and SEARCH and EXIT" << std::endl;
		}
	}
	return (0);
}