#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include "ArbolB.h"
#include "ArbolBB.h"
#include <conio.h>

using namespace std;

//--------------------------------------METODOS DE REPORTES-----------------------------------------



//------------------------------------------------------------------------------------------------------------------------

void menuClientesRegistrado(int &descuento, ArbolBB &supermercado){
	
	char clientes;
	int codigoPasillo, codigoProducto, codigoMarca;
	while (clientes != '5'){
		cout << " _____________________________________________________________" << endl;
		cout << "|                   MENU CLIENTES REGISTRADOS                 |" << endl;
		cout << "|-------------------------------------------------------------|" << endl;
		cout << "| 1. Consultar Precio                                         |" << endl;
		cout << "| 2. Consultar Descuento                                      |" << endl;
		cout << "| 3. Consultar Productos                                      |" << endl;
		cout << "| 4. Comprar                                                  |" << endl;
		cout << "| 5. Salir                                                    |" << endl;                                                     
		cout << "|_____________________________________________________________|" << endl;
		cout << "Seleccione una opcion: ";
		cin >> clientes;
		
		switch (clientes){
			
			case '1':
				cout << "Indique el codigo del pasillo: ";
				cin >> codigoPasillo;
				if (supermercado.existeCodigo(codigoPasillo)) {
					cout << "Indique el codigo del producto: ";
					cin >> codigoProducto;
					if (supermercado.existeProducto(codigoPasillo, codigoProducto)) {
						cout << "Indique el codigo de la marca: ";
						cin >> codigoMarca;
						if (supermercado.existeMarca(codigoPasillo, codigoProducto, codigoMarca)){
							supermercado.mostrarPrecio(codigoPasillo, codigoProducto, codigoMarca);
						} else {
							cout << "El codigo que ingreso es incorrecto. Intente de nuevo." << endl;
						}
					} else {
						cout << "El codigo que ingreso es incorrecto. Intente de nuevo." << endl;
					}
				} else {
					cout << "El codigo que ingreso es incorrecto. Intente de nuevo." << endl;
				}
				break;
				
			case '2':
				cout << "El descuento actual es del " << descuento << "%." << endl;
				break;
				
			case '3':
				cout << "Indique el codigo de pasillo: ";
				cin >> codigoPasillo;
				if (supermercado.existeCodigo(codigoPasillo)) {
					supermercado.mostrarProductos(codigoPasillo);
				} else {
					cout << "El codigo que ingreso es incorrecto. Intente de nuevo." << endl;
				}
				break;
				
			case '4':
				cout << "Se compra" << endl;
				break;
				
			case '5': 
				cout << "Volviendo al menu anterior." << endl;
				break;
			default:
				cout << "---------Opcion Invalida-----------" << endl;
		}
	}
}

void menuClientesNoRegistrado(ArbolBB &supermercado){
	
	char clientes;
	int codigoPasillo, codigoProducto, codigoMarca;
	while (clientes != '5') {
		cout << " _____________________________________________________________" << endl;
		cout << "|                MENU CLIENTES NO REGISTRADOS                 |" << endl;
		cout << "|-------------------------------------------------------------|" << endl;
		cout << "| 1. Consultar Precio                                         |" << endl;
		cout << "| 2. Consultar Descuento (Deshabilitado)                      |" << endl;
		cout << "| 3. Consultar Productos                                      |" << endl;
		cout << "| 4. Comprar (Deshabilitado)                                  |" << endl;
		cout << "| 5. Salir                                                    |" << endl;                                                     
		cout << "|_____________________________________________________________|" << endl;
		cout << "Seleccione una opcion: ";
		cin >> clientes;
		
		switch (clientes){
			
			case '1':
				cout << "Indique el codigo del pasillo: ";
				cin >> codigoPasillo;
				if (supermercado.existeCodigo(codigoPasillo)) {
					cout << "Indique el codigo del producto: ";
					cin >> codigoProducto;
					if (supermercado.existeProducto(codigoPasillo, codigoProducto)) {
						cout << "Indique el codigo de la marca: ";
						cin >> codigoMarca;
						if (supermercado.existeMarca(codigoPasillo, codigoProducto, codigoMarca)){
							supermercado.mostrarPrecio(codigoPasillo, codigoProducto, codigoMarca);
						} else {
							cout << "El codigo que ingreso es incorrecto. Intente de nuevo." << endl;
						}
					} else {
						cout << "El codigo que ingreso es incorrecto. Intente de nuevo." << endl;
					}
				} else {
					cout << "El codigo que ingreso es incorrecto. Intente de nuevo." << endl;
				}
				break;
				
			case '2':
				cout << "Usted debe registrarse para poder hacer uso de esta opcion" << endl;
				break;
				
			case '3':
				cout << "Indique el codigo de pasillo: ";
				cin >> codigoPasillo;
				if (supermercado.existeCodigo(codigoPasillo)) {
					supermercado.mostrarProductos(codigoPasillo);
				} else {
					cout << "El codigo que ingreso es incorrecto. Intente de nuevo." << endl;
				}
				break;
				
			case '4':
				cout << "Usted debe registrarse para poder hacer uso de esta opcion" << endl;
				break;
				
			case '5': 
				cout << "Volviendo al menu anterior." << endl;
				break;
				
			default:
			cout << "---------Opcion Invalida-----------" << endl;		}
	}
}

