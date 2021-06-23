/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 15:32:22 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/23 15:43:46 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void		change_to_upper(char *str)
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

void		print_str(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		change_to_upper(argv[i]);
		std::cout << argv[i];
		if (i + 1 != argc)
			std::cout << " ";
		else
			std::cout << "\n";
		i++;
	}
}

int			main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		print_str(argc, argv);
	return (0);
}