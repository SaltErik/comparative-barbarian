# frozen_string_literal: true

#:nodoc:
class Item
  def initialize(name)
    @name = name
  end

  def to_s
    @name
  end
end
