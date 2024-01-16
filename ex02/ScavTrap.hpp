/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:23:20 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/16 18:39:12 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "./ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	int max;

public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &obj);
	ScavTrap &operator=(ScavTrap &obj);
	~ScavTrap();

	void	attack(const std::string& target);
	void	guardGate();
};

#endif
