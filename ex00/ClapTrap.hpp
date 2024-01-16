/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:28:43 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/16 16:59:54 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP


#include <string>

class ClapTrap
{
private:
	std::string _Name;
	int			_HitPoints;
	int			_EnergyPoints;
	int			_AttackDamage;

public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap &obj);
	~ClapTrap();
	ClapTrap&	operator=(const ClapTrap &obj);

	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void 		beRepaired(unsigned int amount);
	std::string	getName();
	int			getHitPoints();
	int			getEnergyPoints();
	int			getAttackDamage();
	void		setHitPoints(int nb);
	void		setEnergyPoints(int nb);
	void		setAttackDamage(int nb);
};

#endif
