#include <fstream>
#include "Carrito.h"

using namespace std;

//Declaración variables 
string _nombre;
string _contra;
string _domicilio;
string _numero;
double _creditos;
int condi;

// AQUI IMPORTAMOS EL TXT Y EMPEZAMOS A CREAR EL ARRAY QUE NOS PERMITE EXTRAER LOS DATOS
void llenaInventario(Producto prod[], int &cantidad){
    float precio;
    string nombre;
    cantidad=0;
    ifstream archivo;
    archivo.open("productos.txt");
    while(archivo >> nombre >> precio){ 
        //Qué hacemos con los datos leidos
        prod[cantidad].setNombreProducto(nombre);
        prod[cantidad].setPrecioProducto(precio);
        cantidad++;
    }
    archivo.close();
}

// FUNCION QUE NOS PERMITE MOSTRAR AL USUARIO QUE HAY EN STOCK
void imprimeInventario(Producto prod[], int cantidad){
    //Completa la función, debe imprimir todos los productos del arreglo
    for(int i=0; i<cantidad; i++){
        prod[i].imprimirNombreProducto();
        prod[i].imprimirPrecioProducto();
        cout<<endl;
    }
}

// FUNCION QUE LLAMA A LA FUNCION IMPRIME DE LA CLASE CLIENTE
void mostrarPerfil(Cliente miCliente){ 
    miCliente.imprimeNombreCliente();
    std::cout << "\n";
    miCliente.imprimeContra();
    std::cout << "\n";
    miCliente.imprimeDomicilio();
    std::cout << "\n";
    miCliente.imprimeNumero();
    std::cout << "\n";
    miCliente.imprimeCreditos();
    std::cout << "\n";
}  

int main(){
    // DECLARACIO DE VARIABLES Y DE ARRAY
    condi = 10;
    const int MAX = 10;
    int cantProductos;
    Carrito miCarrito;
    Cliente miCliente;
    Producto inventario[MAX];
    // IMPRIME INVENTARIO 
    llenaInventario(inventario, cantProductos);

    cout << "Bienvenido a la fase Alpha del Programa" << endl;
// RECOPILA INFORMACION
    cout << "Para iniciar, porfavor ingresa tu nombre a continuación " << endl;
    cin >> _nombre;
    cin.ignore();
    cout << "\n";
// RECOPILA INFORMACION
    cout << "Porfavor define una contraseña a utilizar" << endl;
    cin >> _contra;
    cin.ignore();
    cout << "\n";
// RECOPILA INFORMACION
    cout << "Porfavor ingresa tu domicilio (ingresar espacios como _)" << endl;
    cin >> _domicilio;
    cin.ignore();
    cout << "\n";
// RECOPILA INFORMACION
    cout << "Porfavor ingresa tu numero" << endl;
    cin >> _numero;
    cin.ignore();
    cout << "\n";
// RECOPILA INFORMACION
    cout << "Porfavor ingresa la cantidad de creditos a considerar" << endl;
    cin >> _creditos;
    cin.ignore();
    cout << "\n";
// MODIFICA EL OBJETO MICLIENTE DE LA CLASE CLIENTE
    miCliente.setNombreCliente(_nombre);
    miCliente.setContra(_contra);
    miCliente.setDomicilio(_domicilio);
    miCliente.setNumero(_numero);
    miCliente.setCreditos(_creditos);

    do{ 
        // DISPLAY DEL MENU
            cout << "- - - - - - M E N U - - - - - -" << endl;
            cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << endl;
            cout << "1) Modificar perfil \n 2) Mostrar información Personal \n 3) Mostrar inventario \n 4) Agregar elementos a carrito \n 5) Ver carrito actual \n 6) Pagar carrito \n 0) Salir" << endl; 
            cin >> condi;
            // OPCION DE EJECUCION 1
            if (condi==1){

                cout << "Para cambiar el nombre, porfavor ingresalo a continuación" << endl;
                cin >> _nombre;
                cin.ignore();
                cout << "\n";

                cout << "Para cambiar la contraseña, porfavor ingresala a continuación" << endl;
                cin >> _contra;
                cin.ignore();
                cout << "\n";

                cout << "Para cambiar el domicilio porfavor ingresalo a continuación" << endl;
                cin >> _domicilio;
                cin.ignore();
                cout << "\n";

                cout << "Para cambiar el número, porfavor ingresalo a continaución" << endl;
                cin >> _numero;
                cin.ignore();
                cout << "\n";

                miCliente.setNombreCliente(_nombre);
                miCliente.setContra(_contra);
                miCliente.setDomicilio(_domicilio);
                miCliente.setNumero(_numero);

            }
// OPCION DE EJECUCION 2
            else if (condi == 2){
                cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_" << endl;
                cout << "- - - - - - INFORMACION PERSONAL - - - - - -" << endl;
                cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_" << endl;
                mostrarPerfil(miCliente);
                cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<< endl;
            }
// OPCION DE EJECUCION 3 
            else if (condi == 3){
                cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_" << endl;
                cout << "- - - - - - INVENTARIO - - - - - -" << endl;  
                cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_" << endl;              
                imprimeInventario(inventario, cantProductos);
                cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_" << endl;           
            }
// OPCION DE EJECUCION 4
            else if (condi == 4){

                imprimeInventario(inventario, cantProductos);
                int productos;
                int cuantos;
                cout << "Porfavor ingresa el numero de producto que deseas comprar, siendo 1 el primero y 9 el ultimo" << endl;
                cin >> productos;
                productos=productos-1;
                cout << "Porfavor ingresa la cantidad de dicho artículo que deseas llevar: " <<endl;
                cin >> cuantos;
                // AGREGA LOS PRODUCTOS AL CARRITO
                miCarrito.agregaProducto(inventario[productos],cuantos);
            
            }
// OPCION DE EJECUCION 5
            else if(condi == 5){
                // PERMITE VER LO QUE LLEVAMOS AGREGADO AL CARRITO
                miCarrito.imprimeTicket();
            }

            else if(condi == 6){
                double nc;
                // EJECUTA LA COMPRA Y MUESTRA SALDO RESTANTE
                miCarrito.pagarCarrito(miCliente);
                nc=miCarrito.pagarCarrito(miCliente);
                miCliente.setCreditos(nc);
            }
    } while (condi!=0);
}// condicional para poder acabar el programa