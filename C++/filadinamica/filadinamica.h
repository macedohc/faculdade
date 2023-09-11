
typedef int TipoItem;
const int max_itens = 100;

struct No
{
   TipoItem valor;
   No* proximo;
};
  class filadinamica{
 
   private:
  No* primeiro;
  No* ultimo;

   public:
  
   filadinamica(); //construtora
   ~filadinamica();//destrutora
   bool estacheia();// verifica se a pilha esta chei
   bool estavazia();// verifica se a pilha esta vazia
   void inserir(TipoItem item); //push inserir
   TipoItem remover(); //pop retira o ultimo elemento da lista
   void imprimir(); //print
};