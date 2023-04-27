/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:22:51 by makacem           #+#    #+#             */
/*   Updated: 2023/04/27 15:09:24 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void    printfinfo(ClapTrap &object)
{
    std::cout << object.getName() << " hit points = " << object.getHitPoints() << std::endl;
    std::cout << object.getName() << " energy points = " << object.getEnergyPoints() << std::endl;
    std::cout << object.getName() << " attack damage = " << object.getAttackDamage() << std::endl;
}

int main()
{
    ClapTrap mehdi("Mehdi");
    ClapTrap karim("Karim");
    
    mehdi.setAttackDamage(3);
    
    printfinfo(mehdi);
    printfinfo(karim);
    mehdi.attack(karim.getName());
    karim.takeDamage(mehdi.getAttackDamage());
    printfinfo(karim);
    printfinfo(mehdi);
    karim.setAttackDamage(11);
    karim.attack(mehdi.getName());
    mehdi.takeDamage(karim.getAttackDamage());
    printfinfo(karim);
    printfinfo(mehdi);
    karim.beRepaired(500);
    karim.attack(mehdi.getName());
    mehdi.takeDamage(karim.getAttackDamage());
    printfinfo(mehdi);
    printfinfo(karim);
} 