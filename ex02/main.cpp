/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:33:40 by crigonza          #+#    #+#             */
/*   Updated: 2023/09/27 19:00:22 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int     main(void)
{
    ScavTrap    def;
    ScavTrap    batman("Batman");
    ScavTrap    copy(batman);
    ScavTrap    joker("Joker");

    def = joker;


    def.attack("me");
    batman.attack("Poison Ivy");

    return (0);
}