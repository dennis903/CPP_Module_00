/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:54:49 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/24 13:23:29 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void		Phonebook::set_firstname(std::string str)
{
	firstname = str;
}

void		Phonebook::set_lastname(std::string str)
{
	lastname = str;
}

void		Phonebook::set_nickname(std::string str)
{
	nickname = str;
}

void		Phonebook::set_login(std::string str)
{
	login = str;
}

void		Phonebook::set_postal_address(std::string str)
{
	postal_address = str;
}

void		Phonebook::set_email_address(std::string str)
{
	email_address = str;
}

void		Phonebook::set_phone_number(std::string str)
{
	phone_number = str;
}

void		Phonebook::set_birthday_date(std::string str)
{
	birthday_date = str;
}

void		Phonebook::set_favorite_meal(std::string str)
{
	favorite_meal = str;
}

void		Phonebook::set_underwear_color(std::string str)
{
	underwear_color = str;
}

void		Phonebook::set_darkest_secret(std::string str)
{
	darkest_secret = str;
}

std::string	Phonebook::get_firstname(void)
{
	return (firstname);
}

std::string	Phonebook::get_lastname(void)
{
	return (lastname);
}

std::string	Phonebook::get_nickname(void)
{
	return (nickname);
}

std::string	Phonebook::get_login(void)
{
	return (login);
}

std::string	Phonebook::get_postal_address(void)
{
	return (postal_address);
}

std::string	Phonebook::get_email_address(void)
{
	return (email_address);
}

std::string	Phonebook::get_phone_number(void)
{
	return (phone_number);
}

std::string	Phonebook::get_birthday_date(void)
{
	return (birthday_date);
}

std::string	Phonebook::get_favorite_meal(void)
{
	return (favorite_meal);
}

std::string	Phonebook::get_underwear_color(void)
{
	return (underwear_color);
}

std::string	Phonebook::get_darkest_secret(void)
{
	return (darkest_secret);
}