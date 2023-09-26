/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:33:40 by crigonza          #+#    #+#             */
/*   Updated: 2023/09/26 09:58:28 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int     main(void)
{
    ClapTrap    batman("Batman");

    batman.attack("Joker");
    batman.takeDamage(5);
    batman.beRepaired(5);
    return (0);
}