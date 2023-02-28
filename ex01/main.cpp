/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 07:44:23 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/28 08:57:18 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	tests()
{
	ScavTrap bob("Bob");
	
	bob.attack("Fanny");
	bob.takeDamage(2);
	bob.beRepaired(1);
	
	std::cout << std::endl; 

	ScavTrap fanny("Fanny");
	fanny.attack("Bob");
	fanny.attack("Bob");
	fanny.attack("Bob");
	fanny.attack("Bob");
	fanny.attack("Bob");
	fanny.attack("Bob");
	fanny.attack("Bob");
	fanny.attack("Bob");
	fanny.attack("Bob");
	fanny.attack("Bob");
	fanny.attack("Bob");
	fanny.attack("Bob");
	fanny.attack("Bob");
	fanny.beRepaired(15);
	fanny.guardGate();

	std::cout << std::endl; 

	bob.takeDamage(1500);
	bob.beRepaired(1);
}

int main()
{
	tests();
//	system("leaks ex00"); 
}
