#ifndef NODOB_H
#define NODOB_H

#include <iostream>


class NodoB {


    public:
    	
    	std::string nombre;
        std::string correo;
        int cedula;
        int telefono;
        NodoB *HIzq;
        NodoB *HDer;
        
        
        NodoB(int pCedula, std::string pNombre, int pTelefono, std::string pCorreo) {

            nombre = pNombre;
            cedula = pCedula;
            telefono = pTelefono;
            correo = pCorreo;
            HIzq = NULL;
            HDer = NULL;
        }

    friend class ArbolB;
    friend class Main;
};

#endif
