/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 07:44:23 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/24 08:59:55 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	tests()
{
	FragTrap bob("Bob");
	
	bob.attack("Fanny");
	bob.takeDamage(2);
	bob.beRepaired(1);
	
	std::cout << std::endl; 

	FragTrap fanny("Fanny");
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
	fanny.highFivesGuys();

	std::cout << std::endl; 

	bob.takeDamage(15000);
	bob.beRepaired(1);
}

int main()
{
	tests();
//	system("leaks ex00"); 
}
