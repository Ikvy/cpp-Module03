/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 07:44:23 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/24 08:00:30 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	tests()
{
	ClapTrap bob("Bob");
	
	bob.attack("Fanny");
	bob.takeDamage(2);
	bob.beRepaired(1);
	
	std::cout << std::endl; 

	ClapTrap fanny("Fanny");
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

	std::cout << std::endl; 

	bob.takeDamage(150);
	bob.beRepaired(1);
}

int main()
{
	tests();
	system("leaks ex00"); 
}
