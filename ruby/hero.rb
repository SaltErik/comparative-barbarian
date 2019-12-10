class Hero
    def initialize(name, mainhand, offhand)
        @name = name
        @mainhand = mainhand
        @offhand = offhand
    end

    def to_s()
        return "#{@name} (#{@mainhand}, #{@offhand})"
    end

    def lmb()
        return "#{@name} uses #{@mainhand}!"
    end

    def rmb()
        return "#{@name} uses #{@offhand}!"
    end
end