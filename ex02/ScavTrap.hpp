/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 08:09:29 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/28 09:00:21 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//This file is completly useless for this but the subject tells to put it here 
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& cpy);
	ScavTrap& operator=(const ScavTrap &s);
	~ScavTrap();
	void guardGate();
};

#endif
