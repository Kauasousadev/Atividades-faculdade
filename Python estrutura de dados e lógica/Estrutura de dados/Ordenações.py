lista = [1,3,5,6,2,7,8,4,0]

def OrdenaçãoPorSeleção(lista):
    n = len(lista)                            #variável que vai guardar o tamanho da lista
    for j in range(n-1):                      #j é o iterador que vai passar por cada valor da lista, exceto a ultima casa
        min_index = j                         #Min_index é o índice onde cada iteração vai começar 
        for i in range(j, n):                 #i vai passar por cada valor entre J e N
            if lista[i] < lista[min_index]:   #Se o valor do indice i for menor que o indice min_index, min_index receberá i
                min_index = i
            if lista[j] > lista[min_index]:   #Se o valor do indice j for maior que o indice min_index,
                aux = lista[j]                #variavel aux vai guardar o valor do indice j
                lista[j] = lista[min_index]   #o indice j vai receber o valor do indice min_index
                lista[min_index] = aux        #o indice min_index vai receber o valor guardado em aux

def OrdenaçãoEmBolha(lista):
    n = len(lista)                            #N está guardando o valor do tamanho da lista
    for j in range(n-1):                      #Loop que irá se repetir até o penultimo elemento da lista
        for i in range(n-1):                  #Loop que repetirá a troca de valores do primeiro maior algorismo que encontrar
            if lista[i] > lista[i+1]:         #até o final da lista
                lista[i], lista[i+1] = lista[i+1], lista[i] #Se o valor do indice i da lista for maior que o seu sucessor, troca a pos

def OrdenaçãoPorInserção(lista):
    n = len(lista)                            #Variável para salvar o tamanho da lista
    for i in range(1, n):                     #i vai iterar do segundo elemento da lista até n
        chave = lista[i]                      #Variável chave pra guardar o elemento do indice que i está
        j = i - 1                             #Variável que recebe de i - 1
        while j >= 0 and lista[j] > chave:    #Enquanto j for maior ou igual a 0 e o elemento do indice j da lista for maior que
            lista[j+1] = lista[j]             #-chave 
            j = j - 1
        lista[j+1] = chave

OrdenaçãoPorInserção(lista)
print(lista)