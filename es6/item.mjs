export class Item {

  constructor(name) {
    this.name = name;
  }

  [Symbol.toPrimitive](hint) {
    if (hint === 'string') return this.name;
  }
}
