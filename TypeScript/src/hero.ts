import { Item } from "./item.js";

export class Hero {

  public name: string;

  public mainhand: Item;

  public offhand: Item;

  public constructor(name: string, mainhand: Item, offhand: Item) {
    this.name = name;
    this.mainhand = mainhand;
    this.offhand = offhand;
  }

  public toString(this: Hero) {
    return `${this.name} (${this.mainhand}, ${this.offhand})`;
  }

  public lmb(this: Hero) {
    return `${this.name} uses ${this.mainhand}!`;
  }

  public rmb(this: Hero) {
    return `${this.name} uses ${this.offhand}!`;
  }
}
