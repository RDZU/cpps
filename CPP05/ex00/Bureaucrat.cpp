/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 18:50:14 by razamora          #+#    #+#             */
/*   Updated: 2025/09/06 19:17:07 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : name(src.name), grade(src.grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->grade = rhs.grade;
		// name is const and cannot be assigned
	}
	return *this;
}

std::string Bureaucrat::getName()
{
	return this->name;
}

int Bureaucrat::getGrade()
{
	return this->grade;
}

// std::ostream &operator<<(std::ostream &out, const Bureaucrat &b)
// {
// 	out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
// 	return out;
// }
