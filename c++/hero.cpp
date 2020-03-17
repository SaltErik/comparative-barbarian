#pragma once
#include <iostream>
//#include "hero.h"
#include "item.h"

class Hero {
public:
	char* name;
	Item* mainhand;
	Item* offhand;

  Hero(char* name, Item* mainhand, Item* offhand) {
    this->name = name;
    this->mainhand = mainhand;
    this->offhand = offhand;
  }

  void lmb() {
    std::cout << this->name <<  u8" uses " << this->offhand->name <<  u8"!" << std::endl;
  }

  void rmb() {
    std::cout << this->name <<  u8" uses " << this->mainhand->name <<  u8"!" << std::endl;
  }

  void to_string() {
	  std::cout <<  u8"\n" << this->name <<  u8": {\n  mainhand: " << this->mainhand->name <<  u8",\n  offhand: " << this->mainhand->name <<  u8",\n}" << std::endl;
  }
};
