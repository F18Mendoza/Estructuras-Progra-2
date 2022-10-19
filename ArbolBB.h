#ifndef ARBOLBB_H
#define ARBOLBB_H

#include <iostream>
#include "NodoBB.h"

using namespace std;

class ArbolBB {

    private:
        NodoBB *raiz;
    
    public:
        ArbolBB() {raiz = NULL;}

        void insertar(string pNombre, int pCodPasillo);
        void insertarRecursivoIzq(NodoBB *r, string pNombre, int pCodPasillo);
        void insertarRecursivoDer(NodoBB *r, string pNombre, int pCodPasillo);
        void podar();
        void podarRecursivo(NodoBB *raiz);
        bool existeCodigo(int pCodPasillo);
        bool existeCodigoRecursivo(int pCodPasillo, NodoBB *raiz);
        void insertarProducto(string pNombre, int pCodPasillo, int pCodProducto);
        void insertarProductoRecursivo(NodoBB *raiz, string pNombre, int pCodPasillo, int pCodProducto);
};

#endif
