#ifndef NOFILA_H
#define NOFILA_H

#pragma once

class NoFila
{
public:
    NoFila();
    ~NoFila();
    int getInfo();
    NoFila* getProx();
    void setInfo(int val);
    void setProx(NoFila *p);

private:
    int info;
    NoFila *prox;
};

#endif