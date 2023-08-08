N1 = float(input("Informe a primeira nota: "))
N2 = float(input("Informe a segunda nota: "))
N3 = float(input("Informe a terceira nota: "))
N4 = float(input("Informe a quarta nota: "))

MD = (N1 + N2 + N3 + N4) / 4

if MD >= 5:
    print("Aluno Aprovado com média")
else:
    print("Aluno Reprovado com média")

print("Média obtida:", MD)