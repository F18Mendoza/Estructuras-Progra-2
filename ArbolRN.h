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
        void insertarRecursivo(NodoRN *&r,string pNombre, int pCodMarca,int pCantidad, float pPrecio);
        void podar();
        void podarRecursivo(NodoRN *&r);
        bool existeCodigo(int pCodPasillo);
        bool existeCodigoRecursivo(int pCodPasillo, NodoRN *&r);
        void mostrar();
        void mostrarRecursivo(NodoRN *&r);
        void mostrarMarcas();
        void mostrarMarcasRecursivo(NodoRN *&r);
        
    friend class NodoAVL;
};

#endif
