#ifndef ARBOLAA_H
#define ARBOLAA_H

#include <iostream>
#include "NodoAA.h"

using namespace std;

class ArbolAA {

    private:
    	NodoAA *raiz;
    
    public:
        ArbolAA() {raiz = NULL;}

		bool vacio() {return raiz == NULL;}
		void insertar(string pNombre, int pCodMarca, int pStock, int pCanasta);
        void insertarRecursivo(NodoAA *&r, string pNombre, int pCodMarca, int pStock, int pCanasta);
        void podar();
        void podarRecursivo(NodoAA *raiz);
		bool existeMarca(int pCodMarca);
		bool existeMarcaRecursivo(NodoAA *&r, int pCodMarca);
		void mostrar();
		void mostrarRecursivo(NodoAA *&r);
};

#endif
