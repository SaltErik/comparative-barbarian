export class Item {
  public readonly name: string;

  public constructor(name: string) {
    this.name = name;
  }

  public toString() {
    return `${this.name}`;
  }
}
