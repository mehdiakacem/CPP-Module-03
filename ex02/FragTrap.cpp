/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:30:09 by makacem           #+#    #+#             */
/*   Updated: 2023/04/27 19:32:39 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void    FragTrap::highFiveGuys(void)
{
    std::cout << "High Five !" << std::endl;
}

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap Default constructor for " << getName() << " called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap Constructor for " << name << " called" << std::endl;
    setName(name);
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
}

FragTrap::FragTrap(FragTrap const &otherObject)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = otherObject;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "FragTrap Copy assignmet operator called" << std::endl;
    if (this != &other)
    {
        setName(other.getName());
        setHitPoints(other.getHitPoints());
        setEnergyPoints(other.getEnergyPoints());
        setAttackDamage(other.getAttackDamage());
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor for "<< getName() << " called" << std::endl;
}