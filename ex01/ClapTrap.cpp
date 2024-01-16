/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:28:40 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/16 18:38:51 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"
#include <iostream>


/*CANONICAL*/
ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Parametric constructor called" << std::endl;
	this->_Name = name;
	this->max = 10;
	this->_HitPoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "Copy assignment called" << std::endl;
	this->_Name = obj._Name;
	this->_AttackDamage = obj._AttackDamage;
	this->_EnergyPoints = obj._EnergyPoints;
	this->_HitPoints = obj._HitPoints;
	return *this;
}
/*CANONICAL*/


/*GETTERS*/
std::string	ClapTrap::getName()
{
	return this->_Name;
}

int ClapTrap::getAttackDamage()
{
	return this->_AttackDamage;
}

int ClapTrap::getEnergyPoints()
{
	return this->_EnergyPoints;
}

int	ClapTrap::getHitPoints()
{
	return this->_HitPoints;
}
/*GETTERS*/

/*SETTERS*/
void	ClapTrap::setName(std::string name)
{
	this->_Name = name;
}

void	ClapTrap::setAttackDamage(int nb)
{
	if (nb < 0)
	{
		std::cout << "Attack Damage must be positive" << std::endl;
		return ;
	}
	this->_AttackDamage = nb;
}

void	ClapTrap::setEnergyPoints(int nb)
{
	if (nb < 0)
	{
		std::cout << "Energy Points must be positive" << std::endl;
		return ;
	}
	else
		this->_EnergyPoints = nb;
}

void	ClapTrap::setHitPoints(int nb)
{
	if (nb < 0)
		this->_HitPoints = 0;
	else
	{
		if (nb > this->max)
			this->_HitPoints = max;
		else
			this->_HitPoints = nb;
	}
}
/*SETTERS*/


/*METHODS*/
void	ClapTrap::attack(const std::string& target)
{
	if (!this->getHitPoints())
		std::cout << "ClapTrap" << this->getName() << " has " << this->getHitPoints() << " Hit Points left! It can't attack!" << std::endl;
	else if (!this->getEnergyPoints())
		std::cout << "ClapTrap" << this->getName() << " has " << this->getEnergyPoints() << " Energy Points left! It can't attack!" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int temp = this->getHitPoints();
	this->setHitPoints(this->getHitPoints() - amount);
	std::cout << "ClapTrap" << this->getName() << " takes " << amount << " damages, dropping its HP from " << temp << " to " << this->getHitPoints() << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->getHitPoints())
		std::cout << "ClapTrap " << this->getName() << " has " << this->getHitPoints() << " Hit Points left! It can't be repaired!" << std::endl;
	else if (!this->getEnergyPoints())
		std::cout << "ClapTrap " << this->getName() << " has " << this->getEnergyPoints() << " Energy Points left! It can't be repaired!" << std::endl;
	else
	{
		int temp = this->getHitPoints();
		this->setHitPoints(getHitPoints() + amount);
		std::cout << "ClapTrap" << this->getName() << " repairs itself and gets " << amount << " HP back. Its HP go from " << temp << " to " << this->getHitPoints() << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
}

/*METHODS*/