void baseDeDatos(ArbolB &clientes, int &descuento, ArbolBB &supermercado){
	
	char datos;
	string nomCliente;
	int cedCliente;
	int celCliente;
	string correoCliente;
	int codigoPasillo, codigoProducto, codigoMarca;
	string nombreProducto;
	
	while(datos != '7'){
	
		cout << " _____________________________________________________________" << endl;
		cout << "|                   MENU BASE DE DATOS                        |" << endl;
		cout << "|-------------------------------------------------------------|" << endl;
		cout << "| 1. Insertar Producto nuevo                                  |" << endl;
		cout << "| 2. Modificar un producto de una marca, el precio o el nombre|" << endl;
		cout << "| 3. Consultar Precio                                         |" << endl;
		cout << "| 4. Consultar Descuento                                      |" << endl;
		cout << "| 5. Modificar el Descuento                                   |" << endl; 
		cout << "| 6. Registrar clientes                                       |" << endl;   
		cout << "| 7. Salir                                                    |" << endl;                    
		cout << "|_____________________________________________________________|" << endl;
		cout << "Seleccione una opcion: ";
		cin >> datos;
		
		switch (datos){
			
			case '1':
				cout << "Ingrese el codigo del pasillo al cual desea agregar el producto: ";
				cin >> codigoPasillo;
				if (supermercado.existeCodigo(codigoPasillo)) {
					cout << "Ingrese el codigo del producto a registrar: ";
					cin >> codigoProducto;
					if (!supermercado.existeProducto(codigoPasillo, codigoProducto)) {
						cout << "Ingrese el nombre del producto: ";
						cin >> nombreProducto;
						supermercado.insertarProducto(nombreProducto, codigoPasillo, codigoProducto);
					} else {
						cout << "El codigo que ingreso ya esta registrado. Intente de nuevo." << endl;
					}
				} else {
					cout << "El codigo que ingreso no es valido. Intente de nuevo." << endl;
				}
				break;
				
			case '2':
				cout << "Modificar cosas" << endl;
				break;
				
			case '3':
				cout << "Indique el codigo del pasillo: ";
				cin >> codigoPasillo;
				if (supermercado.existeCodigo(codigoPasillo)) {
					cout << "Indique el codigo del producto: ";
					cin >> codigoProducto;
					if (supermercado.existeProducto(codigoPasillo, codigoProducto)) {
						cout << "Indique el codigo de la marca: ";
						cin >> codigoMarca;
						if (supermercado.existeMarca(codigoPasillo, codigoProducto, codigoMarca)){
							supermercado.mostrarPrecio(codigoPasillo, codigoProducto, codigoMarca);
						} else {
							cout << "El codigo que ingreso es incorrecto. Intente de nuevo." << endl;
						}
					} else {
						cout << "El codigo que ingreso es incorrecto. Intente de nuevo." << endl;
					}
				} else {
					cout << "El codigo que ingreso es incorrecto. Intente de nuevo." << endl;
				}
				break;
				
			case '4':
				cout << "El descuento actual es del " << descuento << "%." << endl;
				break;
				
			case '5':
				cout << "Ingrese el nuevo descuento: ";
				cin >> descuento;
				break;
			
			case '6':
				cout << "Registrar cliente" << endl;
				cout << "El proceso que usted esta por realizar agregara al cliente a la base de datos\n" << endl;
				cout << "Por favor ingrese la cedula del cliente: ";
				cin >> cedCliente;
				if (!clientes.existeCedula(cedCliente)) {
					cout << "Ingrese el nombre del cliente: ";
					cin >> nomCliente;
					cout << "Ingrese el telefono del ciente: ";
					cin >> celCliente;
					cout << "Ingrese el correo del cliente: ";
					cin >> correoCliente;
					clientes.insertar(cedCliente, nomCliente, celCliente, correoCliente);
				}
				break;
				
			case '7':
				cout << "Volviendo al menu anterior." << endl;
				break;
				
			default:
				cout << "---------Opcion Invalida-----------" << endl;		
		}
	}	
}

