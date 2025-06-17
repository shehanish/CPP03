/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:57:13 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/16 16:38:07 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap clap("SHEHANI");

    clap.attack("Bandit");
    clap.takeDamage(5);
    clap.beRepaired(3);
    clap.attack("Skag");
    clap.takeDamage(8);
    clap.beRepaired(2);

    return 0;
}
