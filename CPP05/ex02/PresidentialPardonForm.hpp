/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:36:52 by razamora          #+#    #+#             */
/*   Updated: 2025/10/11 15:37:55 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Required grades: sign 25, exec 5
Informs that <target> has been pardoned by Zaphod Beeblebrox
*/

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include <iostream>
#include <string>
#include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
{

	private:
		std::string _target;
		
	public:
		PresidentialPardonForm(const std::string &target);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &src);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);

		void execute(const Bureaucrat &executor) const;
		std::string getName() const;
		const std::string &getTarget() const;
		// Other member functions if needed
};
std::ostream &operator<<(std::ostream &out, const PresidentialPardonForm &f);
#endif


