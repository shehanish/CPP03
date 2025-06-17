/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:41:58 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/16 16:42:33 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap default constructor called\n";
}

ClapTrap::ClapTrap(const std::string& name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap name constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    std::cout << "ClapTrap copy constructor called\n";
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    std::cout << "ClapTrap copy assignment operator called\n";
    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called\n";
}

void ClapTrap::attack(const std::string& target) {
    if (_hitPoints > 0 && _energyPoints > 0) {
        std::cout << "ClapTrap " << _name << " attacks " << target
                  << ", causing " << _attackDamage << " points of damage!\n";
        _energyPoints--;
    } else {
        std::cout << "ClapTrap " << _name << " can't attack.\n";
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " takes " << amount << " damage.\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_hitPoints > 0 && _energyPoints > 0) {
        _hitPoints += amount;
        _energyPoints--;
        std::cout << "ClapTrap " << _name << " repairs " << amount << " hit points.\n";
    } else {
        std::cout << "ClapTrap " << _name << " can't repair.\n";
    }
}
