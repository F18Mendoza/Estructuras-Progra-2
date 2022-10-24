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
        bool existeProducto(int pCodPasillo, int pCodProducto);
        bool existeProductoRecursivo(int pCodPasillo, int pCodProducto, NodoBB *&r);
        bool existeMarca(int pCodPasillo, int pCodProducto, int pCodMarca);
        bool existeMarcaRecursivo(int pCodPasillo, int pCodProducto, int pCodMarca, NodoBB *&r);
        void insertarProducto(string pNombre, int pCodPasillo, int pCodProducto);
        void insertarProductoRecursivo(NodoBB *&r, string pNombre, int pCodPasillo, int pCodProducto);
        void insertarMarca(string pNombre, int pCodPasillo, int pCodProducto, int pCodMarca, int pCantidad, float pPrecio);
        void insertarMarcaRecursivo(NodoBB *&r, string pNombre, int pCodPasillo, int pCodProducto, int pCodMarca, int pCantidad, float pPrecio);
        void insertarInventario(string pNombre, int pCodPasillo, int pCodProducto, int pCodMarca, int pStock, int pCanasta);
        void insertarInventarioRecursivo(NodoBB *&r, string pNombre, int pCodPasillo, int pCodProducto, int pCodMarca, int pStock, int pCanasta);
        void mostrarPasillos();
        void mostrarPasillosRecursivo(NodoBB *&r);
        void mostrarProductos(int pCodPasillo);
        void mostrarProductosRecursivo(NodoBB *&r, int pCodPasillo);
        void mostrarMarcas(int pCodPasillo, int pCodProducto);
        void mostrarMarcasRecursivo(NodoBB *&r, int pCodPasillo, int pCodProducto);
        void mostrarInventario();
        void mostrarInventarioRecursivo(NodoBB *&r);
        void mostrar();
        void mostrarRecursivo(NodoBB *&r);
        void mostrarPrecio(int pCodPasillo, int pCodProducto, int pCodMarca);
        void mostrarPrecioRecursivo(int pCodPasillo, int pCodProducto, int pCodMarca, NodoBB *&r);
        void modificarMarcaNombre (string pNombre, int pCodPasillo, int pCodProducto, int pCodMarca);
        void modificarMarcaNombreRecursivo(NodoBB *&r, string pNombre, int pCodPasillo, int pCodProducto, int pCodMarca);
};

#endif
