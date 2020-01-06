#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char *name;
} Item;

typedef struct {
  char *name;
  Item mainhand;
  Item offhand;
  void (*lmb)(struct Hero *);
  void (*rmb)(struct Hero *);
  void (*to_string)(struct Hero *);
} Hero;

void lmb(Hero *self) {
  printf("\n%s uses %s!\n", self->name, self->mainhand);
}

void rmb(Hero *self) {
  printf("\n%s uses %s!\n", self->name, self->offhand);
}

void to_string(Hero *self) {
  printf("\n%s: {\n  mainhand: %s,\n  offhand: %s,\n}\n", self->name, self->mainhand, self->offhand);
}

int main() {
  Item *longsword = malloc(sizeof(Item));
  longsword->name = "Longsword";

  Item *shield = malloc(sizeof(Item));
  shield->name = "Shield";

  Hero *conan = malloc(sizeof(Hero));
  conan->name = "Conan";
  conan->mainhand = *longsword;
  conan->offhand = *shield;
  conan->lmb = lmb;
  conan->rmb = rmb;
  conan->to_string = to_string;

  printf("\n%s\n", conan->name);
  printf("\n%s\n", conan->mainhand);
  printf("\n%s\n", conan->offhand);
  conan->lmb(conan);
  conan->rmb(conan);
  conan->to_string(conan);
  return 0;
}
