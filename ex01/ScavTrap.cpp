/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:41:46 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/16 16:42:59 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    _name = "DefaultScav";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap default constructor called\n";
}

ScavTrap::ScavTrap(const std::string& name) {
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap name constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap& other) {
    std::cout << "ScavTrap copy constructor called\n";
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    std::cout << "ScavTrap copy assignment operator called\n";
    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called\n";
}

void ScavTrap::attack(const std::string& target) {
    if (_hitPoints > 0 && _energyPoints > 0) {
        std::cout << "ScavTrap " << _name << " attacks " << target
                  << ", causing " << _attackDamage << " points of damage!\n";
        _energyPoints--;
    } else {
        std::cout << "ScavTrap " << _name << " can't attack.\n";
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " has entered Gate keeper mode.\n";
}
