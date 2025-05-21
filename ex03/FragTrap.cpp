/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:54:00 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/19 18:56:41 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

///// CANONICAL FORM /////

FragTrap::FragTrap(void) : ClapTrap() {
	_name = "DefaultFrag";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap: default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string & name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap: parametrized constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap: copy constructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& other) {
	if (this != & other) {
		ClapTrap::operator=(other);
		std::cout << "FragTrap: assignement operator called" << std::endl;
	}
	return (*this);
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap: destructor called" << std::endl;
}

///// MEMBERS FUNCTIONS /////

void	FragTrap::highFivesGuys(void) {
	std::cout << _name << ": high five guys!!" << std::endl;
}
