/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 16:21:47 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/24 18:37:39 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


void			print_form(void)
{
	std::cout.width(10);
	std::cout << "index";
	std::cout << "|";
	std::cout.width(10);
	std::cout << "First name";
	std::cout << "|";
	std::cout.width(10);
	std::cout << "Last name";
	std::cout << "|";
	std::cout.width(10);
	std::cout << "Nick name" << std::endl;
}

void			print_index(int index)
{
	std::cout.width(10);
	std::cout << index;
}

void			print_name(std::string name)
{
	std::cout.width(10);
	if (name.length() > 10)
		std::cout << name.substr(0, 9) + '.';
	else
		std::cout << name;
}
