/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:37:03 by razamora          #+#    #+#             */
/*   Updated: 2025/10/10 15:54:28 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Required grades: sign 145, exec 137
Creates a file <target>_shrubbery in the working directory and writes ASCII*/

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{

	private:
		std::string _target;
	public:
		ShrubberyCreationForm(const std::string &target);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);

		virtual void execute(const Bureaucrat &executor) const;

};



#endif