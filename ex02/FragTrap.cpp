/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:47:43 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/16 18:52:02 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"
#include <iostream>

/*CANONICAL*/
FragTrap::FragTrap(std::string name)
{
	std::cout << "SCAAAAVTRAAAAAAAAAAAAAAAP IS BORN" << std::endl;
	this->_Name = name;
	this->_HitPoints = 100;
	this->max = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 20;
}

FragTrap::FragTrap(FragTrap &obj)
{
	std::cout << "SCAAAAVTRAAAAAAAAAAAAAAAP IS BORN (but by copy)" << std::endl;
	*this = obj;
}

FragTrap &FragTrap::operator=(FragTrap &obj)
{
	this->setName(obj.getName());
	this->setAttackDamage(obj.getAttackDamage());
	this->setEnergyPoints(obj.getEnergyPoints());
	this->setHitPoints(obj.getHitPoints());
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FRAAAAAAAAAAAAAAAAG OUUUUUUUUT" << std::endl;
}
/*CANONICAL*/

/*METHODS*/
void	FragTrap::highFivesGuys(void)
{
	std::cout << "Give me five m8 uwu ?" << std::endl;
}
/*METHODS*/
