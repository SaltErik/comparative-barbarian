mod hero;
mod item;

use hero::Hero;
use item::Item;

fn main() {
    let longsword = Item {
        name: "Longsword".to_string(),
    };

    let shield = Item {
        name: "Shield".to_string(),
    };

    let conan = Hero {
        name: "Conan".to_string(),
        mainhand: longsword,
        offhand: shield,
    };

    println!("{:#?}", conan);
    println!("{}", conan.lmb());
    println!("{}", conan.rmb());
}
