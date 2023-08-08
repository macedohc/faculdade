temperatura = eval(input('Digite a Temperatura:'))


def classificar_temperatura(t):
    if t > 86:
        print('Quente')
    elif t > 32:
        print('Frio')
    else:
        print('Congelando')


classificar_temperatura(temperatura)
