velocidade = float(input('Qual a velocidade do seu veículo?'))
if velocidade > 80:
    valormulta = (velocidade - 80) * 7 
    print('Você foi multado por estar acima do limite permitido! O valor da multa é R${} reais.'.format(valormulta))
else:
    print('Continue respeitando o limite de velocidade. Bom dia.')