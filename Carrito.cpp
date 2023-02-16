#include "Carrito.h"


const int Carrito::MAX;

// constructor default
Carrito::Carrito(){
    cantProd = 0;
}

// obtiene el producto del array
Producto Carrito::getProducto(int pos){
    if (pos>=0 && pos<cantProd){
        return productos[pos];
    }
    Producto p;
    return p;
}

// Obtiene la cantidad de producto a agregar
int Carrito::getCantidad(int pos){
    //Completa este método
    if (pos>=0 && pos<cantProd){
        return cantidades[pos];
    };
    return 0; // regresa 0 si pos no es válido
}

// agrega el producto a nuestro carrito existente
void Carrito::agregaProducto(Producto& p, int cuantos){
    if (cantProd < MAX){
        productos[cantProd] = p;
        cantidades[cantProd] = cuantos;
        cantProd++;
    }
}

// realiza un ciclo para poder calcular el costo total 
float Carrito::calculaTotal(){
    float total=0;
    for(int i=0; i<cantProd; i++){
        //Completa este método
            total += productos[i].getPrecioProducto() * cantidades[i];
    }
    return total;
}

// imprime el costo total, asi como un desglose detallado de los productos
void Carrito::imprimeTicket(){
    std::cout << "----------- TICKET ----------------" << std::endl;
    for(int i=0; i<cantProd; i++){
        productos[i].imprimirNombreProducto();
        std::cout <<  " | " << cantidades[i] << " pieza(s) | " << productos[i].getPrecioProducto() << " $ por pz | " << productos[i].getPrecioProducto()*cantidades[i] << " $ subtotal | " << std::endl;
        std::cout << "" << std::endl;
    }
    std::cout << "Total: $ " << calculaTotal() << std::endl;
    std::cout << "-----------------------------------" << std::endl;
}

// realiza la compra de los productos, asi como la confirmacion de compra y proyecta el saldo restante
double Carrito::pagarCarrito(Cliente c){
    double nuevototalcreditos;
    double subtotal;
    std::cout << "----------- TICKET ----------------" << std::endl;
    for(int i=0; i<cantProd; i++){
        productos[i].imprimirNombreProducto();
        std::cout <<  " | " << cantidades[i] << " pieza(s) | " << productos[i].getPrecioProducto() << " $ por pz | " << productos[i].getPrecioProducto()*cantidades[i] << " $ subtotal | " << std::endl;
        subtotal = (productos[i].getPrecioProducto()*cantidades[i])+subtotal;
        std::cout << "" << std::endl;
    }
    std::cout << "Total: $ " << calculaTotal() << std::endl;
    std::cout << c.getCredito() << "$ creditos disponibles" << std::endl;;
    nuevototalcreditos = c.getCredito() - subtotal;
    std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_" << std::endl; 
    std::cout << "Felicidades " << c.getNombreCliente() << " el carrito ha sido pagado con exito!!" << std::endl;
    std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_" << std::endl; 
    std::cout << "Te hemos enviado un mensaje de confirmación al número telefonico: " << c.getNumTelefono() << std::endl;
    std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_" << std::endl; 
    std::cout << "Los productos serán enviados a " << c.getDomicilio() << std::endl;
    std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_" << std::endl; 
    std::cout << "El valor actual del saldo restante fue de: " <<  nuevototalcreditos << std::endl;
    std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_" << std::endl; 
    std::cout << "-----------------------------------" << std::endl; 
    return nuevototalcreditos;
}