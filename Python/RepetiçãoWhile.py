'''def nfat(L):
    n = 0
    fat = 1
    while fat <= L:
        n += 1
        fat *= n
    return n - 1
    
while é um loop onde ele só vai parar se o usuário digitar um valor positivo

num = eval(input('Digite um valor positivo:'))
while num < 0:
    num = eval(input('Digite um valor positivo:'))


    o código solicita nomes ao usuário até que ele insira uma string vazia e,
      em seguida, imprime todos os nomes inseridos.'''

l = []
nome = input('Digite um nome:')
while nome != '':
    l.append(nome)
    nome = input('Digite um nome:')

for i in l:
    print(i)