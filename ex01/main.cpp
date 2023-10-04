/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:33:40 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/04 18:27:30 by crigonza         ###   ########.fr       */
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

    std::cout << std::endl;
    hodor.showStats();
    def.attack("Hodor");
    hodor.takeDamage(10);
    hodor.beRepaired(15);
    hodor.guardGate();
    std::cout << std::endl;
    
    return (0);
}