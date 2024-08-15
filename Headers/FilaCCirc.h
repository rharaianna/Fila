#ifndef FILACCIRC_H
#define FILACCIRC_H

#pragma once

class FilaCCirc
{
public:
    FilaCCirc(int tam);
    ~FilaCCirc();
    int desenfileira();
    void enfileira(int val);
    int getInicio();
    bool vazia();


private:
    int max;
    int *vet;
    int n;
    int inicio;
    int fim;
    int inc(int ind); //incrementa indice
};

#endif