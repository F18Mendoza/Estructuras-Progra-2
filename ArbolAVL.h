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

		bool vacio() {return raiz == NULL;}
        void insertar(string pNombre, int pCodProducto);
        void insertarRecursivo(NodoAVL *&r,string pNombre, int pCodProducto);
        void insertarMarca(string pNombre, int pCodProducto, int pCodMarca, int pCantidad, float pPrecio);
        void insertarMarcaRecursivo(NodoAVL *&r, string pNombre, int pCodProducto, int pCodMarca, int pCantidad, float pPrecio);
        void insertarInventario(string pNombre, int pCodProducto, int pCodMarca, int pStock, int pCanasta);
        void insertarInventarioRecursivo(NodoAVL *&r, string pNombre, int pCodProducto, int pCodMarca, int pStock, int pCanasta);
        void podar();
        void podarRecursivo(NodoAVL *&r);
        bool existeCodigo(int pCodProducto);
        bool existeCodigoRecursivo(int pCodProducto, NodoAVL *&r);
        bool existeMarca(int pCodProducto, int pCodMarca);
        bool existeMarcaRecursivo(int pCodProducto, int pCodMarca, NodoAVL *&r);
        void mostrarProductos();
        void mostrarProductosRecursivo(NodoAVL *&r);
        void mostrarMarcas(int pCodProducto);
        void mostrarMarcasRecursivo(NodoAVL *&r, int pCodProducto);
        void mostrarInventario();
        void mostrarInventarioRecursivo(NodoAVL *&r);
        void mostrar();
        void mostrarRecursivo(NodoAVL *&r);
        void mostrarPrecio(int pCodProducto, int pCodMarca);
        void mostrarPrecioRecursivo(int pCodProducto, int pCodMarca, NodoAVL *&r);

    friend class NodoBB;
};

#endif
