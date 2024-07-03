from random import randint
n = randint(0,100)
d1 = n//2
d2 = n/2
print('O número gerado foi {}.'.format(n))
if d1 == d2:
    print('O número {} é par.'.format(n))
else:
    print('O número {} é impar.'.format(n))