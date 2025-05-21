/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:16:05 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/21 17:16:23 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

///// CANONICAL /////

DiamondTrap::DiamondTrap(void) : ClapTrap("DefaultDiamond_clap_name") {
	_name = "DefaultDiamond";
	std::cout << "DiamondTrap: default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") {
	_name = name;
	std::cout << "DiamondTrap: parametrized constructor called" << std::endl;
}
