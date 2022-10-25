#ifndef LISTADC_H
#define LISTADC_H

#include <iostream>
#include "NodoDC.h"

using namespace std;

class ListaDC {
	
	private:
		NodoDC *primero;
  
    public:
        ListaDC() {primero = NULL;}

		bool ListaVacia() { return primero == NULL; } 
		void InsertarInicio(int pcodPasillo, std::string pNombre, int visitadas);
	    int largoLista();
	    void Mostrar();

};

#endif
