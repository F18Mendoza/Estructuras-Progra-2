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

		bool vacio() {return raiz == NULL;}
        void insertar(string pNombre, int pCodMarca, int pCantidad, float pPrecio);
        void insertarRecursivo(NodoRN *&r,string pNombre, int pCodMarca,int pCantidad, float pPrecio);
        void podar();
        void podarRecursivo(NodoRN *&r);
        bool existeCodigo(int pCodMarca);
        bool existeCodigoRecursivo(int pCodMarca, NodoRN *&r);
        void mostrar();
        void mostrarRecursivo(NodoRN *&r);
        void mostrarMarcas();
        void mostrarMarcasRecursivo(NodoRN *&r);
        void mostrarPrecio(int pCodMarca);
        void mostrarPrecioRecursivo(int pCodMarca, NodoRN *&r);
        
    friend class NodoAVL;
};

#endif
