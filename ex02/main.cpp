/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:07:48 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/16 18:39:51 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() 
{
    ClapTrap clap("CL4P-TP");
    ScavTrap scav("SC4V-TP");
    FragTrap frag("FR4G-TP");

    std::cout << "\n--- ClapTrap Actions ---" << std::endl;
    clap.attack("Bandit");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "\n--- ScavTrap Actions ---" << std::endl;
    scav.attack("Skag");
    scav.takeDamage(30);
    scav.beRepaired(20);
    scav.guardGate();

    std::cout << "\n--- FragTrap Actions ---" << std::endl;
    frag.attack("Robot");
    frag.takeDamage(40);
    frag.beRepaired(25);
    frag.highFivesGuys();

    return 0;
}
