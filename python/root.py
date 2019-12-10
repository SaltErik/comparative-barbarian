from hero import Hero
from item import Item

longsword = Item("Longsword")

shield = Item("Shield")

conan = Hero("Conan", longsword, shield)

print(conan)
print(conan.lmb())
print(conan.rmb())
