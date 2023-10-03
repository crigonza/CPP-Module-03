/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap copy.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:13:06 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/02 21:14:32 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _hp(10), _ep(10), _ad(0)
{
    std::cout << "ClapTrap Default constructor called!." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _ad(0)
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
    this->_hp = clap._hp;
    this->_ep = clap._hp;
    this->_ad = clap._ad;
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << this->_name << " destructor called!." << std::endl;
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->_ep > 0 && this->_hp > 0)
    {
        std::cout << "Claptrap " << this->_name << " attacks " << target ;
        std::cout << " causing " << this->_ad << " points of damage!" << std::endl;
        this->_ep--;
    }
    else
    {
        if (this->_hp <= 0)
            std::cout << this->_name << " is dead." << std::endl;
        if (this->_ep == 0)
            std::cout << this->_name << " has not enough energy points!" << std::endl;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hp > 0)
    {
        std::cout << "Claptrap " << this->_name << " receive " << amount;
        std::cout << " points of damage!" << std::endl;
        this->_hp -= amount;
    }
    else
            std::cout << this->_name << " is dead." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_ep > 0 && this->_hp > 0) 
    {
        std::cout << "Claptrap " << this->_name << " receive " << amount;
        std::cout << " points of health!" << std::endl;
        this->_ep--;
    }
    else
    {
        if (this->_hp <= 0)
            std::cout << this->_name << " is dead." << std::endl;
        if (this->_ep == 0)
            std::cout << this->_name << " has not enough energy points!" << std::endl;

    }
}