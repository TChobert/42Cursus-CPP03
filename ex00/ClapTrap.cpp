/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 16:55:35 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/17 16:55:50 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

///// ORTHODOX CANONICAL FORM /////

ClapTrap::ClapTrap(void) :_name("DefaultClap"), _hitPoints(10), _energyPoints(10),
							_attackDamages(0) {
	std::cout << "ClapTrap: default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) :_name(name), _hitPoints(10), _energyPoints(10),
					_attackDamages(0) {
	std::cout << "ClapTrap: constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) :_name(other._name), _hitPoints(other._hitPoints),
											_energyPoints(other._energyPoints),
											_attackDamages(other._attackDamages) {
	std::cout << "ClapTrap: copy constructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamages = other._attackDamages;
	}
	std::cout << "ClapTrap: assignement operator called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap: destructor called" << std::endl;
}

///// GETTERS /////

const std::string&	ClapTrap::getName(void) const {
	return (_name);
}

int	ClapTrap::getHitPoints(void) const {
	return (_hitPoints);
}

int	ClapTrap::getEnergyPoints(void) const {
	return (_energyPoints);
}

int	ClapTrap::getAttackDamages(void) const {
	return (_attackDamages);
}

///// SETTERS /////

void	ClapTrap::setName(std::string& name) {
	_name = name;
}

void	ClapTrap::setHitPoints(unsigned int amount) {
	_hitPoints = amount;
}

void	ClapTrap::setEnergyPoints(unsigned int amount) {
	_energyPoints = amount;
}

void	ClapTrap::setAttackDamages(unsigned int amount) {
	_attackDamages = amount;
}

///// MEMBERS FUNCTIONS /////

void	ClapTrap::attack(const std::string& target) {
	if (this->_hitPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
	} else if (this->_energyPoints == 0) {
		std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
	} else {
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamages << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
	} else {
		this->_hitPoints -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
	} else if (this->_energyPoints == 0) {
		std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
	} else {
		this->_hitPoints += amount;
		if (this->_energyPoints > 0) {
			this->_energyPoints -= 1;
		}
	}
}
