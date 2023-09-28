/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:19:30 by crigonza          #+#    #+#             */
/*   Updated: 2023/09/27 20:57:35 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap()
{
    this->_name = "Default";
    FragTrap::_name = "Default_clap_name";
    this->FragTrap::_hp = FragTrap::_hp;
    this->ScavTrap::_ep = ScavTrap::_ep;
    this->FragTrap::_ad = FragTrap::_ad;
    
    std::cout << "DiamondTrap Default constructor called!" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap " << this->_name << " destructor called!" << std::endl;
}
    