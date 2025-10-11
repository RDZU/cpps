/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:36:43 by razamora          #+#    #+#             */
/*   Updated: 2025/10/11 17:35:57 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp" // Add this line

AForm::AForm() : _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150) {}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute): _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

AForm::~AForm(){}

AForm::AForm(const AForm &src)
{
	*this = src;
}
AForm &AForm::operator=(const AForm &rhs)
{
	if (this != &rhs) {
		// Copy member variables here
	}
	return *this;
}
const char* AForm::GradeTooHighException::what() const throw() {
	return "Grade too high";
}
const char* AForm::GradeTooLowException::what() const throw() {
	return "Grade too low";
}
const char* AForm::FormNotSignedException::what() const throw() {
	return "Form not signed";
}
std::string AForm::getName() const {
	return this->_name;
}
bool AForm::isSigned() const {
	return this->_isSigned;
}
int AForm::getGradeToSign() const {
	return this->_gradeToSign;
}
int AForm::getGradeToExecute() const {
	return this->_gradeToExecute;
}
std::ostream &operator<<(std::ostream &out, const AForm &f) {
	out << "Form Name: " << f.getName() << ", Signed: " << (f.isSigned() ? "Yes" : "No")
		<< ", Grade to Sign: " << f.getGradeToSign() << ", Grade to Execute: " << f.getGradeToExecute();
	return out;
}

void AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > this->getGradeToSign())
		throw GradeTooLowException();
	this->_isSigned = true;
}

