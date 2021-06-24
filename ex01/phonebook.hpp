/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 16:55:05 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/24 13:24:11 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class				Phonebook
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
		void		set_firstname(std::string str);
		void		set_lastname(std::string str);
		void		set_nickname(std::string str);
		void		set_login(std::string str);
		void		set_postal_address(std::string str);
		void		set_email_address(std::string str);
		void		set_phone_number(std::string str);
		void		set_birthday_date(std::string str);
		void		set_favorite_meal(std::string str);
		void		set_underwear_color(std::string str);
		void		set_darkest_secret(std::string str);

		std::string	get_firstname();
		std::string	get_lastname();
		std::string	get_nickname();
		std::string	get_login();
		std::string	get_postal_address();
		std::string	get_email_address();
		std::string	get_phone_number();
		std::string	get_birthday_date();
		std::string	get_favorite_meal();
		std::string	get_underwear_color();
		std::string	get_darkest_secret();
};