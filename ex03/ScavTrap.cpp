/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:39:16 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/04 20:47:41 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap Default constructor called!." << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap " << name << " constructor called!." << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
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
    std::cout << "ScavTrap " << this->_name << " destructor called!." << std::endl;
}

void    ScavTrap::guardGate(void)
{
    if (this->_hitPoints > 0)
        std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode!." << std::endl;
    else
        std::cout << this->_name << " is dead." << std::endl;
}

void    ScavTrap::attack(const std::string &target)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        std::cout << "ScavTrap " << this->_name << " attacks " << target ;
        std::cout << " causing " << this->_attackDamage << " points of damage!." << std::endl;
        this->_energyPoints--;
    }
    else
    {
        if (this->_hitPoints <= 0)
            std::cout << this->_name << " is dead." << std::endl;
        if (this->_energyPoints == 0)
            std::cout << this->_name << " has not enough energy points!." << std::endl;
    }
}
