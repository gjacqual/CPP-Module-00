/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacqual <gjacqual@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:51:03 by gjacqual          #+#    #+#             */
/*   Updated: 2022/05/13 20:29:49 by gjacqual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	counterCont = 0;
	return;
}

PhoneBook::~PhoneBook( void )
{
	return;
}

void	PhoneBook::addContact( void )
{
	contacts[counterCont % CONTACT_MAX_SIZE].setContactData();
	counterCont++;
}

void	PhoneBook::searchContact( void )
{
	if (!counterCont)
		std::cout << EMPTY_PHONEBOOK << std::endl;
	else
	{
		PhoneBook::printList();	
	}
}

void	PhoneBook::printList( void )
{
	std::cout << "|     INDEX|FIRST NAME| LAST NAME| NICK NAME|" << std::endl;
	
	for(int i = 0; i < counterCont; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|" \
		<< std::setw(10) << contacts[i].getFirstName() << "|"\
		<< std::endl;
	 
	}
	
	return;
}