#include "ArbolB.h"
#include <iostream>

using namespace std;

void ArbolB::podar() {

    if (raiz != NULL) {

        podarRecursivo(raiz -> HIzq);
        podarRecursivo(raiz -> HDer);
        delete raiz;
    }
}

void ArbolB::podarRecursivo(NodoB *raiz) {

    if (raiz != NULL) {

        podarRecursivo(raiz -> HIzq);
        podarRecursivo(raiz -> HDer);
        delete raiz;
    }
}

void ArbolB::mostrar(){
	
	if (raiz != NULL){
		
		mostrarRecursivo(raiz->HIzq);
		mostrarRecursivo(raiz->HDer);
		cout << raiz->nombre << endl;
	}
}

void ArbolB::mostrarRecursivo(NodoB *raiz){
	
	if (raiz != NULL){
		
		mostrarRecursivo(raiz->HIzq);
		mostrarRecursivo(raiz->HDer);
		cout << raiz->nombre << endl;
	}
}

bool ArbolB::existeCedula(int pCedula) {

    if (raiz == NULL)
        return false;
    else {

        if (raiz -> cedula == pCedula)
            return true;
        else {
            
            if (pCedula < raiz -> cedula)
                existeCedulaRecursivo(pCedula, raiz -> HIzq);
            else
                existeCedulaRecursivo(pCedula, raiz -> HDer);
        }
    }
}

bool ArbolB::existeCedulaRecursivo(int pCedula, NodoB *raiz) {

    if (raiz == NULL)
        return false;
    else {

        if (raiz -> cedula == pCedula)
            return true;
        else {

            if (pCedula < raiz -> cedula)
                existeCedulaRecursivo(pCedula, raiz -> HIzq);
            else
                existeCedulaRecursivo(pCedula, raiz -> HDer);
        }
    }
}

void ArbolB::insertar(int pCedula, string pNombre, int pTelefono, string pCorreo) {

    if (raiz == NULL)
        raiz = new NodoB(pCedula, pNombre, pTelefono, pCorreo);
        
    else {

        if (!existeCedula(pCedula)){

            if (pCedula < raiz -> cedula)
                insertarBinario(raiz -> HIzq, pCedula, pNombre, pTelefono, pCorreo);
            else
                insertarBinario(raiz -> HDer, pCedula, pNombre, pTelefono, pCorreo);
        }
    }
}

void ArbolB::insertarBinario(NodoB *raiz, int pCedula, string pNombre, int pTelefono, string pCorreo){

    if (raiz == NULL)
        raiz = new NodoB(pCedula, pNombre, pTelefono, pCorreo);
    else {

        if (pCedula < raiz -> cedula)
            insertarBinario(raiz -> HIzq, pCedula, pNombre, pTelefono, pCorreo);
        else
            insertarBinario(raiz -> HDer, pCedula, pNombre, pTelefono, pCorreo);
    }
}

void ArbolB::PreordenR(NodoB *R){
    
    if(R==NULL){
        return;
    }else{
        cout<<R->nombre<<" - ";
        PreordenR(R->HIzq);
        PreordenR(R->HDer);
    }
}

