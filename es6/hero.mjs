export class Hero {

  constructor(name, mainhand, offhand) {
    this.name = name;
    this.mainhand = mainhand;
    this.offhand = offhand;
  }

  toString() {
    return `${this.name} (${this.mainhand}, ${this.offhand})`;
  }

  lmb() {
    return (`${this.name} uses ${this.mainhand}!`);
  }

  rmb() {
    return (`${this.name} uses ${this.offhand}!`);
  }
}
