import pandas as pd

#Tema do DataFrame: Músicas do The Weeknd

#Instanciando o dataframe

Nome = ["Can’t fell my face", "The hills", "Angel", "Nothing Compares", "Best Friend", "In the night", "Starboy", "Shameless", "After Hours", "Dark times"]

Reproduções = ['1.736.765.562', '2.288.771.346', '133.763.402', '122.550.242', '121.729.566', '544.369.745', '3.256.593.187', '208.528.678', '932.493.583', '261.593.948']

Feat = ["Não", "Não", "Não", "Não", "Não", "Não", "Daft Punk", "Não", "Não", "Ed Sheeran"]

Duração = ['3:33', '4:02', '6:17', '3:42', '2:43', '3:55', '3:50', '4:13', '6:01', '4:20']

Albúm = ["Beauty behind the madness", "Beauty behind the madness", "Beauty behind the madness", "After hours (deluxe)", "Dawn FM", "Beauty behind the madness", "Starboy", "Beauty behind the madness", "After hours", "Beauty behind the madness"]

Anos_lançamento = ['2015', '2015', '2015', '2020', '2015', '2015', '2016', '2015', '2020', '2015']

#Preparando o dataframe

dados = list(zip(Nome, Reproduções, Feat, Duração, Albúm, Anos_lançamento))

Linhas = ['Faixa 1', 'Faixa 2', 'Faixa 3', 'Faixa 4', 'Faixa 5', 'Faixa 6', 'Faixa 7', 'Faixa 8', 'Faixa 9', 'Faixa 10']
Colunas = ['Nome', 'Reproduções', 'Feat', 'Duração', 'Álbum', 'Anos_lançamento']

MusicasTheWeeknd = pd.DataFrame(data = dados, columns = Colunas, index = Linhas)

#Questão 1 - Apresente em tela (output) toda a base de dados. Pontuação: 0,5 pontos
print(MusicasTheWeeknd)

#Questão 2 - Apresente o tamanho do seu dataframe (quantas colunas x linhas). Pontuação: 0,5 pontos
print("O tamanho do dataframe é: ",(MusicasTheWeeknd.shape))

#Questão 3 - Acesse a linha (x) e apresente em tela todas as características do item. Pontuação: 0,5 pontos
print("Exibindo a música do índice 1: ")
print(MusicasTheWeeknd.iloc[[1]])

#Questão 4 - Verifique se o dataframe está vazio. Pontuação: 0,5 pontos
if (MusicasTheWeeknd.empty):
    print("O dataframe está vazio!")
else:
    print("O dataframe não está vazio!")

#Questão 5 - Apresente em tela os 5 primeiros registros da base de dados. Pontuação: 0,5 pontos
print("Exibindo as 5 primeiras músicas:")
print(MusicasTheWeeknd.iloc[0:4])

#Questão 6 - Exclua um item (linha) de sua base de dados. Pontuação: 0,5 pontos
print("Dataframe sem a primeira Faixa: ")
DropMusicasTheWeeknd = MusicasTheWeeknd.drop("Faixa 1")
print(DropMusicasTheWeeknd)

#Questão 7 - Adicione um item (linha) na sua base de dados. Pontuação: 0,5 pontos

nova_musica = {
    'Nome': 'Blinding lights',
    'Reproduções': '4.248.706.600',
    'Feat': 'Não',
    'Duração': '3:20',
    'Álbum': 'After hours',
    'Anos_lançamento': '2020'
}

MusicasTheWeeknd = MusicasTheWeeknd._append(nova_musica, ignore_index=True)

print("Adicionado a música Blinding lights: ")
print(MusicasTheWeeknd)

#Questão 8 - Transponha a coluna para a linha em sua base de dados. Pontuação: 0,5 pontos
MusicasTheWeeknd_transposto = MusicasTheWeeknd.transpose()

print("DataFrame transposto:")
print(MusicasTheWeeknd_transposto)

#Questão 9 - Apresente em tela somente a 1ª e a 2ª coluna (rótulo) da base de dados. Pontuação: 0,5 pontos
print("Exibindo somente a primeira e segunda coluna do data frame: ")
print(MusicasTheWeeknd[['Nome', 'Reproduções']])