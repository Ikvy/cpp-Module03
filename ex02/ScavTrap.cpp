/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 08:15:02 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/28 09:00:07 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//This file is completly useless for this but the subject tells to put it here 

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "<" << name << "> is a beautiful scavtrap" << std::endl; 
}

ScavTrap::ScavTrap(const ScavTrap& cpy)
{
	*this = cpy;
	std::cout << "<" << this->getName() << "> is a beautiful copied scavtrap" << std::endl; 
}

ScavTrap::~ScavTrap()
{
	std::cout << "<" << this->getName() << "> is not a beautiful scavtrap anymore" << std::endl; 
}

ScavTrap& ScavTrap::operator=(const ScavTrap &s)
{
	this->setName(s.getName());
	this->setAttackDamage(s.getAttackDamage());
	this->setEnergyPoints(s.getEnergyPoints());
	this->setHitPoints(s.getHitPoints());
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << this->getName() << " has entered Gate keeper mode" << std::endl; 
}
