#include "oficina.h"

Oficina::Oficina() {
  cont = 0;
}

void Oficina::agregarFinal(const Computadora &c) {
  if (cont < 5) {
    arreglo[cont] = c; 
    cont++;
  }
  else {
    cout << "Arreglo lleno..." << endl;
  }
}

void Oficina::mostrar() {
  cout <<left;
  cout <<setw(10)<<"SO:";
  cout <<setw(20)<<"Modelo de PC:";
  cout <<setw(20)<<"Procesador:";
  cout <<setw(6)<<"RAM:";
  cout <<endl;
  for (size_t i = 0; i < cont; i++) {
    Computadora c = arreglo[i];
    cout  << c;
    //cout << "Sistema Operativo de la maquina: " << c.getSisOp() << endl;
    //cout << "Modelo de PC: " << c.getMod() << endl;
    //cout << "Procesador: " << c.getProc() << endl;
    //cout << "RAM: " << c.getMemRam() << " GB" << endl;
    //cout << endl;
  }
}