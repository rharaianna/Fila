#include "../Headers/FilaCCirc.h"
#include <iostream>
using namespace std;

FilaCCirc::FilaCCirc(int tam)
{
    max = tam;
    vet = new int[max];
    inicio=0;
    fim = 0;
    n = 0;
}

FilaCCirc::~FilaCCirc()
{
    delete [] vet;
}

int FilaCCirc::inc(int ind){
    if(ind==max){
        return 0;
    }
    else{
        return ind+1;
    }
}

int FilaCCirc::desenfileira(){
    if(!vazia()){
        int val = vet[inicio];
        inicio = inc(inicio);
        n--;
        return vet[val];
    }
    cout<<"Fila vazia"<<endl;
    exit(1);
}

void FilaCCirc::enfileira(int val){
    if(n != max){
        vet[fim] = val;
        fim = inc(fim);
        n++;
    }
    cout<<"Fila cheia"<<endl;
    exit(1);
}

int FilaCCirc::getInicio(){
    if(!vazia()){
        return vet[inicio];
    }
    cout<<"Fila Vazia"<<endl;
    exit(1);
}

bool FilaCCirc::vazia(){
    return (n==0);
}