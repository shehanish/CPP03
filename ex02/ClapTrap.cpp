/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:07:30 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/16 18:39:35 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap()
    : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) 
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

// Parameterized constructor
ClapTrap::ClapTrap(const std::string& name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) 
{
    std::cout << "ClapTrap " << _name << " constructed" << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& other) 
{
    *this = other;
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

// Assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& other) 
{
    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

// Destructor
ClapTrap::~ClapTrap() 
{
    std::cout << "ClapTrap " << _name << " destroyed" << std::endl;
}

// Attack method (virtual so derived classes can override)
void ClapTrap::attack(const std::string& target) 
{
    if (_energyPoints > 0 && _hitPoints > 0) {
        --_energyPoints;
        std::cout << "ClapTrap " << _name << " attacks " << target
                  << ", causing " << _attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "ClapTrap " << _name << " cannot attack (no energy or hit points)." << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) 
{
    _hitPoints -= amount;
    if (_hitPoints < 0)
        _hitPoints = 0;
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage, "
              << _hitPoints << " hit points left." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) 
{
    if (_energyPoints > 0 && _hitPoints > 0) {
        --_energyPoints;
        _hitPoints += amount;
        std::cout << "ClapTrap " << _name << " is repaired by " << amount
                  << ", now has " << _hitPoints << " hit points." << std::endl;
    } else {
        std::cout << "ClapTrap " << _name << " cannot be repaired (no energy or hit points)." << std::endl;
    }
}
