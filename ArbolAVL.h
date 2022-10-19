#ifndef ARBOLAVL_H
#define ARBOLAVL_H

#include <iostream>
#include "NodoAVL.h"

using namespace std;

class ArbolAVL {

    private:
        NodoAVL *raiz;
    
    public:
        ArbolAVL() {raiz = NULL;}

        void insertar(string pNombre, int pCodProducto);
        void insertarRecursivoIzq(NodoAVL *r,string pNombre, int pCodProducto);
        void insertarRecursivoDer(NodoAVL *r,string pNombre, int pCodProducto);
        void podar();
        void podarRecursivo(NodoAVL *raiz);
        bool existeCodigo(int pCodProducto);
        bool existeCodigoRecursivo(int pCodProducto, NodoAVL *raiz);

    friend class NodoBB;
};

#endif
