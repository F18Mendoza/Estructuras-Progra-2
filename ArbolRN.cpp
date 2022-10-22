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

void ArbolRN::podarRecursivo(NodoRN *&r) {

    if (r != NULL) {

        podarRecursivo(r -> HIzq);
        podarRecursivo(r -> HDer);
        delete r;
    }
}

void ArbolRN::insertar(string pNombre, int pCodMarca, int pCantidad, float pPrecio) {

    if (raiz == NULL)
        raiz = new NodoRN(pNombre, pCodMarca, pCantidad, pPrecio);
    else {

        if (!existeCodigo(pCodMarca)){

            if (pCodMarca < raiz -> codMarca)
                insertarRecursivo(raiz -> HIzq, pNombre, pCodMarca, pCantidad, pPrecio);
            else
                insertarRecursivo(raiz -> HDer, pNombre, pCodMarca, pCantidad, pPrecio);
        }
    }
}

void ArbolRN::insertarRecursivo(NodoRN *&r, string pNombre, int pCodMarca, int pCantidad, float pPrecio){

    if (r == NULL) {
    	r = new NodoRN(pNombre, pCodMarca, pCantidad, pPrecio);
    } else {
        if (pCodMarca < r -> codMarca){
            insertarRecursivo(r -> HIzq, pNombre, pCodMarca, pCantidad, pPrecio);
        } else {
            insertarRecursivo(r -> HDer, pNombre, pCodMarca, pCantidad, pPrecio);
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
                return existeCodigoRecursivo(pCodMarca, raiz -> HIzq);
            else
                return existeCodigoRecursivo(pCodMarca, raiz -> HDer);
        }
    }
}

bool ArbolRN::existeCodigoRecursivo(int pCodMarca, NodoRN *&r) {

    if (r == NULL)
        return false;
    else {

        if (r -> codMarca == pCodMarca)
            return true;
        else {

            if (pCodMarca < r -> codMarca)
                return existeCodigoRecursivo(pCodMarca, r -> HIzq);
            else
                return existeCodigoRecursivo(pCodMarca, r -> HDer);
        }
    }
}

void ArbolRN::mostrarMarcas() {
	
	if (raiz != NULL) {
		cout << raiz -> codMarca << " " << raiz -> nombre << " " << raiz -> cantidad << " " << raiz -> precio << endl;
		mostrarRecursivo(raiz -> HIzq);
		mostrarRecursivo(raiz -> HDer);
	}
}

void ArbolRN::mostrarMarcasRecursivo(NodoRN *&r) {
	
	if (r != NULL) {
		cout << r -> codMarca << " " << r -> nombre << " " << r -> cantidad << " " << r -> precio << endl;
		mostrarRecursivo(r -> HIzq);
		mostrarRecursivo(r -> HDer);
	}
}

void ArbolRN::mostrar() {
	
	if (raiz != NULL) {
		cout << raiz -> codMarca << " " << raiz -> nombre << " " << raiz -> cantidad << " " << raiz -> precio << endl;
		mostrarRecursivo(raiz -> HIzq);
		mostrarRecursivo(raiz -> HDer);
	}
}

void ArbolRN::mostrarRecursivo(NodoRN *&r) {
	
	if (r != NULL) {
		cout << r -> codMarca << " " << r -> nombre << " " << r -> cantidad << " " << r -> precio << endl;
		mostrarRecursivo(r -> HIzq);
		mostrarRecursivo(r -> HDer);
	}
}
