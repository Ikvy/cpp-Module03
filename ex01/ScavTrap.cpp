/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 08:15:02 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/24 08:44:39 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void ScavTrap::operator=(const ScavTrap &s)
{
	this->setName(s.getName());
	this->setAttackDamage(s.getAttackDamage());
	this->setEnergyPoints(s.getEnergyPoints());
	this->setHitPoints(s.getHitPoints());
}

void ScavTrap::guarGate()
{
	std::cout << this->getName() << " has entered in Gate keeper mode" << std::endl; 
}
