#include <iostream>
#include "pilhasalocsequencial.h"
using namespace std;


//faça um programa que receba uma string e possa controlar a pilha de characteres inseridos

int main()
{


    string expressao;
    cout << "Digite a expressao:";
    //cin>> expressao;
    getline(cin, expressao);

    cout << "tamanho: " << expressao.size() << endl;

    for(int i=0; i<expressao.size(); i++)
    {
        char a = expressao.at(i);
        cout << a << endl;
        cout << expressao.at(i) <<endl;
    }

}
