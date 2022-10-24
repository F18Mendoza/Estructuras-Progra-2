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
        void modificarMarcaNombre (string pNombre, int pCodMarca);
        void modificarMarcaNombreRecursivo(NodoRN *&r, string pNombre, int pCodMarca);
        void modificarMarcaPrecio (float pPrecio, int pCodMarca);
        void modificarMarcaPrecioRecursivo(NodoRN *&r, float pPrecio, int pCodMarca);
		 
    friend class NodoAVL;
};

#endif
