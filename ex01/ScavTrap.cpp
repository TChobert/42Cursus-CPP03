/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 19:04:35 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/18 19:04:47 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) 
	: ClapTrap() {
	_name = "Default Scav";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamages = 20;
	std::cout << "ScavTrap: default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string&name) 
	: ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamages = 20;
	std::cout << "ScavTrap: constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	std::cout << "ScavTrap: copy constructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other) {
		std::cout << "ClapTrap: assignement operator called" << std::endl;
		ClapTrap::operator=(other);
	}
	return (*this);
}
