#ifndef FILAC_H
#define FILAC_H

#pragma once

class FilaC
{
public:
    FilaC(int tam);
    ~FilaC();
    int getInicio();
    void enfileira(int val);
    int desenfileira();
    bool vazia();

private:
    int max;
    int *vet;
    int inicio;
    int fim;

};

#endif