/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:33:40 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/03 10:32:04 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int     main(void)
{
    FragTrap    goku("Goku");
    FragTrap    frezzer("Freezer");

    goku.attack("Frezzer");
    frezzer.takeDamage(30);
    frezzer.beRepaired(20);
    goku.highFivesGuys();
    
    return (0);
}