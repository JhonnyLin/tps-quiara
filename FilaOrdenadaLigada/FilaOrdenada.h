#ifndef FILAORDENADA_H_INCLUDED
#define FILAORDENADA_H_INCLUDED
#include "Node.h"
template <typename Tipo>

struct FilaOrdenada{//N�O � FILA E SIM LISTA
    Node<Tipo> * h;                                         //UM PONTEIRO PARA INICIO

    FilaOrdenada(){                                         //QUANDO A STRUCT FOR INICIALIZADA PONTEIRO VAI APONTA PRA NULL
       h= NULL;
    }

    bool aloca(Tipo t){
        bool v =false;                                      //VARIAVEL  BOLLEANA PRA RETORNO
        Node<Tipo> * aux = new Node<Tipo>;                  //UM PONTEIRO NODE, QUE APONTA PARA UMA ESTRUTURA NODE
        aux->info = t;                                      //AUX INFO RECEBE VALOR DE T
        aux->prox = h;                                      //AUX PROX APONTA PARA H
        h = aux;                                            //H APONTA PRA AUX
        while(v != true){                                   //ENQUANTO V FOR DIFERENTE DE VERDADEIRO
          if(aux->prox == NULL || t <= aux->prox->info){    //AUX PROX == NULL OU T MENOR E IGUAL A VALOR DE INFO DE PROX DE AUX
                v= true;                                    // V SE TORNA VERDADEIRO
            }else{                                          //SE FOR MAIOR
                aux->info = aux->prox->info;                //AUX INFO RECEBE INFO DE PROX DELE MESMO
                aux= aux->prox;                             //AUX COME�A A APONTAR PRA PROX DE AUX
                aux->info = t;                              //INFO DE NOVO AUX RECEBE O VALOR DE T
            }
        }

        return v;                                           //RETORNA V
    }

    Tipo remove(Tipo x){                                        //REMOVER
        bool v = false;
        Tipo y;                                        //BOOLEAN COME�ANDO EM FALSO
        Node<Tipo> * aux = h;                                   //PONTEIRO APONTANDO PARA H
        Node<Tipo> * aux2 = aux->prox;                          //PONTEIRO APONTANDO PRA PROXIMO DE AUX
        while(aux != NULL){                         //FAZER ENQUANTO AUX FOR DIFERENTE DE NULL OU V FOR FALSO
            if(aux==h){                                     //SE AUX ENDERE�O DE H FOR IGUAL AO DE AUX
                if(aux->info == x){                             //VERIFICA SE INFO DE AUX � IGUAL A X(VEM PELO PARAMETRO)
                    h= aux2;                                        //SENDO H COME�A APONTAR PRA AUX2
                     y=aux->info;                                   //X RECEBE VALOR QUE ESTA EM INFO DE AUX
                    delete aux;                                     //DELETA AUX
                    return y;
                }else{                                          //SE INFO FOR DIFERENTE
                    if(aux2->info ==x){                             //VERIFICA SE INFO DE AUX2 � IGUAL A X
                        aux->prox = aux2->prox;                         //AUX PROX COME�A APONTAR PRA PROX DE AUX2
                        y=aux2->info;                                   //X RECEBE INFO DE AUX2
                        delete aux2;                                    //AUX2 � DELETADO DA MEMORIA//NA VDD � DEVOLVIDO O ENDERE�O PARA SO
                        return y;
                    }else{                                          //SE N�O FOR IGUAL ACERTA PONTEIROS
                        aux= aux2;                                      //AUX COME�A APONTAR PRA AUX2
                        aux2= aux->prox;                                //AUX2 COME�A APONTAR PROX DE AUX
                    }
                }
            }else{                                          //SE ENDERE�OS DIFERENTES
                if(aux2->info ==x){                             //VERIFICA SE INFO DE AUX2 � IGUAL A X
                        aux->prox = aux2->prox;                         //AUX PROX COME�A APONTAR PRA PROX DE AUX2
                        y=aux2->info;                                   //X RECEBE INFO DE AUX2
                        delete aux2;                                    //AUX2 � DELETADO DA MEMORIA//NA VDD � DEVOLVIDO O ENDERE�O PARA SO
                        return y;
                    }else{                                          //SE N�O FOR IGUAL ACERTA PONTEIROS
                        aux= aux2;                                      //AUX COME�A APONTAR PRA AUX2
                        aux2= aux->prox;                                //AUX2 COME�A APONTAR PROX DE AUX
                    }
            }
        }
        return y;
    }
    bool listaVazia(){
        return h == NULL;
    }
};


#endif // FILAORDENADA_H_INCLUDED
