/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:33:40 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/04 18:36:50 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int     main(void)
{
    FragTrap    goku("Goku");
    FragTrap    frezzer("Freezer");

    std::cout << std::endl;
    goku.showStats();
    goku.attack("Frezzer");
    frezzer.takeDamage(30);
    frezzer.beRepaired(20);
    goku.highFivesGuys();
    std::cout << std::endl;
    
    return (0);
}