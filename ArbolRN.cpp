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
                insertarBinario(raiz -> HIzq, pNombre, pCodMarca, pCantidad, pPrecio);
            else
                insertarBinario(raiz -> HDer, pNombre, pCodMarca, pCantidad, pPrecio);
        }
    }
}

void ArbolRN::insertarBinario(NodoRN *raiz, string pNombre, int pCodMarca, int pCantidad, float pPrecio){

    if (raiz == NULL)
        raiz = new NodoRN(pNombre, pCodMarca, pCantidad, pPrecio);
    else {

        if (pCodMarca < raiz -> codMarca)
            insertarBinario(raiz -> HIzq, pNombre, pCodMarca, pCantidad, pPrecio);
        else
            insertarBinario(raiz -> HDer, pNombre, pCodMarca, pCantidad, pPrecio);
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