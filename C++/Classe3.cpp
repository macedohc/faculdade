#include <iostream>

using namespace std;

// Definição da classe carro
class carro{
   
private:
    int ano;
    float valor, km;

public:
    // Declaração do construtor da classe carro
    carro(int a, float v, float k);

    // Declaração dos métodos set e get para cada atributo
    void setano(int a);
    int getano();

    void setvalor(float v);
    float getvalor();

    void setkm(float k);
    float getkm();
};


int main(){
    // Criação de um objeto "celta" da classe carro, passando os valores para o construtor
    carro celta(2016, 15000, 100);
    
    // Impressão das informações do objeto "celta"
    cout << "Carro Celta" << endl;
    cout << "Ano: " << celta.getano() << endl;
    cout << "Valor: " << celta.getvalor() << endl;
    cout << "KM: " << celta.getkm() << endl;

    return 0;
}

// Função construtor da classe carro
carro::carro(int a, float v, float k) {
    ano = a;
    valor = v;
    km = k;
}

// Implementação dos métodos set e get para cada atributo
void carro::setano(int a) {
    ano = a;
}

int carro::getano() {
    return ano;
}

void carro::setvalor(float v) {
    valor = v;
}

float carro::getvalor() {
    return valor;
}

void carro::setkm(float k) {
    km = k;
}

float carro::getkm() {
    return km;
}