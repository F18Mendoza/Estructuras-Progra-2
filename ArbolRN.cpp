#include "ArbolRN.h"
#include <iostream>

using namespace std;

void ArbolRN::podar() {

    if (raiz != NULL) {

        podarRecursivo(raiz -> HIzq);
        podarRecursivo(raiz -> HDer);
        delete raiz;
    }
}

void ArbolRN::podarRecursivo(NodoRN *raiz) {

    if (raiz != NULL) {

        podarRecursivo(raiz -> HIzq);
        podarRecursivo(raiz -> HDer);
        delete raiz;
    }
}

void ArbolRN::insertar(string pNombre, int pCodMarca, int pCantidad, float pPrecio) {

    if (raiz == NULL)
        raiz = new NodoRN(pNombre, pCodMarca, pCantidad, pPrecio);
    else {

        if (!existeCodigo(pCodMarca)){

            if (pCodMarca < raiz -> codMarca)
                insertarRecursivoIzq(raiz -> HIzq, pNombre, pCodMarca, pCantidad, pPrecio);
            else
                insertarRecursivoDer(raiz -> HDer, pNombre, pCodMarca, pCantidad, pPrecio);
        }
    }
}

void ArbolRN::insertarRecursivoIzq(NodoRN *r, string pNombre, int pCodMarca, int pCantidad, float pPrecio){

    if (r -> HIzq == NULL) {
    	r -> HIzq = new NodoRN(pNombre, pCodMarca, pCantidad, pPrecio);
    } else {
        if (pCodMarca < r -> codMarca){
            insertarRecursivoIzq(r -> HIzq, pNombre, pCodMarca, pCantidad, pPrecio);
        } else {
            insertarRecursivoDer(r -> HDer, pNombre, pCodMarca, pCantidad, pPrecio);
        }
    }
}

void ArbolRN::insertarRecursivoDer(NodoRN *r, string pNombre, int pCodMarca, int pCantidad, float pPrecio){

    if (r -> HDer == NULL) {
    	r -> HDer = new NodoRN(pNombre, pCodMarca, pCantidad, pPrecio);
        
    } else {

        if (pCodMarca < r -> codMarca){
            insertarRecursivoIzq(r -> HIzq, pNombre, pCodMarca, pCantidad, pPrecio);
        } else {
            insertarRecursivoDer(r -> HDer, pNombre, pCodMarca, pCantidad, pPrecio);
        }
    }
}


bool ArbolRN::existeCodigo(int pCodMarca) {

    if (raiz == NULL)
        return false;
    else {

        if (raiz -> codMarca == pCodMarca)
            return true;
        else {
            
            if (pCodMarca < raiz -> codMarca)
                existeCodigoRecursivo(pCodMarca, raiz -> HIzq);
            else
                existeCodigoRecursivo(pCodMarca, raiz -> HDer);
        }
    }
}

bool ArbolRN::existeCodigoRecursivo(int pCodMarca, NodoRN *raiz) {

    if (raiz == NULL)
        return false;
    else {

        if (raiz -> codMarca == pCodMarca)
            return true;
        else {

            if (pCodMarca < raiz -> codMarca)
                existeCodigoRecursivo(pCodMarca, raiz -> HIzq);
            else
                existeCodigoRecursivo(pCodMarca, raiz -> HDer);
        }
    }
}

void ArbolRN::mostrar() {
	
	if (raiz != NULL) {
		mostrarRecursivo(raiz -> HIzq);
		cout << raiz -> codMarca << " " << raiz -> nombre << " " << raiz -> cantidad << " " << raiz -> precio << endl;
		mostrarRecursivo(raiz -> HDer);
	}
}

void ArbolRN::mostrarRecursivo(NodoRN *r) {
	
	if (r != NULL) {
		mostrarRecursivo(r -> HIzq);
		cout << r -> codMarca << " " << r -> nombre << " " << r -> cantidad << " " << r -> precio << endl;
		mostrarRecursivo(r -> HDer);
	}
}
