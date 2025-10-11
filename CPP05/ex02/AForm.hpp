/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:36:46 by razamora          #+#    #+#             */
/*   Updated: 2025/10/11 17:00:26 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>

class Bureaucrat;
class AForm
{
	private:
		// Add member variables here
		std::string _name;
		bool _isSigned;
		int _gradeToSign;
		int _gradeToExecute;
	public:
		AForm();
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		~AForm();
		AForm(const AForm &src);
		AForm &operator=(const AForm &rhs);

		bool isSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		virtual void execute(const Bureaucrat &executor) const = 0;
		virtual void beSigned(const Bureaucrat &b);
		std::string getName() const;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class FormNotSignedException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		// Add other member functions here

};

std::ostream &operator<<(std::ostream &out, const AForm &f);
#endif