void reportes(ArbolBB &supermercado, ArbolB &clientes){
	
	int seleccion;
	int pasilloCliente;
	
	while (seleccion != 15){
		cout << " -------------------------------------------------------------" << endl;
		cout << "|                      MENU REPORTES                          |" << endl;
		cout << "|-------------------------------------------------------------|" << endl;
		cout << "| 1. Pasillo mas visitado                                     |" << endl;
		cout << "| 2. Pasillo menos visitado                                   |" << endl;
		cout << "| 3. Productos por pasillo mas vendidos                       |" << endl;
		cout << "| 4. Marcas mas vendidas                                      |" << endl;
		cout << "| 5. Cliente que mas compro                                   |" << endl; 
		cout << "| 6. Cliente que menos compro                                 |" << endl; 
		cout << "| 7. Producto que mas se cargo en gondolas                    |" << endl;
		cout << "| 8. Cliente que mas facturo                                  |" << endl;
		cout << "| 9. Marcas de un producto                                    |" << endl;
		cout << "| 10. Factura de mayor monto                                  |" << endl;
		cout << "| 11. Productos de un pasillo                                 |" << endl; 
		cout << "| 12. Clientes del supermercado                               |" << endl; 
		cout << "| 13. Pasillos del supermercado                               |" << endl;
		cout << "| 14. Inventario dei supermercado                             |" << endl; 
		cout << "| 15. Salir                                                   |" << endl;                       
		cout << "|_____________________________________________________________|" << endl;
		
		cout << "Seleccione una opcion: \n" << endl;
		cin >> seleccion;
		
		switch (seleccion){
			
			case 1:
				cout << "sale pasillo mas visitado" << endl;
				break;
			
			case 2:
				cout << "sale pasillo menos visitado" << endl;
				break;
				
			case 3:
				cout << "salen productos mas vendidos por pasillo" << endl;
				break;
				
			case 4:
				cout << "salen marcas mas vendidas" << endl;
				break;
				
			case 5:
				cout << "sale cliente que mas compro" << endl;
				break;
				
			case 6:
				cout << "sale cliente que menos compro" << endl;
				break;
		
			case 7: 
				cout << "sale producto mas cargado en gondolas" << endl;
				break;
				
			case 8:
				cout << "sale cliente que mas facturo" << endl;
				break;
				
			case 9:
				cout << "salen las marcas que hay de un producto" << endl;
				break;
			
			case 10:
				cout << "sale la factura de mayor monto" << endl;
				break;
				
			case 11: 
				cout << "Productos de un pasillo\n" << endl;
				cout << "De que pasillo desearía consultar los productos: " << endl;
				cin >> pasilloCliente;
				if (supermercado.existeCodigo(pasilloCliente)){
					supermercado.mostrarProductos(pasilloCliente);
					break;
				}
				cout << "El pasillo ingresado no corresponde a ninguno disponible\n" << endl;
				break;
							
			case 12:
				cout << "Los clientes del supermercado\n" << endl;
				clientes.mostrar();
				break;
			
			case 13:
				cout << "Los pasillos del supermercado\n" << endl;
				supermercado.mostrarPasillos();
				break;
				
			case 14:
				cout << "El inventario del supermercado\n" << endl;
				supermercado.mostrarInventario();
				break;
				
			case 15:
				cout << "Volviendo al menu anterior" << endl;
				break;				
			
			default:
				cout << "Opción invalida" << endl;
				break;
				
		}
		
	
	}
}

