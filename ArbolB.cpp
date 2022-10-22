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

void ArbolB::podarRecursivo(NodoB *&r) {

    if (r != NULL) {

        podarRecursivo(r -> HIzq);
        podarRecursivo(r -> HDer);
        delete r;
    }
}

void ArbolB::mostrar(){
	
	if (raiz != NULL){
		
		mostrarRecursivo(raiz->HIzq);
		mostrarRecursivo(raiz->HDer);
		cout << raiz->nombre << endl;
	}
}

void ArbolB::mostrarRecursivo(NodoB *&r){
	
	if (r != NULL){
		
		mostrarRecursivo(r->HIzq);
		mostrarRecursivo(r->HDer);
		cout << r->nombre << endl;
	}
}

void ArbolB::mostrarAdmin(){
	
	if (raiz != NULL){
		
		mostrarAdminRecursivo(raiz->HIzq);
		mostrarAdminRecursivo(raiz->HDer);
		cout << raiz->codAdmin << "  |  " <<raiz->nombre<< endl;
	}
}

void ArbolB::mostrarAdminRecursivo(NodoB *&r){
	
	if (r != NULL){
		
		mostrarAdminRecursivo(r->HIzq);
		mostrarAdminRecursivo(r->HDer);
		cout << r->codAdmin << "  |  " <<r->nombre<< endl;
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
                return existeCedulaRecursivo(pCedula, raiz -> HIzq);
            else
                return existeCedulaRecursivo(pCedula, raiz -> HDer);
        }
    }
}

bool ArbolB::existeCedulaRecursivo(int pCedula, NodoB *&r) {

    if (r == NULL)
        return false;
    else {

        if (r -> cedula == pCedula)
            return true;
        else {

            if (pCedula < r -> cedula)
                return existeCedulaRecursivo(pCedula, r -> HIzq);
            else
                return existeCedulaRecursivo(pCedula, r -> HDer);
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
                return existeCedulaRecursivo(pAdmin, raiz -> HIzq);
            else
                return existeCedulaRecursivo(pAdmin, raiz -> HDer);
        }
    }
}

bool ArbolB::existeAdminRecursivo(int pAdmin, NodoB *&r) {

    if (r == NULL)
        return false;
    else {

        if (r -> codAdmin == pAdmin)
            return true;
        else {

            if (pAdmin < r -> codAdmin)
                return existeCedulaRecursivo(pAdmin, r -> HIzq);
            else
                return existeCedulaRecursivo(pAdmin, r -> HDer);
        }
    }
}

void ArbolB::insertar(int pAdmin, string pNombre) {

    if (raiz == NULL)
        raiz = new NodoB(pAdmin, pNombre);
        
    else {

        if (!existeCedula(pAdmin)){

            if (pAdmin < raiz -> codAdmin)
                insertarRecursivo(raiz -> HIzq, pAdmin, pNombre);
            else
                insertarRecursivo(raiz -> HDer, pAdmin, pNombre);
        }
    }
}

void ArbolB::insertarRecursivo(NodoB *&r, int pAdmin, string pNombre){

    if (r == NULL) {
    	r = new NodoB(pAdmin, pNombre);
    } else {
        if (pAdmin < r -> codAdmin){
            insertarRecursivo(r -> HIzq, pAdmin, pNombre);
        } else {
            insertarRecursivo(r -> HDer, pAdmin, pNombre);
        }
    }
}

void ArbolB::insertar(int pCedula, string pNombre, int pTelefono, string pCorreo) {

    if (raiz == NULL)
        raiz = new NodoB(pCedula, pNombre, pTelefono, pCorreo);
        
    else {

        if (!existeCedula(pCedula)){

            if (pCedula < raiz -> cedula)
                insertarRecursivo(raiz -> HIzq, pCedula, pNombre, pTelefono, pCorreo);
            else
                insertarRecursivo(raiz -> HDer, pCedula, pNombre, pTelefono, pCorreo);
        }
    }
}

void ArbolB::insertarRecursivo(NodoB *&r, int pCedula, string pNombre, int pTelefono, string pCorreo){

    if (r == NULL) {
    	r = new NodoB(pCedula, pNombre, pTelefono, pCorreo);
    } else {
        if (pCedula < r -> cedula){
            insertarRecursivo(r -> HIzq, pCedula, pNombre, pTelefono, pCorreo);
        } else {
            insertarRecursivo(r -> HDer, pCedula, pNombre, pTelefono, pCorreo);
        }
    }
}
