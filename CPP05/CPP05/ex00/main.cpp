/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 18:50:20 by razamora          #+#    #+#             */
/*   Updated: 2025/09/20 19:47:43 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"



int main (void)
{
	try {
		Bureaucrat b("John", 0);
		std::cout << b;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat b("Doe", 151);
		std::cout << b;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat b("Alice", 75);
		std::cout << b;
		b.incrementGrade();
		std::cout << b;
		b.decrementGrade();
		std::cout << b;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}