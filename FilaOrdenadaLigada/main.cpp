#include <iostream>
#include "FilaOrdenada.h"
#include "Node.h"
#include "stdlib.h"
using namespace std;

int main()
{

        FilaOrdenada<int> fo;
        int opc;
        int x = 0;
         Node<int> * aux;                                           //CRIA UM PONTEIRO DO TIPO NODE(QUE A FILA É FORMADA) AUX,
                                                                    //ATRIBUI O ENDEREÇO DE MEMORIA DE INICIO DA FILA(REFERENCIA A FILA)
                                                                    //AUX É IGUAL AO ENDEREÇO DE INICIO PQ A FILA SEGUE DO INICIO PARA O FIM

    do{
        cout<<">>>>>Lista Ligada Ordenada<<<<<"<<endl;
        cout<<"1 - Insere numeros aleatorios"<<endl;
        cout<<"2 - Exibe a lista"<<endl;
        cout<<"3 - Remover"<<endl;
        cout<<"5 - Limpar tela"<<endl;
        cout<<"4 - Sai do programa"<<endl;
        cin>>opc;
        switch(opc){                                                                        //ESTRUTURA SWITCH
            case 1:
                for(int i=0; i<20;i++){                                                         //REPETIR POR 20 VEZES
                    x = rand()%50; /* gera numero randomico de 0 a 49 */

                    if( fo.aloca(x)){//INSERE NA LISTA
                        cout<<i<<" Inserido: "<<x<<endl;                                        //PRINTAR O NUMERO DO RANDOMICO
                     }else{
                       cout<<"Pau nelas"<<endl;
                     }
                }
                system("cls");
                break;
            case 2:
                {
                   cout<<"Numeros na Fila: "<<endl;
                    aux = fo.h;
                    while(aux != NULL){                              //AUX DIFERENTE DE NULL? SE SIM (ENTRA NA ESTRUTURA)
                        cout<<aux->info<<" ";                       //AUX QUE REPRESENTA INICIO NA PRIMEIRA PASSAGEM E O PROXIMO ELEMENTO NAS SEGUINTES
                        aux = aux->prox;                             //APOS PRINTAR AUX COMEÇA  APONTAR PARA PROXIMO ELEMENTO DA FILA(PROX QUE ESTA DENTRO DELE)
                    }
                    cout<<"."<<endl;                                //PRINTA PONTO FINAL E PULAR LINHA
                }
                break;

            case 4:
                    cout<<"tchau"<<endl;
                break;

            case 3:{
                if(fo.listaVazia()){                                //PRA REMOVER É NECESSARIO QUE A LISTA TENHA VALOR
                    cout<<"Lista Vazia"<<endl;
                }else{
                    cin>>x;                                         //INSERE O NUMERO QUE TEM QUE SER REMOVIDO
                    x=fo.remove(x);                                 //X RECEBE O VALOR REMOVIDO
                    cout<<"Numero removido: "<<x<<endl;             //PRINTA O VALOR REMOVIDO
                }
            }
            break;
            case 5:
                system("cls");
                break;
            default:
                cout<<"não há essa opção"<<endl;
        }

    }while(opc!=4);
    return 0;
}
