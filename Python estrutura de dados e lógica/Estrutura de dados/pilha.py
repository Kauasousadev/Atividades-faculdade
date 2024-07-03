class Pilha:
    def __init__(self):
        self.items = []
    
    def évazio(self):
        self.items == []

    def push(self,item):
        self.items.append(item)

    def peek(self):
        return self.items[len(self.items)-1]
    
    def size(self):
        return len(self.items)

s=Pilha()

s.push("k")
s.push("a")
s.push("u")
s.push("ã")
print(s.peek())
