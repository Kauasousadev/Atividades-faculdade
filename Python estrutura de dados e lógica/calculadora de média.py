nome = str(input('Qual o seu nome?'))
n1 = float(input('Qual foi sua nota no primeiro teste?'))
n2 = float(input('Qual foi sua nota no segundo teste?'))
m = float((n1 + n2)/2)
if m >= 7:
    print('Parabéns {}, você está aprovado! Sua média foi {}.'.format(nome,m))
else:
    print('{}, você não foi aprovado, sua média foi {}, faça o exame final.'.format(nome,m))
    me = float(input('Qual foi sua nota no exame final?'))
    mediafinal = float((m + me)/2)
    if mediafinal >= 5:
        print('Parabéns {}, você foi aprovado! Sua média pós exame final foi {}.'.format(nome,mediafinal))
    else:
        print('{}, você reprovou, curse a matéria novamente.'.format(nome))