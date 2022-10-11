#ifndef ARBOLRN_H
#define ARBOLRN_H

#include <iostream>
#include "NodoRN.h"

using namespace std;

class ArbolRN {

    private:
        NodoRN *raiz;
    
    public:
        ArbolRN() {raiz = NULL;}

        void insertar(string pNombre, int pCodMarca, int pCantidad, float pPrecio);
        void insertarBinario(NodoRN *raiz, string pNombre, int pCodPasillo, int pCantidad, float pPrecio);
        void podar();
        void podarRecursivo(NodoRN *raiz);
        bool existeCodigo(int pCodPasillo);
        bool existeCodigoRecursivo(int pCodPasillo, NodoRN *raiz);
};

#endif