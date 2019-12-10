class Hero():

    def __init__(self, name, mainhand, offhand):
        self.name = name
        self.mainhand = mainhand
        self.offhand = offhand

    def __str__(self):
        return f"{self.name} ({self.mainhand}, {self.offhand})"

    def lmb(self):
        return f"{self.name} uses {self.mainhand}!"

    def rmb(self):
        return f"{self.name} uses {self.offhand}!"
