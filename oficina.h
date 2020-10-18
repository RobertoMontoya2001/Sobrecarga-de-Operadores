#ifndef OFICINA_H
#define OFICINA_H

#include "computadora.h"

class Oficina {
  Computadora arreglo[5];
  size_t cont;

public:
  Oficina();
  void agregarFinal(const Computadora &c);
  void mostrar();
  
  friend Oficina& operator<<(Oficina &v, const Computadora &c)
  {
      v.agregarFinal(c);

      return v;
  }

};


#endif