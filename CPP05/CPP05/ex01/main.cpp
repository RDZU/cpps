/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 21:06:05 by razamora          #+#    #+#             */
/*   Updated: 2025/10/04 22:07:40 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"




int main (void)
{
	// try {
	// 	Bureaucrat b("John", 0);
	// 	std::cout << b;
	// } catch (const std::exception &e) {
	// 	std::cerr << e.what() << std::endl;
	// }
	// try {
	// 	Bureaucrat b("Doe", 151);
	// 	std::cout << b;
	// } catch (const std::exception &e) {
	// 	std::cerr << e.what() << std::endl;
	// }
	// try {
	// 	Bureaucrat b("Alice", 75);
	// 	std::cout << b;
	// 	b.incrementGrade();
	// 	std::cout << b;
	// 	b.decrementGrade();
	// 	std::cout << b;
	// } catch (const std::exception &e) {
	// 	std::cerr << e.what() << std::endl;
	// }

	

	Bureaucrat b("Bob", 2);
	std::cout << b;
	try {
		Form f("TopSecret", 1, 1);
		b.signForm(f);
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "---------------------------------" << std::endl;
	Bureaucrat bb("Bob", 2);
	std::cout << bb;
	try {
		Form ff("TopSecret", 0, 0);
		bb.signForm(ff);
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}