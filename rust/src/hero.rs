use crate::item::Item;

#[derive(Debug)]
pub struct Hero {
    pub name: &'static str,
    pub mainhand: Item,
    pub offhand: Item,
}

impl Hero {
    pub fn lmb(&self) -> String {
        format!("{} uses {}!", self.name, self.mainhand.name)
    }
    pub fn rmb(&self) -> String {
        format!("{} uses {}!", self.name, self.offhand.name)
    }
}
