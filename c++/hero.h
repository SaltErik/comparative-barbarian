#pragma once
#include "item.h"

class Hero {
public:
	char* name;
	Item* mainhand;
	Item* offhand;
	void lmb();
	void rmb();
	void to_string();
  Hero(char* name, Item* mainhand, Item* offhand);
};
