/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacqual <gjacqual@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 15:24:36 by gjacqual          #+#    #+#             */
/*   Updated: 2022/05/13 20:10:05 by gjacqual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

#define CONTACT_MAX_SIZE 8
#define EMPTY_PHONEBOOK "Empty Phonebook!"

class PhoneBook
{
	Contact	contacts[CONTACT_MAX_SIZE];
	int		counterCont;
public:
	PhoneBook( void );
	~PhoneBook( void );
	
	void	addContact( void );
	void	searchContact( void );
	void 	printList( void );

};

#endif