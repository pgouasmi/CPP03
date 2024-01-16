/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:23:14 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/16 18:35:23 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"
#include <iostream>

/*CANONICAL*/
ScavTrap::ScavTrap(std::string name)
{
	std::cout << "SCAAAAVTRAAAAAAAAAAAAAAAP IS BORN" << std::endl;
	this->_Name = name;
	this->_HitPoints = 100;
	this->max = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap &obj)
{
	std::cout << "SCAAAAVTRAAAAAAAAAAAAAAAP IS BORN (but by copy)" << std::endl;
	*this = obj;
}

ScavTrap &ScavTrap::operator=(ScavTrap &obj)
{
	this->setName(obj.getName());
	this->setAttackDamage(obj.getAttackDamage());
	this->setEnergyPoints(obj.getEnergyPoints());
	this->setHitPoints(obj.getHitPoints());
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SCAAAAVTRAAAAAAAAAAAAAAAP OUUUUUUUUT" << std::endl;
}
/*CANONICAL*/

/*METHODS*/
void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout << "SCAAAAAAAAAAAAAAV " << this->getName() << " pulls out his gun and inflicts " << this->getAttackDamage() << " damage to " << target << std::endl;
}
/*METHODS*/
