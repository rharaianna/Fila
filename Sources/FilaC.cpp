#include "../Headers/FilaC.h"
#include <iostream>
using namespace std;

FilaC::FilaC(int tam)
{
    vet = new int[max];
    fim=0;
    inicio=0;
    max=tam;
}

FilaC::~FilaC()
{
    delete [] vet;
}

int FilaC::desenfileira(){
    if(!vazia()){
        inicio = inicio + 1;
        return vet[inicio-1];
    }
    cout<<"Fila vazia"<<endl;
    exit(1);
}

int FilaC::getInicio(){
    if(!vazia()){
        return vet[inicio];
    }
    cout<<"Fila Vazia"<<endl;
    exit(1);
}

void FilaC::enfileira(int val){
    if(fim == max){
        cout<<"Fila Cheia"<<endl;
        exit(2);
    }
    vet[fim] = val;
    fim = fim +1;
}

bool FilaC::vazia(){
    return (inicio==fim);
}