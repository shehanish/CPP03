/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:43:08 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/16 17:00:39 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() 
{
    ClapTrap baseBot("1st_robot");
    ScavTrap scavBot("Serena");

    std::cout << "--- ClapTrap actions ---" << std::endl;
    baseBot.attack("target dummy");
    baseBot.takeDamage(30);
    baseBot.beRepaired(20);

    std::cout << "\n--- ScavTrap actions ---" << std::endl;
    scavBot.attack("target dummy");
    scavBot.takeDamage(30);
    scavBot.beRepaired(20);
    scavBot.guardGate();

    return 0;
}
