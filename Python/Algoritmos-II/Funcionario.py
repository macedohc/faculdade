class Funcionario:
    def __init__(self, nome, data_admissao, salario):
        self.nome = nome
        self.data_admissao = data_admissao
        self.salario = salario

    def get_nome(self):
        return self.nome

    def set_nome(self, nome):
        self.nome = nome

    def get_data_admissao(self):
        return self.data_admissao

    def set_data_admissao(self, data_admissao):
        self.data_admissao = data_admissao

    def get_salario(self):
        return self.salario

    def set_salario(self, salario):
        self.salario = salario


class Gerente(Funcionario):
    def __init__(self, nome, data_admissao, salario, bonus):
        super().__init__(nome, data_admissao, salario)
        self.bonus = bonus

    def salario_total(self):
        return self.salario + (self.salario * self.bonus)


# Exemplo de uso
funcionario1 = Funcionario("João", "01/01/2020", 3000.00)
print(funcionario1.get_nome())
funcionario1.set_nome("José")
print(funcionario1.get_nome())

gerente1 = Gerente("Maria", "01/01/2018", 5000.00, 0.1)
print(gerente1.get_nome())
print(gerente1.salario_total())
