listadenumeros = [1,2,3,4,5,6,7,8,9,10]

def buscaBinaria(lista,chave):
  inicio = 0
  fim = len(lista)-1
  while inicio <= fim:
    meio = (inicio + fim)//2
    print("Meio é", meio)
    if lista[meio] == chave:
        return meio
    elif lista[meio] > chave:
        fim = meio - 1
    else:
        inicio = meio + 1
  return -1

print(buscaBinaria(listadenumeros,9))