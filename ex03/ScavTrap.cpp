/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:39:16 by crigonza          #+#    #+#             */
/*   Updated: 2023/09/27 19:02:47 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap default constructor called!" << std::endl;
    this->_hp = 100;
    this->_ep = 50;
    this->_ad = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap " << name << " constructor called!" << std::endl;
    this->_hp = 100;
    this->_ep = 50;
    this->_ad = 20;
}

ScavTrap::ScavTrap(ScavTrap const &scav) : ClapTrap(scav)
{
    std::cout << "ScavTrap " << this->_name << " copy constructor called!." << std::endl;
}

ScavTrap    &ScavTrap::operator=(ScavTrap const &scav)
{
    std::cout << "ScavTrap assignment operator called!." << std::endl;
    ClapTrap::operator=(scav);
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << this->_name << " destructor called!" << std::endl;
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode!." << std::endl;
}


