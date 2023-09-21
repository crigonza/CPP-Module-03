/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:48:31 by crigonza          #+#    #+#             */
/*   Updated: 2023/09/21 10:59:06 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class   ClapTrap
{
    private:
        std::string     _name;
        int             _hit_points = 10;
        int             _energy_points = 10;
        int             _attack_damage = 0;

    public:
        ClapTrap(void);
        ClapTrap(ClapTrap const &clap);
        ~ClapTrap(void);

        ClapTrap    &operator=(ClapTrap const &clap);

        void    attack(const std::string &target);
        
};

#endif