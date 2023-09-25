/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:13:06 by crigonza          #+#    #+#             */
/*   Updated: 2023/09/25 20:07:40 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _hp(10), _ep(10), _ad(0)
{
    std::cout << "ClapTrap Default constructor." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _ad(0)
{
    std::cout << "ClapTrap" << name << "constructor." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &clap) : _name()
{
    
}

ClapTrap    &Claptrap::operator=(ClapTrap const &clap)
{

}

ClapTrap::~ClapTrap(void)
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