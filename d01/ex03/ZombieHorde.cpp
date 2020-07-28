/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 12:42:08 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/28 14:44:07 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string randomName(int N)
{
	srand(time(0));
	std::string names[] = {"Rita", "Haleema", "Leah", "Zakaria", "River", "Shaunna", "Dione", "Nataniel", "Kavan", "Aamir"};
	return (names[((rand() + N) % 9)]);
}

std::string randomType(int N)
{
	srand(time(0));
	std::string types[] = {"Walker", "Runner", "Ghouls", "Crawler", "Screamer", "Bonies", "Pukers", "Stalkers", "Spitters", "Exploders"};
	return (types[((rand() + N) % 9)]);
}

ZombieHorde::ZombieHorde(int N)
{
	m_zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        m_zombies[i].birthZombie(randomName(i), randomType(i));
        m_zombies[i].announce();
    }
}

ZombieHorde::~ZombieHorde(void)
{
	std::cout << "ZombieHorde Deconstructor Called" << std::endl;
	delete[] m_zombies;
}