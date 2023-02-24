/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 08:09:29 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/24 08:50:52 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& cpy);
	void operator=(const ScavTrap &s);
	~ScavTrap();
	void guarGate();
};

#endif
