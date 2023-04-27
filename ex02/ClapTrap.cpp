/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:22:38 by makacem           #+#    #+#             */
/*   Updated: 2023/04/27 18:05:46 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


void    ClapTrap::attack(const std::string &target)
{
    if (getEnergyPoints() > 0)
    {
        std::cout << "ClapTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
        setEnergyPoints(getEnergyPoints() - 1);
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (getHitPoints() > 0)
    {
        std::cout << "ClapTrap " << getName() << " lost " << amount << " hit points!" << std::endl;
        if (getHitPoints() < amount)
            setHitPoints(0);
        else
            setHitPoints(getHitPoints() - amount);
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (getEnergyPoints() > 0)
    {
        std::cout << "ClapTrap " << getName() << "got " << amount << " hit points!" << std::endl;
        setHitPoints(getHitPoints() + amount);
        setEnergyPoints(getEnergyPoints() - 1);
    }
}

ClapTrap::ClapTrap(void)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap Constructor for " << name << " called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &otherObject)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = otherObject;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "ClapTrap Copy assignmet operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other.getName();
        this->_hitPoints = other.getHitPoints();
        this->_energyPoints = other.getEnergyPoints();
        this->_attackDamage = other.getAttackDamage();
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor for "<< getName() << " called" << std::endl;
}

std::string ClapTrap::getName(void) const
{
    return this->_name;
}

unsigned int ClapTrap::getHitPoints(void) const
{
    return this->_hitPoints;
}

int ClapTrap::getEnergyPoints(void) const
{
    return this->_energyPoints;
}

int ClapTrap::getAttackDamage(void) const
{
    return this->_attackDamage;
}

void    ClapTrap::setName(std::string const name)
{
    this->_name = name;
}

void    ClapTrap::setHitPoints(int const points)
{
    this->_hitPoints = points;
}

void    ClapTrap::setEnergyPoints(int const points)
{
    this->_energyPoints = points;
}

void    ClapTrap::setAttackDamage(int const points)
{
    this->_attackDamage = points;
}