/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:07:52 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/16 17:09:28 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

// Default constructor
ScavTrap::ScavTrap()
    : ClapTrap() {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

// Parameterized constructor
ScavTrap::ScavTrap(const std::string& name)
    : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " constructed" << std::endl;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap& other)
    : ClapTrap(other) {
    *this = other;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

// Assignment operator
ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

// Destructor
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " destroyed" << std::endl;
}

// Override attack
void ScavTrap::attack(const std::string& target) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        --_energyPoints;
        std::cout << "ScavTrap " << _name << " fiercely attacks " << target
                  << ", causing " << _attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "ScavTrap " << _name << " cannot attack (no energy or hit points)." << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " has entered Gate keeper mode." << std::endl;
}
