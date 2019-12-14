mod hero;
mod item;

use hero::Hero;
use item::Item;

fn main() {
    let longsword = Item {
        name: "Longsword",
    };

    let shield = Item {
        name: "Shield",
    };

    let conan = Hero {
        name: "Conan",
        mainhand: longsword,
        offhand: shield,
    };

    println!("{:#?}", conan);
    println!("{}", conan.lmb());
    println!("{}", conan.rmb());
}