void menuAdministrador(ArbolB &clientes, int &descuento, ArbolBB &supermercado){
	
	char opcion;
	
	while (opcion != '6') {
		cout << " _____________________________________________________________" << endl;
		cout << "|                   MENU ADMINISTRADOR                        |" << endl;
		cout << "|-------------------------------------------------------------|" << endl;
		cout << "| 1. Mantenimiento de la Base de Datos                        |" << endl;
		cout << "| 2. Facturar                                                 |" << endl;
		cout << "| 3. Revisar gondolas                                         |" << endl;
		cout << "| 4. Verificar inventario                                     |" << endl;
		cout << "| 5. Reportes                                                 |" << endl; 
		cout << "| 6. Salir                                                    |" << endl;                     
		cout << "|_____________________________________________________________|" << endl;
		cout << "Seleccione una opcion: ";
		cin >> opcion;
		
		switch (opcion){
			
			case '1':
				cout << "Mantenimiento Bases"<< endl;
				baseDeDatos(clientes, descuento, supermercado);
				break;
			case '2':
				cout << "Menu de Factura" << endl;
				break;
			case '3':
				cout << "Revisar Gondolas" << endl;	
				break;	
			case '4':
				cout << "Verificar Inventarios" << endl;
				break;
			case '5':
				cout << "Reportes" << endl;
				reportes(supermercado, clientes);
				break;
			case '6':
				cout << "Volviendo al menu anterior." << endl;	
				break;
			default:
				cout << "---------Opcion Invalida-----------" << endl;
		}
	}
}


