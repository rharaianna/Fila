#ifndef FILAE_H
#define FILAE_H
#include "NoFila.h"
#pragma once

class FilaE
{
public:
    FilaE();
    ~FilaE();
    int getInicio(); // retorna No do inicio
    void enfileira(int val); // insere No no fim
    int desenfileira(); // elimina No do inicio
    bool vazia(); // verifica se esta vazia
    void imprime();

private:
    NoFila *inicio;
    NoFila *fim;
};

#endif