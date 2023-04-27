/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:51:57 by makacem           #+#    #+#             */
/*   Updated: 2023/04/27 18:04:13 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap is in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap Default constructor for " << getName() << " called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap Constructor for " << name << " called" << std::endl;
    setName(name);
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
}

ScavTrap::ScavTrap(ScavTrap const &otherObject)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = otherObject;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "ScavTrap Copy assignmet operator called" << std::endl;
    if (this != &other)
    {
        setName(other.getName());
        setHitPoints(other.getHitPoints());
        setEnergyPoints(other.getEnergyPoints());
        setAttackDamage(other.getAttackDamage());
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor for "<< getName() << " called" << std::endl;
}