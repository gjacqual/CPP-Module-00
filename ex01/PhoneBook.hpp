/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacqual <gjacqual@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 15:24:36 by gjacqual          #+#    #+#             */
/*   Updated: 2022/05/07 16:42:08 by gjacqual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <Contact.hpp>

#define CONTACT_MAX_SIZE 8

class PhoneBook
{
	Contact	contacts[CONTACT_MAX_SIZE];
	int		quantity;
public:
	void	add_contact(void);
	void	search_contact(void);
};

#endif