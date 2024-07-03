class node:
    def __init__(self, dado):
        self.dado = dado
        self.next = None

class listaencadeada:
    def __init__(self,):
        self.head = None
        self.size = 0

    def append(self, elemento):
        if self.head:
            ponteiro = self.head
            while (ponteiro.next):
                ponteiro = ponteiro.next
            ponteiro.next = node(elemento)
        else:
            self.head = node(elemento)
        self.size = self.size + 1

    def __len__(self):
        return self.size

lista = listaencadeada()
lista.append(8)
lista.append(9)
lista.append(80)
print(lista.len)