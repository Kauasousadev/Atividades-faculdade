import math
Catetoadjacente = int(input('Insira o valor do cateto adjacente:'))
Catetooposto = int(input('Insira o valor do cateto oposto:'))
hipotenusa = math.sqrt(math.pow(Catetoadjacente,2)+ math.pow(Catetooposto,2))
print('A hipotenusa deste triângulo retângulo vale {:f}'.format(hipotenusa))