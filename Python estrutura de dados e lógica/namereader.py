nome = str(input('Qual o nome que você deseja as informações?'))
SE = nome.strip()
dividido = nome.split()
print('{}\n{}\n{}\n{}'.format(nome.upper(),nome.lower(),len(SE),len(dividido[0])))