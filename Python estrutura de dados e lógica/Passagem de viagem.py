lugar = str(input('Para onde é sua viagem?'))
d = int(input('Qual a distância em Km da sua viagem?'))
if d < 201:
    p = d*0.50
    print('Sua passagem para {} está custando R${} reais.'.format(lugar,p))
else:
    p2 = d*0.45
    print('Sua passagem para {} está custando R${} reais.'.format(lugar,p2))