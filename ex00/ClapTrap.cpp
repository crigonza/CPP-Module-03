/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:13:06 by crigonza          #+#    #+#             */
/*   Updated: 2023/09/21 12:30:26 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hit_points(10), _energy_points(10), _attack_damage(0)
{
}

ClapTrap::~ClapTrap(void)
{
}

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
}

ClapTrap::ClapTrap(ClapTrap const &clap)
{
    return(*this);
}

ClapTrap    &Claptrap::operator=(ClapTrap const &clap)
{

}

void    ClapTrap::attack(const std::string &target)
{

}

void    ClapTrap::takeDamage(unsigned int amount)
{

}

void    ClapTrap::beRepaired(unsigned int amount)
{
    
}