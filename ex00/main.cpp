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

int main(void) {
	ClapTrap a("Alpha");
	ClapTrap b("Bravo");

	a.setAttackDamage(5);
	b.setAttackDamage(7);

	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());

	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());

	a.beRepaired(3);
	b.beRepaired(10);

	a.takeDamage(100);  // tuer Alpha
	a.attack(b.getName());  // doit bloquer
	a.beRepaired(5);  // doit bloquer

	ClapTrap copy;
	copy = b;
	copy.setName("CopyBravo");
	copy.attack("Dummy");

	return 0;
}

// int	main(void) {
// 	ClapTrap	clapOne;
// 	ClapTrap	clapTwo("Number2");
// 	ClapTrap	cloneTrap = clapTwo;
// 	ClapTrap	copyTrap(clapOne);

// 	std::cout << "\nINTRODUCING OUR GUESTS:" << std::endl;
// 	std::cout << "clapOne is: " << clapOne.getName() << std::endl;
// 	std::cout << "clapTwo is: " << clapTwo.getName() << std::endl;
// 	std::cout << "cloneTrap is a clone of: " << cloneTrap.getName() << std::endl;
// 	std::cout << "copyTrap is a copy of: " << copyTrap.getName() << std::endl;
// 	std::cout << "\n!! LET'S FIGHT !!\n" << std::endl;

// 	// Paramétrage des dégâts
// 	clapOne.setAttackDamages(5);
// 	clapTwo.setAttackDamages(4);
// 	cloneTrap.setAttackDamages(3);
// 	copyTrap.setAttackDamages(6);

// 	// Round 1
// 	clapOne.attack(copyTrap.getName());
// 	copyTrap.takeDamage(clapOne.getAttackDamages());
// 	std::cout << "copyTrap HP: " << copyTrap.getHitPoints() << "\n" << std::endl;

// 	// Round 2
// 	copyTrap.attack(clapOne.getName());
// 	clapOne.takeDamage(copyTrap.getAttackDamages());
// 	std::cout << "clapOne HP: " << clapOne.getHitPoints() << "\n" << std::endl;

// 	// Round 3
// 	cloneTrap.attack(copyTrap.getName());
// 	copyTrap.takeDamage(cloneTrap.getAttackDamages());
// 	std::cout << "copyTrap HP: " << copyTrap.getHitPoints() << "\n" << std::endl;

// 	// Round 4 - Repair
// 	copyTrap.beRepaired(5);
// 	std::cout << "copyTrap repairs and now has " << copyTrap.getHitPoints() << " HP.\n" << std::endl;

// 	// Round 5
// 	clapTwo.attack(cloneTrap.getName());
// 	cloneTrap.takeDamage(clapTwo.getAttackDamages());
// 	std::cout << "cloneTrap HP: " << cloneTrap.getHitPoints() << "\n" << std::endl;

// 	// Test de la mort
// 	std::cout << "\n-- copyTrap is targeted for destruction --" << std::endl;
// 	copyTrap.takeDamage(100);
// 	copyTrap.attack(clapOne.getName());
// 	copyTrap.beRepaired(5);
// 	std::cout << "copyTrap HP: " << copyTrap.getHitPoints() << "\n" << std::endl;

// 	// Test de l'énergie à 0
// 	std::cout << "-- clapOne attacks until out of energy --" << std::endl;
// 	for (int i = 0; i < 11; i++) {
// 		clapOne.attack("dummy");
// 	}
// 	std::cout << "clapOne Energy: " << clapOne.getEnergyPoints() << "\n" << std::endl;

// 	// Test des setters & getters
// 	std::cout << "-- Setting stats for clapTwo --" << std::endl;
// 	clapTwo.setHitPoints(30);
// 	clapTwo.setEnergyPoints(5);
// 	clapTwo.setAttackDamages(8);
// 	std::cout << "clapTwo => HP: " << clapTwo.getHitPoints()
// 				<< ", Energy: " << clapTwo.getEnergyPoints()
// 				<< ", Damage: " << clapTwo.getAttackDamages() << "\n" << std::endl;

// 	// Test affectation
// 	std::cout << "-- Assignment test --" << std::endl;
// 	ClapTrap another = clapTwo;
// 	std::string newName = "AnotherClap";
// 	another.setName(newName);
// 	another.attack(clapOne.getName());

// 	// Destructeur automatique
// 	std::cout << "\n-- Temporary ClapTrap block --" << std::endl;
// 	{
// 		ClapTrap temp("TempTrap");
// 		temp.attack("Nobody");
// 	}
// 	std::cout << "-- TempTrap should now be destroyed --\n" << std::endl;

// 	std::cout << "=== END OF FIGHT ===" << std::endl;
// 	return (EXIT_SUCCESS);
// }