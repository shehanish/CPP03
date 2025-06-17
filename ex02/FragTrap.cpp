/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:07:41 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/16 18:38:25 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

// Default constructor
FragTrap::FragTrap() : ClapTrap() 
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

// Constructor with name
FragTrap::FragTrap(const std::string& name) : ClapTrap(name) 
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " constructed" << std::endl;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) 
{
    *this = other;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

// Assignment operator
FragTrap& FragTrap::operator=(const FragTrap& other) 
{
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

// Destructor
FragTrap::~FragTrap() 
{
    std::cout << "FragTrap " << _name << " destroyed" << std::endl;
}

// Special ability
void FragTrap::highFivesGuys(void) 
{
    std::cout << "FragTrap " << _name << " requests a high five! ✋" << std::endl;
}
