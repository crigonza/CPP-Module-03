/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:13:06 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/04 18:17:22 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : 
_name("Default"), _hitPoints(10),
_energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap Default constructor called!." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : 
_name(name), _hitPoints(10),
_energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << name << " constructor called!." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &clap)
{
    std::cout << "Claptrap" << this->_name << " copy constructor called!." << std::endl;
    *this = clap;
}

ClapTrap    &ClapTrap::operator=(ClapTrap const &clap)
{
    std::cout << "Claptrap assignment operator called!." << std::endl;
    this->_name = clap._name;
    this->_hitPoints = clap._hitPoints;
    this->_energyPoints = clap._energyPoints;
    this->_attackDamage = clap._attackDamage;
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << this->_name << " destructor called!." << std::endl;
}

void    ClapTrap::showStats(void)
{
    std::cout << this->_name << " stats = hit points:" << this->_hitPoints;
    std::cout << ", energy points:" << this->_energyPoints << ", attack damage:";
    std::cout << this->_attackDamage << std::endl;
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        std::cout << "Claptrap " << this->_name << " attacks " << target ;
        std::cout << " causing " << this->_attackDamage << " points of damage!.";
        std::cout << std::endl;
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

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints > 0)
    {
        std::cout << "Claptrap " << this->_name << " receive " << amount;
        std::cout << " points of damage!" << std::endl;
        this->_hitPoints -= amount;
    }
    else
            std::cout << this->_name << " is dead." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0) 
    {
        std::cout << "Claptrap " << this->_name << " heal itself and receive ";
        std::cout << amount << " points of health!." << std::endl;
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