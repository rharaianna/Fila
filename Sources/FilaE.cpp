#include "../Headers/FilaE.h"
#include <iostream>
using namespace std;

FilaE::FilaE()
{
    inicio = fim = NULL;
}

FilaE::~FilaE()
{
    NoFila *p = inicio;
    while(inicio!=NULL){
        inicio = p->getProx();
        delete p;
        p = inicio;
    }
}

int FilaE::getInicio(){
    if(inicio!=NULL){
        return inicio->getInfo();
    }
    else{
        cout << "Fila Vazia"<<endl;
        exit(1);
    }
}

void FilaE::enfileira(int val){
    NoFila *p = new NoFila;
    p->setInfo(val);
    p->setProx(NULL);
    if (inicio==NULL){
        inicio = p;
    }
    else{
        fim ->setProx(p);
    }
    fim = p;
} 

int FilaE::desenfileira(){
    if (inicio != NULL){
        NoFila *p = inicio;
        inicio = p->getProx();
        if(fim == NULL){ //Não entendi
            fim=NULL;
        }
        int val = p->getInfo();
        delete p;
        return val;
    }
    else{
        cout<<"Fila vazia"<<endl;
        exit(1);
    }
}

bool FilaE::vazia(){
 return inicio==NULL;
}

void FilaE::imprime(){
    cout<<"Fila: ";
    for(NoFila *p = inicio; p!= NULL; p=p->getProx()){
        cout << p->getInfo() << " ";
    }
    cout << endl;
}