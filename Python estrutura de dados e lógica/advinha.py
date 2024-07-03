from random import randint
n = int(input('Escolha um número entre 0 e 5'))
npc = randint(0,5)
if n == npc:
    print('Parabéns! Você acertou.')
else:
    print('Você errou!')