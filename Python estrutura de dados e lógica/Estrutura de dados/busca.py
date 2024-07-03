lista = [1,2,5,7,8,4,6]
def BuscaSequencial(lista, chave):
    for i in range(len(lista)):
        if (lista[i] == chave):
            return i
        
print(BuscaSequencial(lista, 5))

def BuscaBinária(lista, chave):
    lmt = len(lista)
    meio = len(lista)/2
    min = 0
    for i in range(len(lista)):
        if ():
