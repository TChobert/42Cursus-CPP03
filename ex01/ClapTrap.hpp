/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:31:35 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/17 15:32:12 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <cstdlib>
# include <string>
# include <iostream>
# include <climits>

class ClapTrap {

	protected:

	std::string			_name;
	int					_hitPoints;
	int					_energyPoints;
	int					_attackDamages;

	public:

	//Orthodox canonical:

	ClapTrap(void);
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& other);
	ClapTrap&	operator=(const ClapTrap& other);
	~ClapTrap(void);

	//Setters and getters:

	const std::string&	getName(void) const;
	int					getHitPoints(void) const;
	int					getEnergyPoints(void) const;
	int					getAttackDamages(void) const;
	void				setName(std::string name);
	void				setHitPoints(unsigned int amount);
	void				setEnergyPoints(unsigned int amount);
	void				setAttackDamages(unsigned int amount);
	bool				isAlive(void) const;

	//Member functions:

	void		attack(const std::string& target);
	void		takeDamage(unsigned int amout);
	void		beRepaired(unsigned int amount);
};

#endif
