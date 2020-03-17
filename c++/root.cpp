#pragma once
#include <iostream>
#include "item.h"
#include "hero.h"

int main()
{
	Item* longsword = new Item(u8"Longsword");
	longsword->name = (char*)u8"Longsword";

	Item* shield = new Item(u8"Shield");
	shield->name = (char*)u8"Shield";

	Hero* conan = new Hero(u8"Conan", longsword, shield);

	std::cout << conan->name << std::endl;
	std::cout << conan->mainhand->name << std::endl;
	std::cout << conan->offhand->name << std::endl;

	conan->lmb();
	conan->rmb();
	conan->to_string();
}
