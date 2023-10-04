/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:19:30 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/04 20:43:42 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) :  ClapTrap(), ScavTrap(), FragTrap()
{
    this->_name = "Default";
    ClapTrap::_name = this->_name + "_clap_name";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = this->ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap Default constructor called!." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : 
ClapTrap(name),
ScavTrap(name),
FragTrap(name)
{
    this->_name = name;
    ClapTrap::_name = this->_name + "_clap_name";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = this->ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap " << this->_name << " constructor called!." << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &diamond) :
ClapTrap(diamond),
ScavTrap(diamond),
FragTrap(diamond)
{
    std::cout << "DiamondTrap" << this->_name << " copy constructor called!." << std::endl;
    *this = diamond;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap " << this->_name << " destructor called!." << std::endl;
}

DiamondTrap     &DiamondTrap::operator=(DiamondTrap const &diamond)
{
    std::cout << "DiamondTrap assignment operator called!." << std::endl;
    this->_name = diamond._name;
    ClapTrap::_name = diamond._name + "_clap_name";
    this->_hitPoints = diamond._hitPoints;
    this->_energyPoints = diamond._energyPoints;
    this->_attackDamage = diamond._attackDamage;
    return (*this);
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "I am " << this->_name << " and ";
    std::cout << "my ClapTrap name is " << ClapTrap::_name << std::endl;
}
    