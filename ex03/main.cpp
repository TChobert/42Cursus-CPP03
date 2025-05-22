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

#include "DiamondTrap.hpp"

int main() {
	std::cout << "=== Default DiamondTrap ===" << std::endl;
	DiamondTrap defaultDiamond;
	defaultDiamond.whoAmI();
	defaultDiamond.attack("Enemy1");

	std::cout << "\n=== Parametrized DiamondTrap ===" << std::endl;
	DiamondTrap namedDiamond("Optimus");
	namedDiamond.whoAmI();
	namedDiamond.attack("Enemy2");

	std::cout << "\n=== Copy DiamondTrap ===" << std::endl;
	DiamondTrap copyDiamond(namedDiamond);
	copyDiamond.whoAmI();
	copyDiamond.attack("Enemy3");

	std::cout << "\n=== Assignment DiamondTrap ===" << std::endl;
	DiamondTrap assignDiamond;
	assignDiamond = namedDiamond;
	assignDiamond.whoAmI();
	assignDiamond.attack("Enemy4");

	return (EXIT_SUCCESS);
}
