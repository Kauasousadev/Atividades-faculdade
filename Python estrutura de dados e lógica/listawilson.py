lista = [1,65,39,47,23,13,49]
def buscasequencial(lista,chave):
    for i in range(len(lista)):
        if lista[i] == chave:
            return i
    return -1
    
buscasequencial(lista, 47)