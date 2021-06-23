/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 16:55:05 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/23 17:18:28 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Phonebook
{
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;
	public:
		void set_firstname(std::string firstname);
		void set_lastname(std::string lastname);
		void set_nickname(std::string nickname);
		void set_login(std::string login);
		void set_postal_address(std::string postal_address);
		void set_email_address(std::string email_address);
		void set_phone_number(std::string phone_number);
		void set_birthday_date(std::string birthday_date);
		void set_favorite_meal(std::string favorite_meal);
		void set_underwear_color(std::string underwear_color);
		void set_darkest_secret(std::string darkest_secret);
}