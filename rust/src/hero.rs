use crate::item::Item;

#[derive(Debug)]
pub struct Hero {
    pub name: String,
    pub mainhand: Item,
    pub offhand: Item,
}

impl Hero {
    pub fn lmb(&self) -> String {
        return format!("{} uses {}!", &self.name, &self.mainhand.name);
    }
    pub fn rmb(&self) -> String {
        return format!("{} uses {}!", &self.name, &self.offhand.name);
    }
}
