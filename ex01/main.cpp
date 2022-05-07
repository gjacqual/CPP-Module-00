/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacqual <gjacqual@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:24:53 by gjacqual          #+#    #+#             */
/*   Updated: 2022/05/07 15:32:10 by gjacqual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pbmain.hpp"

int main(void)
{
	std::string cmd;
	
	std::cout << PROMPT << PLEASE_ENTER << std::endl;

	while (1)
	{
		std::cout << PROMPT;
		std::getline(std::cin, cmd);
		if (cmd == "EXIT")
		{
			std::cout << PROMPT << EXIT_MSG <<std::endl;
			return 0;
		}
		else if (cmd == "ADD")
		{
			
		}
		else if (cmd == "SEARCH")
		{
			
		}
		else
			std::cout << PROMPT << ERROR_MSG <<std::endl;
	}
	return 0;
}
