'use strict';

function Hero(name, mainhand, offhand) {
  this.name = name;
  this.mainhand = mainhand;
  this.offhand = offhand;
}

Hero.prototype.toString = function() {
  return `${this.name} (${this.mainhand}, ${this.offhand})`;
}

Hero.prototype.lmb = function() {
  return `${this.name} uses ${this.mainhand}!`;
}

Hero.prototype.rmb = function() {
  return `${this.name} uses ${this.offhand}!`;
}

module.exports = { Hero }
