# frozen_string_literal: true

class Hero
  def initialize(name, mainhand, offhand)
    @name = name
    @mainhand = mainhand
    @offhand = offhand
  end

  def to_s
    "#{@name} (#{@mainhand}, #{@offhand})"
  end

  def lmb
    "#{@name} uses #{@mainhand}!"
  end

  def rmb
    "#{@name} uses #{@offhand}!"
  end
end
