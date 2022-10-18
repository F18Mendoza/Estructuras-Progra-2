#include "arbolB.h"
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


void ArbolB::PreordenR(NodoB *R){
    
    if(R==NULL){
        return;
    }else{
        cout<<R->nombre<<" - ";
        PreordenR(R->HIzq);
        PreordenR(R->HDer);
    }
}

int main() {
	
	ArbolB clientesB;
	
	clientesB.insertar(3001, "amanda", 1811, "fm@gmail.com");
	clientesB.insertar(3002, "Elliot", 1311, "em@gmail.com");
	clientesB.insertar(3005, "Repetido", 1415, "rep@gmail.com");
	clientesB.insertar(3007, "Elli", 1311, "eli@gmail.com");
	
	clientesB.mostrar();
	
	clientesB.podar();
	
	cout << "hola" << endl;
	
	return 0;
}
