/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 16:54:24 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/24 20:47:24 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


void			change_to_upper(std::string &str)
{
	int			i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
}

void				get_command(std::string &command)
{
	std::cout << "type command : ";
	std::getline(std::cin, command);
}

bool				is_number(const std::string& str)
{
	unsigned long	i;

	i = 0;
	while (i < str.size())
	{
		if (std::isdigit(str[i]) == false)
			return (false);
		i++;
	}
	return (true);
}

void				add_phonebook(Phonebook &phonebook)
{
	std::string		str;

	std::cout << "set Firstname: ";
	std::getline(std::cin, str);
	phonebook.set_firstname(str);
	std::cout << "set Lastname: ";
	std::getline(std::cin, str);
	phonebook.set_lastname(str);
	std::cout << "set Nickname: ";
	std::getline(std::cin, str);
	phonebook.set_nickname(str);
	std::cout << "set Login: ";
	std::getline(std::cin, str);
	phonebook.set_login(str);
	std::cout << "set Postal address: ";
	std::getline(std::cin, str);
	phonebook.set_postal_address(str);
	std::cout << "set Email address: ";
	std::getline(std::cin, str);
	phonebook.set_email_address(str);
	std::cout << "set Phone number: ";
	std::getline(std::cin, str);
	phonebook.set_phone_number(str);
	std::cout << "set Birthday date: ";
	std::getline(std::cin, str);
	phonebook.set_birthday_date(str);
	std::cout << "set Favorite meal: ";
	std::getline(std::cin, str);
	phonebook.set_favorite_meal(str);
	std::cout << "set Underwear color: ";
	std::getline(std::cin, str);
	phonebook.set_underwear_color(str);
	std::cout << "set Darkest secret: ";
	std::getline(std::cin, str);
	phonebook.set_darkest_secret(str);
}

void				search_phonebook(Phonebook phonebook[], int max_index)
{
	std::string		input;
	int				index;

	std::cout << "search index : ";
	std::getline(std::cin, input);
	if (!is_number(input))
	{
		std::cout << "Input is not number" << std::endl;
		return ;
	}
	index = std::stoi(input);
	if (index >= max_index)
		std::cout << "Cannot find index" << std::endl;
	else
	{
		std::cout << "Firstname : " << phonebook[index].get_firstname() << std::endl;
		std::cout << "Lastname : " << phonebook[index].get_lastname() << std::endl;
		std::cout << "Nickname : " << phonebook[index].get_nickname() << std::endl;
		std::cout << "Login : " << phonebook[index].get_login() << std::endl;
		std::cout << "Postal address : " << phonebook[index].get_postal_address() << std::endl;
		std::cout << "Email address : " << phonebook[index].get_email_address() << std::endl;
		std::cout << "Phone number : " << phonebook[index].get_phone_number() << std::endl;
		std::cout << "Birthday date : " << phonebook[index].get_birthday_date() << std::endl;
		std::cout << "Favorite meal : " << phonebook[index].get_favorite_meal() << std::endl;
		std::cout << "Underwear color : " << phonebook[index].get_underwear_color() << std::endl;
		std::cout << "Darkest secret : " << phonebook[index].get_darkest_secret() << std::endl;
	}
}

void				show_list(Phonebook phonebook[], int max)
{
	int				i;
	std::string		temp;

	i = 0;
	print_form();
	while (i < max)
	{
		print_index(i);
		std::cout << "|";
		print_name(phonebook[i].get_firstname());
		std::cout << "|";
		print_name(phonebook[i].get_lastname());
		std::cout << "|";
		print_name(phonebook[i].get_nickname());
		std::cout << std::endl;
		i++;
	}
	search_phonebook(phonebook, i);
}

int					main()
{
	Phonebook		phonebook[8];
	std::string		command;
	int				i;	

	i = 0;
	while (1)
	{
		get_command(command);
		change_to_upper(command);
		if (command.compare("ADD") == 0)
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