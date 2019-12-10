mod hero;
mod interactable;
mod item;

use hero::Hero;
use interactable::Interactable;
use item::Item;

pub fn main() {
    let longsword = Item {
        name: String::from("Longsword"),
    };
    let shield = Item {
        name: String::from("Shield"),
    };
    let conan = Hero {
        name: String::from("Conan"),
        mainhand: longsword,
        offhand: shield,
    };
    println!("{:?}", conan);
    println!("{:?}", conan.lmb());
    println!("{:?}", conan.rmb());
}
