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
        void insertarMarca(string pNombre, int pCodProducto, int pCodMarca, int pCantidad, float pPrecio);
        void insertarMarcaRecursivo(NodoAVL *r, string pNombre, int pCodProducto, int pCodMarca, int pCantidad, float pPrecio);
        void podar();
        void podarRecursivo(NodoAVL *r);
        bool existeCodigo(int pCodProducto);
        bool existeCodigoRecursivo(int pCodProducto, NodoAVL *r);
        void mostrarProductos();
        void mostrarProductosRecursivo(NodoAVL *r);
        void mostrarMarcas(int pCodProducto);
        void mostrarMarcasRecursivo(NodoAVL *r, int pCodProducto);

    friend class NodoBB;
};

#endif
