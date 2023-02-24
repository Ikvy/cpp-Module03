/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 08:55:21 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/24 09:02:06 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "<" << name << "> is a beautiful FragTrap" << std::endl; 
}

FragTrap::FragTrap(const FragTrap& cpy)
{
	*this = cpy;
	std::cout << "<" << this->getName() << "> is a beautiful copied FragTrap" << std::endl; 
}

FragTrap::~FragTrap()
{
	std::cout << "<" << this->getName() << "> is not a beautiful FragTrap anymore" << std::endl; 
}

void FragTrap::operator=(const FragTrap &s)
{
	this->setName(s.getName());
	this->setAttackDamage(s.getAttackDamage());
	this->setEnergyPoints(s.getEnergyPoints());
	this->setHitPoints(s.getHitPoints());
}

void FragTrap::highFivesGuys()
{
	std::cout << this->getName() << " wants do to a high five" << std::endl; 
}
