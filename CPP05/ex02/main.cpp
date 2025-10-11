/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 21:06:05 by razamora          #+#    #+#             */
/*   Updated: 2025/10/11 17:28:09 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"




int main (void)
{
	std::cout << "-----------Starting PresidentialPardonForm test-----------\n";
	Bureaucrat* zaphod = new Bureaucrat("Zaphod", 5);
	
	PresidentialPardonForm* form = new PresidentialPardonForm("Bender");
	try
	{
		std::cout << "\n";
		form->beSigned(*zaphod);
		std::cout << "\n";
		zaphod->executeForm(*form);
		std::cout << "\n";
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete form;
	delete zaphod;
	std::cout << "\n";

}