int main() {
	
//-------------------------------------------- Lectura de archivos txt	

	ArbolBB supermercado;
	int descuento = 5;
	string linea, codigoPasillo, nombrePasillo, codigoProducto, nombreProducto, codigoMarca, nombreMarca, cantidadMarca, precioMarca, cantidadStock, canastaBasica;
	
	ifstream pasillos("Pasillos.txt");
	while(!pasillos.eof()) {
		
		getline(pasillos, linea);
		stringstream input_stringstream(linea);
		getline(input_stringstream, codigoPasillo, ';');
		getline(input_stringstream, nombrePasillo, ';');
		supermercado.insertar(nombrePasillo, stoi(codigoPasillo));
	}
	pasillos.close();
	
	ifstream productos("ProductosPasillos.txt");
	while(!productos.eof()) {
		
		getline(productos, linea);
		stringstream input_stringstream(linea);
		getline(input_stringstream, codigoPasillo, ';');
		getline(input_stringstream, codigoProducto, ';');
		getline(input_stringstream, nombreProducto, ';');
		supermercado.insertarProducto(nombreProducto, stoi(codigoPasillo), stoi(codigoProducto));
	}
	productos.close();
	
	ifstream marcas("MarcasProductos.txt");
	while(!marcas.eof()) {
		
		getline(marcas, linea);
		stringstream input_stringstream(linea);
		getline(input_stringstream, codigoPasillo, ';');
		getline(input_stringstream, codigoProducto, ';');
		getline(input_stringstream, codigoMarca, ';');
		getline(input_stringstream, nombreMarca, ';');
		getline(input_stringstream, cantidadMarca, ';');
		getline(input_stringstream, precioMarca, ';');
		supermercado.insertarMarca(nombreMarca, stoi(codigoPasillo), stoi(codigoProducto), stoi(codigoMarca), stoi(cantidadMarca), stof(precioMarca));
	}
	marcas.close();
	
//---------------------------LECTURA DE INVENTARIO-------------------------------------
	
	ifstream inventario("Inventario.txt");
	while (!inventario.eof()) {
		
		getline(inventario, linea);
		stringstream input_stringstream(linea);
		getline(input_stringstream, codigoPasillo, ';');
		getline(input_stringstream, codigoProducto, ';');
		getline(input_stringstream, codigoMarca, ';');
		getline(input_stringstream, nombreMarca, ';');
		getline(input_stringstream, cantidadStock, ';');
		getline(input_stringstream, canastaBasica, ';');
		//cout << cantidadStock << endl;
		supermercado.insertarInventario(nombreMarca, stoi(codigoPasillo), stoi(codigoProducto), stoi(codigoMarca), stoi(cantidadStock), stoi(canastaBasica));
	}
	inventario.close();

//------------------------LECTURA DE CLIENTES -----------------------------------

	ArbolB clientes;
	size_t posicion;
	string sCedula; // s  por string
	int iCedula;	// i  por int
	string sCliente;
	string sTelefono;
	int iTelefono;
	string sCorreo;
	
	ifstream archivo5("Clientes.txt");
	while (getline(archivo5, linea)){
		//cout << "-----------------------" << endl;
		
		sCedula = linea.substr(0, linea.find(";"));
		posicion = linea.find(";");
		linea.erase (0, posicion+1);
		//cout << sCedula << endl;
		
		sCliente = linea.substr(0, linea.find(";"));
		posicion = linea.find(";");
		linea.erase(0, posicion+1);
		//cout <<  sCliente << endl;
		
		sTelefono = linea.substr(0, linea.find(";"));
		posicion = linea.find(";");
		linea.erase (0, posicion+1);
		//cout <<  sTelefono << endl;
		
		sCorreo = linea.substr(0, linea.find(";"));
		posicion = linea.find(";");
		linea.erase (0, posicion);
		//cout << sCorreo << endl;
		
		//----------conversion a int de los parametros necesarios
		
		try{
			iCedula = stoi(sCedula);
			//cout << "Ya es int: " << iCedula << "   ";
			iTelefono = stoi(sTelefono);
			//cout << iTelefono << endl;
		}
		catch (std::exception& e) {
		}
			
		
		clientes.insertar(iCedula, sCliente, iTelefono, sCorreo);	
	}




//------------------------LECTURA DE ADMINISTRADORES -----------------------------------

	string sAdminCod;
	int iAdmin;
	string sNombre;
	ArbolB administradores;

	ifstream archivo6("Administradores.txt");
	while (getline(archivo6, linea)){
		
		sAdminCod = linea.substr(0, linea.find(";"));
		posicion = linea.find(";");
		linea.erase (0, posicion+1);
		
		sNombre = linea.substr(0, linea.find(";"));
		posicion = linea.find(";");
		linea.erase(0, posicion+1);
		
		//----------conversion a int de los parametros necesarios
		
		try{
			iAdmin = stoi(sAdminCod);
		}
		catch (std::exception& e) {
		}
		
		administradores.insertar(iAdmin, sNombre);
	
	}
	
	char ingreso;
	int cedCliente, codigoAdmin;
		
	while(ingreso != '3'){
		
		cout << " _________________________________" << endl;
		cout << "|           MENU INGRESO          |" << endl;
		cout << "|_________________________________|" << endl;
		cout << "| Desea ingresar como:            |" << endl;
		cout << "| 1. Cliente                      |" << endl;
		cout << "| 2. Administrador                |" <<endl;
		cout << "| 3. Salir                        |" << endl;
		cout << "|_________________________________|" << endl;
		cout << "Seleccione una opcion: ";
		cin >> ingreso;	
		
		switch (ingreso){
			
			case '1':
				cout << "Ingrese su cedula para verificar si esta registrado o no: ";
				cin >> cedCliente;
				if(clientes.existeCedula(cedCliente)){
					menuClientesRegistrado(descuento, supermercado);
					break;
				}
				cout << "Usted no es un cliente registrado." << endl;
				menuClientesNoRegistrado(supermercado);
				break;
				
			case '2':
				cout << "Ingrese su codigo de administrador: ";
				cin >> codigoAdmin;
				if (administradores.existeAdmin(codigoAdmin)){
					menuAdministrador(clientes, descuento, supermercado);
					break;
				}
				
				cout << "Codigo invalido" << endl;
					
				break;
			case '3':
				cout << "Adios. Vuelva pronto" << endl;
				break;			
			default:
				cout << "---------Opcion Invalida-----------" << endl;
		}	
	}//*/
	/*supermercado.mostrarInventario();
	cout << "---------------------------" << endl;
	supermercado.mostrar();
	supermercado.podar();
	clientes.podar();
	administradores.podar();//*/
	
	cout << "Hola" <<endl;
	
	return 0;
}
