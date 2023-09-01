#include <iostream>
#include "carro.h"

using namespace std;

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