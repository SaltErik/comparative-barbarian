#include <stdio.h>
#include <stdlib.h>

struct Item {
  char *name;
};

struct Hero {
  char *name;
  struct Item mainhand;
  struct Item offhand;
  void (*lmb)(struct Hero *);
  void (*rmb)(struct Hero *);
  void (*to_string)(struct Hero *);
};

void lmb(struct Hero *self) {
  printf("\n%s uses %s!\n", self->name, self->mainhand);
}

void rmb(struct Hero *self) {
  printf("\n%s uses %s!\n", self->name, self->offhand);
}

void to_string(struct Hero *self) {
  printf("\n%s: {\n  mainhand: %s,\n  offhand: %s,\n}\n", self->name, self->mainhand, self->offhand);
}

int main() {
  struct Item *longsword = malloc(sizeof(struct Item));
  longsword->name = "Longsword";

  struct Item *shield = malloc(sizeof(struct Item));
  shield->name = "Shield";

  struct Hero *conan = malloc(sizeof(struct Hero));
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
