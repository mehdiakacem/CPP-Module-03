/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:28:07 by makacem           #+#    #+#             */
/*   Updated: 2023/04/27 19:35:28 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H

# define FRAGTRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
    private:
        /* data */
    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const &otherObject);
        ~FragTrap(void);
        FragTrap    &operator=(const FragTrap &other);
        void    highFiveGuys(void);
};
 


#endif