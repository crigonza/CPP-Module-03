/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:58:51 by crigonza          #+#    #+#             */
/*   Updated: 2023/09/27 20:21:10 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class   DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string     _name;
    public:
        DiamondTrap(void);
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const &diamond);
        ~DiamondTrap(void);

        DiamondTrap &operator=(DiamondTrap const &diamond);

        void    whoAmI(void);
};

#endif