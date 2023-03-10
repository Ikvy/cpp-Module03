/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 08:09:29 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/28 09:01:46 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
	FragTrap(std::string name);
	FragTrap(const FragTrap& cpy);
	FragTrap& operator=(const FragTrap &s);
	~FragTrap();
	void highFivesGuys();
};

#endif
