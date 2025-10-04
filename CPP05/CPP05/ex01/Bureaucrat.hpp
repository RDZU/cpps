/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 18:50:17 by razamora          #+#    #+#             */
/*   Updated: 2025/10/04 20:56:47 by razamora         ###   ########.fr       */
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
		Bureaucrat(std::string name, int grade);
		Bureaucrat &operator=(const Bureaucrat &rhs);
		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		int signForm(class Form &f) const;
		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
};
std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);


#endif

