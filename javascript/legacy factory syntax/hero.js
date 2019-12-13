'use strict';

function Hero(name, mainhand, offhand) {
  const hero = {
    name,
    mainhand,
    offhand,
  }

  Object.defineProperty(hero, 'toString', {
    value: function() {
      return `${this.name} (${this.mainhand}, ${this.offhand})`;
    },
    enumerable: false,
  });

  Object.defineProperty(hero, 'lmb', {
    value: function() {
      return `${this.name} uses ${this.mainhand}!`;
    },
    enumerable: false,
  });

  Object.defineProperty(hero, 'rmb', {
    value: function() {
      return `${this.name} uses ${this.offhand}!`;
    },
    enumerable: false,
  });

  return hero;
}

module.exports = { Hero }
