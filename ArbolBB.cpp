#include "ArbolBB.h"
#include <iostream>

using namespace std;

void ArbolBB::podar() {

    if (raiz != NULL) {

        podarRecursivo(raiz -> HIzq);
        podarRecursivo(raiz -> HDer);
        delete raiz;
    }
}

void ArbolBB::podarRecursivo(NodoBB *raiz) {

    if (raiz != NULL) {

        podarRecursivo(raiz -> HIzq);
        podarRecursivo(raiz -> HDer);
        delete raiz;
    }
}

void ArbolBB::insertar(string pNombre, int pCodPasillo) {

    if (raiz == NULL)
        raiz = new NodoBB(pNombre, pCodPasillo);
    else {

        if (!existeCodigo(pCodPasillo)){

            if (pCodPasillo < raiz -> codPasillo)
                insertarBinario(raiz -> HIzq, pNombre, pCodPasillo);
            else
                insertarBinario(raiz -> HDer, pNombre, pCodPasillo);
        }
    }
}

void ArbolBB::insertarBinario(NodoBB *raiz, string pNombre, int pCodPasillo){

    if (raiz == NULL)
        raiz = new NodoBB(pNombre, pCodPasillo);
    else {

        if (pCodPasillo < raiz -> codPasillo)
            insertarBinario(raiz -> HIzq, pNombre, pCodPasillo);
        else
            insertarBinario(raiz -> HDer, pNombre, pCodPasillo);
    }
}

bool ArbolBB::existeCodigo(int pCodPasillo) {

    if (raiz == NULL)
        return false;
    else {

        if (raiz -> codPasillo == pCodPasillo)
            return true;
        else {
            
            if (pCodPasillo < raiz -> codPasillo)
                existeCodigoRecursivo(pCodPasillo, raiz -> HIzq);
            else
                existeCodigoRecursivo(pCodPasillo, raiz -> HDer);
        }
    }
}

bool ArbolBB::existeCodigoRecursivo(int pCodPasillo, NodoBB *raiz) {

    if (raiz == NULL)
        return false;
    else {

        if (raiz -> codPasillo == pCodPasillo)
            return true;
        else {

            if (pCodPasillo < raiz -> codPasillo)
                existeCodigoRecursivo(pCodPasillo, raiz -> HIzq);
            else
                existeCodigoRecursivo(pCodPasillo, raiz -> HDer);
        }
    }
}

void ArbolBB::insertarProducto(string pNombre, int pCodPasillo, int pCodProducto) {

     if (raiz -> codPasillo == pCodPasillo) {
        raiz -> productos.insertar(pNombre, pCodProducto);
     } else {
        if (pCodPasillo < raiz -> codPasillo)
            insertarProductoRecursivo(raiz -> HIzq, pNombre, pCodPasillo, pCodProducto);
        else
            insertarProductoRecursivo(raiz -> HDer, pNombre, pCodPasillo, pCodProducto);
     }
}

void ArbolBB::insertarProductoRecursivo(NodoBB *raiz, string pNombre, int pCodPasillo, int pCodProducto) {

    if (raiz -> codPasillo == pCodPasillo) {
        raiz -> productos.insertar(pNombre, pCodProducto);
    } else {
        if (pCodPasillo < raiz -> codPasillo)
            insertarProductoRecursivo(raiz -> HIzq, pNombre, pCodPasillo, pCodProducto);
        else
            insertarProductoRecursivo(raiz -> HDer, pNombre, pCodPasillo, pCodProducto);
    }
}