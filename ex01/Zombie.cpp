#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : name("")
{
}

Zombie::Zombie(std::string name) : name(name)
{
}

//destructor is called when the object is destroyed
Zombie::~Zombie()
{
	std::cout << name << " is destroyed" << std::endl;
}

void Zombie::announce() const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}