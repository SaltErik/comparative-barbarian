require './item.rb'
require './hero.rb'

longsword = Item.new("Longsword")

shield = Item.new("Shield")

conan = Hero.new("Conan", longsword, shield)

puts conan
puts conan.lmb
puts conan.rmb