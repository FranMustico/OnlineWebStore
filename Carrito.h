#ifndef CARRITO_H
#define CARRITO_H
#include "Producto.h"
#include "Cliente.h"
#include <iostream>

class Carrito{
    public:
        //constante estática de clase
        static const int MAX = 10;
        //Constructor default
        Carrito();
        //Getters
        Producto getProducto(int);
        int getCantidad(int);
        //Metodods
        void agregaProducto(Producto&, int);
        float calculaTotal();
        void imprimeTicket();
        double pagarCarrito(Cliente);

    private:
    //atributos
        Producto productos[MAX];
        int cantidades[MAX];
        int cantProd;
};

#endif //CARRITO_H
