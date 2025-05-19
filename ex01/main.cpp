/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 19:34:05 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/17 19:34:18 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	std::cout << "=== Test Constructeurs ===" << std::endl;
	ScavTrap s1;	// constructeur par défaut
	ScavTrap s2("Guardian");	// constructeur avec nom
	ScavTrap s3 = s2;	// constructeur de copie

	std::cout << "\n=== Test Assignation ===" << std::endl;
	s1 = s2;	// opérateur d'affectation

	std::cout << "\n=== Test attack() ===" << std::endl;
	s2.attack("Target1");
	s2.attack("Target2");

	std::cout << "\n=== Test guardGate() ===" << std::endl;
	s2.guardGate();	// test du mode spécial
	s2.guardGate(); // bis
	s1.guardGate(); //s1
	s3.guardGate(); //s3

	std::cout << "\n=== Fin des tests ===" << std::endl;
	return (EXIT_SUCCESS);
}
