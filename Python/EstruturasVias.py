'''altura = input('Digite sua altura:')
   sexo = input('Digite M para Mulheres e H para Homens:')

   altura1 =eval(altura)

   if sexo == 'H':
       peso = (72.7 * altura1) - 58
   else: 
       peso = (62.1 * altura1) - 44.7

   print ('O peso ideal é:', peso)'''

'''Exercício 1'''

n1 = input('Digite a primeira nota:')
n2 = input('Digite a segunda nota:')

n1 = float(n1)
n2 = float(n2)

média = 0.4 * n1 + 0.6 * n2

if média >= 5:
    print('Aprovado! Sua nota foi:', média)
else:
    print('Reprovado! Sua nota foi:', média)
