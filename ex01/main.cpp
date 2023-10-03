/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:33:40 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/03 08:26:51 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int     main(void)
{
    ScavTrap    def;
    ScavTrap    hodor("Hodor");
    ScavTrap    copy(hodor);
    ScavTrap    white("White Walker");

    def = white;

    def.attack("Hodor");
    hodor.takeDamage(10);
    hodor.beRepaired(15);
    hodor.guardGate();
    
    return (0);
}