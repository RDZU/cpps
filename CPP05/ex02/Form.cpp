/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 20:32:05 by razamora          #+#    #+#             */
/*   Updated: 2025/10/08 20:09:52 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Default"), isSigned(false), gradeToSign(150), gradeToExecute(150) {
	std::cout << "Form default constructor called" << std::endl;
}
Form::~Form() {
	std::cout << "Form destructor called" << std::endl;
}
Form::Form(const Form &src) : name(src.name), isSigned(src.isSigned), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute) {
	std::cout << "Form copy constructor called" << std::endl;
}
Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	std::cout << "Form parameterized constructor called" << std::endl;
}
Form &Form::operator=(const Form &rhs) {
	if (this != &rhs) {
		this->isSigned = rhs.isSigned;
		// name, gradeToSign, and gradeToExecute are const and cannot be assigned
	}
	std::cout << "Form assignment operator called" << std::endl;
	return *this;
}

std::string Form::getName() const {
	return this->name;
}
bool Form::getIsSigned() const {
	return this->isSigned;
}
int Form::getGradeToSign() const {
	return this->gradeToSign;
}
int Form::getGradeToExecute() const {
	return this->gradeToExecute;
}
void Form::beSigned(const Bureaucrat &b) {
	if (b.getGrade() > this->gradeToSign)
		throw GradeTooLowException();
	this->isSigned = true;
}


const char* Form::GradeTooHighException::what() const throw() {
	return "Form Exception: Grade too high";
}
const char* Form::GradeTooLowException::what() const throw() {
	return "Form Exception: Grade too low";
}
std::ostream &operator<<(std::ostream &out, const Form &f) {
	out << "Form " << f.getName() << ", signed: " << (f.getIsSigned() ? "yes" : "no")
		<< ", grade required to sign: " << f.getGradeToSign()
		<< ", grade required to execute: " << f.getGradeToExecute() << " " << std::endl;
	return out;
}
