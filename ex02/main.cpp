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
#include "FragTrap.hpp"

int main() {
	std::cout << "=== Création d'un ClapTrap ===" << std::endl;
	ClapTrap ct("Clappy");
	ct.attack("dummy");
	std::cout << std::endl;

	std::cout << "=== Création d'un ScavTrap ===" << std::endl;
	ScavTrap st("Scavvy");
	st.attack("target1");
	st.guardGate();
	std::cout << std::endl;

	std::cout << "=== Création d'un FragTrap ===" << std::endl;
	FragTrap ft("Fraggy");
	ft.attack("target2");
	ft.highFivesGuys();
	std::cout << std::endl;

	std::cout << "=== Tests de copie et d'assignation ===" << std::endl;
	FragTrap ftCopy(ft);
	ScavTrap stAssign;
	stAssign = st;
	std::cout << std::endl;

	std::cout << "=== Fin du programme, destructeurs ===" << std::endl;
	return 0;
}
