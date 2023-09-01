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