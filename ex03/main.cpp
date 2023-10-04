/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:33:40 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/04 20:45:39 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int     main(void)
{
    DiamondTrap     batman("Batman");

    std::cout << std::endl;
    batman.attack("Poison Ivy");
    batman.takeDamage(10);
    batman.beRepaired(10);
    batman.guardGate();
    batman.highFivesGuys();
    batman.whoAmI();
    std::cout << std::endl;

    return (0);
}