// Guardas 
#ifndef PRODUCTO
#define PRODUCTO_H
#include <iostream>

class Producto{
    public:
        //Constructor default
        Producto();
        //Constructor con parámetros
        Producto(std::string, double, std::string);
        //Métodos de acceso
        std::string getNombreProducto();
        double getPrecioProducto();
        std::string getDescripcionProducto();
        //Métodos modificadores
        void setNombreProducto(std::string);
        void setPrecioProducto(double);
        void setDescripcionProducto(std::string);
        //Adicionales
        void imprimirNombreProducto();
        void imprimirPrecioProducto();
        void imprimirDescripcionProducto();
    private:
        std::string nombre;
        std::string descripcion;
        double precio;
};

#endif