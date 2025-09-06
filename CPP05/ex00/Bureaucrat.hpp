/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 18:50:17 by razamora          #+#    #+#             */
/*   Updated: 2025/09/06 19:18:13 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>


class Bureaucrat
{
	private:
		std::string const name;
		int grade;
		
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat &operator=(const Bureaucrat &rhs);
		std::string getName();
		int getGrade();
		GradeTooHighException();
};


#endif

