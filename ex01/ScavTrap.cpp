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

///// CANONICAL FORM /////

ScavTrap::ScavTrap(void) 
	: ClapTrap() {
	_name = "Default Scav";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamages = 20;
	_isInGateKeep = false;
	std::cout << "ScavTrap: default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string&name) 
	: ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamages = 20;
	_isInGateKeep = false;
	std::cout << "ScavTrap: constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	this->_isInGateKeep = other._isInGateKeep;
	std::cout << "ScavTrap: copy constructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other) {
		std::cout << "ClapTrap: assignement operator called" << std::endl;
		ClapTrap::operator=(other);
		this->_isInGateKeep = other._isInGateKeep;
	}
	return (*this);
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap: destructor called" << std::endl;
}

///// MEMBERS FUNCTIONS /////

void	ScavTrap::attack(const std::string& target) {
	if (this->_hitPoints <= 0) {
		std::cout << "ScavTrap " << this->_name << " is already dead!" << std::endl;
	} else if (this->_energyPoints == 0) {
		std::cout << "ScavTrap " << this->_name << " is out of energy!" << std::endl;
	} else {
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing "
			<< this->_attackDamages << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
	}
}

void	ScavTrap::guardGate(void) {
	if (_isInGateKeep == false)
		_isInGateKeep = true;
	std::cout << "ScavTrap " << _name << " is in gate keeper mode" << std::endl;
}
