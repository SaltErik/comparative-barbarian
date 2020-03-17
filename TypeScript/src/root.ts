import { Hero } from './hero.js';
import { Item } from './item.js';

const longsword: Item = new Item("Longsword");

const shield: Item = new Item("Shield");

const conan: Hero = new Hero("Conan", longsword, shield);

console.dir(conan, { color: true, depth: null });
console.log(conan.lmb());
console.log(conan.rmb());
