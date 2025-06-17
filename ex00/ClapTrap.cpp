/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:57:09 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/16 16:35:42 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Canonical form
ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Default constructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called for " << _name << std::endl;
}

// Custom constructor
ClapTrap::ClapTrap(const std::string& name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap " << _name << " constructed!" << std::endl;
}

// Member functions
void ClapTrap::attack(const std::string& target) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        _energyPoints--;
        std::cout << "ClapTrap " << _name << " attacks " << target
                  << ", causing " << _attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "ClapTrap " << _name << " can't attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    _hitPoints -= amount;
    if (_hitPoints < 0) _hitPoints = 0;
    std::cout << "ClapTrap " << _name << " takes " << amount
              << " damage! Remaining HP: " << _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        _energyPoints--;
        _hitPoints += amount;
        std::cout << "ClapTrap " << _name << " repairs " << amount
                  << " HP! New HP: " << _hitPoints << std::endl;
    } else {
        std::cout << "ClapTrap " << _name << " can't be repaired!" << std::endl;
    }
}
