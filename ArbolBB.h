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
        void insertarRecursivo(NodoBB *&r, string pNombre, int pCodPasillo);
        void podar();
        void podarRecursivo(NodoBB *&r);
        bool existeCodigo(int pCodPasillo);
        bool existeCodigoRecursivo(int pCodPasillo, NodoBB *&r);
        void insertarProducto(string pNombre, int pCodPasillo, int pCodProducto);
        void insertarProductoRecursivo(NodoBB *&r, string pNombre, int pCodPasillo, int pCodProducto);
        void insertarMarca(string pNombre, int pCodPasillo, int pCodProducto, int pCodMarca, int pCantidad, float pPrecio);
        void insertarMarcaRecursivo(NodoBB *&r, string pNombre, int pCodPasillo, int pCodProducto, int pCodMarca, int pCantidad, float pPrecio);
        void mostrarPasillos();
        void mostrarPasillosRecursivo(NodoBB *&r);
        void mostrarProductos(int pCodPasillo);
        void mostrarProductosRecursivo(NodoBB *&r, int pCodPasillo);
        void mostrarMarcas(int pCodPasillo, int pCodProducto);
        void mostrarMarcasRecursivo(NodoBB *&r, int pCodPasillo, int pCodProducto);
        void mostrar();
        void mostrarRecursivo(NodoBB *&r);
};

#endif
