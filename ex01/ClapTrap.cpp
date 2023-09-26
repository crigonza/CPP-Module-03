/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:13:06 by crigonza          #+#    #+#             */
/*   Updated: 2023/09/26 10:02:29 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _hp(10), _ep(10), _ad(0)
{
    std::cout << "ClapTrap Default constructor." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _ad(0)
{
    std::cout << "ClapTrap " << name << " constructor called!." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &clap)
{
    std::cout << "Claptrap" << this->_name << "copy constructor called!." << std::endl;
    *this = clap;
}

ClapTrap    &ClapTrap::operator=(ClapTrap const &clap)
{
    std::cout << "Claptrap assignment operator." << std::endl;
    this->_name = clap._name;
    this->_hp = clap._hp;
    this->_ep = clap._hp;
    this->_ad = clap._ad;
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Clapman " << this->_name << " destructor called!" << std::endl;
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->_ep > 0)
    {
        std::cout << "Claptrap " << this->_name << " attacks " << target ;
        std::cout << " causing " << this->_ad << " points of damage!" << std::endl;
        this->_ep--;
    }
    else
        std::cout << "Not enough energy points!" << std::endl;

}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "Claptrap " << this->_name << " receive " << amount;
    std::cout << " points of damage!" << std::endl;
    this->_hp -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_ep > 0)
    {
        std::cout << "Claptrap " << this->_name << " receive " << amount;
        std::cout << " points of health!" << std::endl;
        this->_ep--;
    }
}