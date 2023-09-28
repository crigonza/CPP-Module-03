/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:45:30 by crigonza          #+#    #+#             */
/*   Updated: 2023/09/27 20:03:05 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap default constructor called!" << std::endl;
    this->_hp = 100;
    this->_ep = 100;
    this->_ad = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap " << name << " constructor called!" << std::endl;
    this->_hp = 100;
    this->_ep = 100;
    this->_ad = 30;
}

FragTrap::FragTrap(FragTrap const &frag) : ClapTrap(frag)
{
    std::cout << "FragTrap " << this->_name << " copy constructor called!." << std::endl;
}

FragTrap    &FragTrap::operator=(FragTrap const &frag)
{
    std::cout << "FragTrap assignment operator called!." << std::endl;
    ClapTrap::operator=(frag);
    return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << this->_name << " destructor called!" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " is requesting a positive high five!.";
    std::cout << std::endl;
}