/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:22:36 by makacem           #+#    #+#             */
/*   Updated: 2023/04/27 14:40:29 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H

# define CLAPTRAP_H

# include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &otherObject);
        ~ClapTrap(void);
        ClapTrap    &operator=(const ClapTrap &other);

        std::string getName(void) const;
        unsigned int         getHitPoints(void) const;
        int         getEnergyPoints(void) const;
        int         getAttackDamage(void) const;
        void        setName(std::string const name);
        void        setHitPoints(int const points);
        void        setEnergyPoints(int const points);
        void        setAttackDamage(int const points);

        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};








#endif