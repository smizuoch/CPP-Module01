#include "Zombie.hpp"
#include <iostream>

int main()
{
	int N = 5;
	Zombie *horde = zombieHorde(N, "ZombieClone");

	std::cout << "Announcing zombies:" << std::endl;
	for (int i = 0; i < N; i++)
	{
		std::cout << "Zombie " << i + 1 << ": ";
		horde[i].announce();
	}

	delete[] horde;

	return 0;
}

// __attribute__((destructor)) static void destructor()
// {
// 	system("leaks a.out");
// }