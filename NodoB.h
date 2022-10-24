#ifndef NODOB_H
#define NODOB_H

#include <iostream>


class NodoB {

	private:
		std::string nombre;
        std::string correo;
        int cedula;
        int telefono;
        int codAdmin;
        NodoB *HIzq;
        NodoB *HDer;

    public:        
        NodoB(int pCedula, std::string pNombre, int pTelefono, std::string pCorreo) {

            nombre = pNombre;
            cedula = pCedula;
            telefono = pTelefono;
            correo = pCorreo;
            HIzq = NULL;
            HDer = NULL;
        }
        
        NodoB(int pAdmin, std::string pNombre){
        	
        	nombre = pNombre;
        	codAdmin = pAdmin;
        	NodoB *HIzq;
        	NodoB *HDer;
		}

    friend class ArbolB;
};

#endif