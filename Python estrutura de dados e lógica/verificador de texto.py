nome = str(input('Qual o seu nome?'))
primeironome = nome.split()
nomelower = nome.lower()
nomekaua = nomelower.find('kauã')
if nomekaua == 0:
    print('Que nome bonito!')
else:
    print('Nome de gente feia.')
print('Bom dia, {}!'.format(primeironome[0]))