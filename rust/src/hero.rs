use crate::interactable::Interactable;
use crate::item::Item;

#[derive(Debug)]
pub struct Hero {
    pub name: String,
    pub mainhand: Item,
    pub offhand: Item,
}

impl Interactable for Hero {
    fn lmb(&self) -> String {
        return format!("{} uses {}!", &self.name, &self.mainhand.name);
    }
    fn rmb(&self) -> String {
        return format!("{} uses {}!", &self.name, &self.offhand.name);
    }
}
