typedef int TipoItem;
const int max_itens = 100;

class fila{

       private:

       int primeiro, ultimo;
       TipoItem* estrutura;
       
       
       public:
        
         fila(); //construtora
         ~fila();//destrutora
         bool estacheia();// verifica se a fila esta chei
         bool estavazia();// verifica se a fila esta vazia
         void inserir(TipoItem item); //push inserir
         TipoItem remover(); //pop retira o primeiro  elemento da lista
         void imprimir(); //print





};