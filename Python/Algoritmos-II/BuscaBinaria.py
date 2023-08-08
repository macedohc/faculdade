import random

def busca_binaria(l, x, inicio, fim):
    meio = (inicio + fim) // 2

    if fim < inicio:
        return -1

    if x == l[meio]:
        return meio
    if x < l[meio]:
        return busca_binaria(l, x, inicio, meio -1)
    if x > l[meio]:
        return busca_binaria(l, x, meio + 1, fim)

    l = random.sample(range(100), 20) #escolhe números aleatórios de 0 á 100 e possui 20 caracteres essa lista
    l.sort() #organiza essa lista do menor para o maior
    busca_binaria(l, 90, 0, 19) #verifica se possui o elemento 90 na lista da posição 0 até 19
