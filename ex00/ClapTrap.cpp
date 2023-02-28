/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 07:02:25 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/28 08:54:14 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp" 

ClapTrap& ClapTrap::operator=(const ClapTrap &c)
{
	this->name = c.getName();
	this->AttackDamage = c.getAttackDamage();
	this->EnergyPoints = c.getEnergyPoints();
	this->HitPoints = c.getHitPoints();
	return (*this);
}

ClapTrap::ClapTrap(std::string name) : name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "<" << name << "> has been created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
	*this = cpy;
	std::cout << "<" << this->name << "> has been created be copy" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "<"<<this->name << "> has been destructed" << std::endl; 
}

std::string ClapTrap::getName() const
{
	return (this->name);
}

unsigned int ClapTrap::getAttackDamage() const
{
	return (this->AttackDamage);
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return (this->EnergyPoints);
}

unsigned int ClapTrap::getHitPoints() const
{
	return (this->HitPoints);
}

void ClapTrap::attack(const std::string& target)
{
	if (!this->EnergyPoints)
	{
		std::cout << this->name << " is out of energy..." << std::endl; 
		return;
	}
	if (!this->HitPoints)
	{
		std::cout << this->name << " is out of life..." << std::endl; 
		return;
	}
	this->EnergyPoints -=1;
	std::cout << this->name << " caused " << target << " " << this->AttackDamage << " damages" << std::endl; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->HitPoints)
		this->HitPoints = 0;
	else
		this->HitPoints -= amount;
	std::cout << name << " has taken " << amount << " damages" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->HitPoints)
	{
		std::cout << this->name << " is out of life..." << std::endl; 
		return;
	}
	if (!this->EnergyPoints)
	{
		std::cout << this->name << " is out of energy..." << std::endl; 
		return;
	}
	this->EnergyPoints -=1;
	this->HitPoints += amount;
	std::cout << name << " has repaired " << amount << " hp" << std::endl;

}
