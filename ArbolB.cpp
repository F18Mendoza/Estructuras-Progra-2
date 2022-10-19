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
		
		if (raiz -> HIzq != NULL)
			mostrarRecursivo(raiz->HIzq);
		if (raiz -> HDer != NULL)
			mostrarRecursivo(raiz->HDer);
		cout << raiz->nombre << endl;
	}
}

void ArbolB::mostrarRecursivo(NodoB *nodo){
	
	if (nodo != NULL){
		
		mostrarRecursivo(nodo->HIzq);
		mostrarRecursivo(nodo->HDer);
		cout << nodo->nombre << endl;
	}
}

void ArbolB::mostrarAdmin(){
	
	if (raiz != NULL){
		
		if (raiz -> HIzq != NULL)
			mostrarAdminRecursivo(raiz->HIzq);
		if (raiz -> HDer != NULL)
			mostrarAdminRecursivo(raiz->HDer);
		cout << raiz->codAdmin << "  |  " <<raiz->nombre<< endl;
	}
}

void ArbolB::mostrarAdminRecursivo(NodoB *nodo){
	
	if (nodo != NULL){
		
		mostrarAdminRecursivo(nodo->HIzq);
		mostrarAdminRecursivo(nodo->HDer);
		cout << nodo->codAdmin << "  |  " <<nodo->nombre<< endl;
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

bool ArbolB::existeAdmin(int pAdmin) {

    if (raiz == NULL)
        return false;
    else {

        if (raiz -> codAdmin == pAdmin)
            return true;
        else {
            
            if (pAdmin < raiz -> codAdmin)
                existeCedulaRecursivo(pAdmin, raiz -> HIzq);
            else
                existeCedulaRecursivo(pAdmin, raiz -> HDer);
        }
    }
}

bool ArbolB::existeAdminRecursivo(int pAdmin, NodoB *raiz) {

    if (raiz == NULL)
        return false;
    else {

        if (raiz -> codAdmin == pAdmin)
            return true;
        else {

            if (pAdmin < raiz -> codAdmin)
                existeCedulaRecursivo(pAdmin, raiz -> HIzq);
            else
                existeCedulaRecursivo(pAdmin, raiz -> HDer);
        }
    }
}



void ArbolB::insertar(int pAdmin, string pNombre) {

    if (raiz == NULL)
        raiz = new NodoB(pAdmin, pNombre);
        
    else {

        if (!existeCedula(pAdmin)){

            if (pAdmin < raiz -> codAdmin)
                insertarRecursivoIzq(raiz, pAdmin, pNombre);
            else
                insertarRecursivoDer(raiz, pAdmin, pNombre);
        }
    }
}

void ArbolB::insertarRecursivoIzq(NodoB *r, int pAdmin, string pNombre){

    if (r -> HIzq == NULL) {
    	r -> HIzq = new NodoB(pAdmin, pNombre);
    } else {
        if (pAdmin < r -> codAdmin){
            insertarRecursivoIzq(r -> HIzq, pAdmin, pNombre);
        } else {
            insertarRecursivoDer(r -> HDer, pAdmin, pNombre);
        }
    }
}

void ArbolB::insertarRecursivoDer(NodoB *r, int pAdmin, string pNombre){

    if (r -> HDer == NULL) {
    	r -> HDer = new NodoB(pAdmin, pNombre);
        
    } else {

        if (pAdmin < r -> codAdmin){
            insertarRecursivoIzq(r -> HIzq, pAdmin, pNombre);
        } else {
            insertarRecursivoDer(r -> HDer, pAdmin, pNombre);
        }
    }
}


void ArbolB::insertar(int pCedula, string pNombre, int pTelefono, string pCorreo) {

    if (raiz == NULL)
        raiz = new NodoB(pCedula, pNombre, pTelefono, pCorreo);
        
    else {

        if (!existeCedula(pCedula)){

            if (pCedula < raiz -> cedula)
                insertarRecursivoIzq(raiz, pCedula, pNombre, pTelefono, pCorreo);
            else
                insertarRecursivoDer(raiz, pCedula, pNombre, pTelefono, pCorreo);
        }
    }
}

void ArbolB::insertarRecursivoIzq(NodoB *r, int pCedula, string pNombre, int pTelefono, string pCorreo){

    if (r -> HIzq == NULL) {
    	r -> HIzq = new NodoB(pCedula, pNombre, pTelefono, pCorreo);
    } else {
        if (pCedula < r -> cedula){
            insertarRecursivoIzq(r -> HIzq, pCedula, pNombre, pTelefono, pCorreo);
        } else {
            insertarRecursivoDer(r -> HDer, pCedula, pNombre, pTelefono, pCorreo);
        }
    }
}

void ArbolB::insertarRecursivoDer(NodoB *r, int pCedula, string pNombre, int pTelefono, string pCorreo){

    if (r -> HDer == NULL) {
    	r -> HDer = new NodoB(pCedula, pNombre, pTelefono, pCorreo);
        
    } else {

        if (pCedula < r -> cedula){
            insertarRecursivoIzq(r -> HIzq, pCedula, pNombre, pTelefono, pCorreo);
        } else {
            insertarRecursivoDer(r -> HDer, pCedula, pNombre, pTelefono, pCorreo);
        }
    }
}




