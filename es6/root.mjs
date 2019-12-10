import { Hero } from './hero.mjs';
import { Item } from './item.mjs';

const longsword = new Item("Longsword");

const shield = new Item("Shield");

const conan = new Hero("Conan", longsword, shield);

console.dir(conan, { color: true, depth: null });
console.log(conan.lmb());
console.log(conan.rmb());
