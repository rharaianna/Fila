#include "../Headers/NoFila.h"

NoFila::NoFila()
{
  
}

NoFila::~NoFila()
{

}

int NoFila::getInfo() { return info; }
NoFila* NoFila::getProx() { return prox; }
void NoFila::setInfo(int val) { info = val; };
void NoFila::setProx(NoFila *p) { prox = p; }