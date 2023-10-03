/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:33:40 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/02 20:48:20 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int     main(void)
{
    ClapTrap    batman("Batman");
    ClapTrap    joker("Joker");
    
    for (int i = 0; i < 8; i++)
    {
        batman.attack("Joker");
        joker.takeDamage(1);
        joker.attack("Batman");
        batman.takeDamage(1);
    }
    batman.beRepaired(5);
    batman.attack("Joker");
    joker.takeDamage(2);
    batman.beRepaired(5);
    joker.attack("Batman");
    return (0);
}