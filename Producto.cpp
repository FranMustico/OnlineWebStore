#include "Producto.h"
// constructor default
Producto::Producto(){
  nombre = "No registrado";
  precio = 0.0;
  descripcion = "No existe descripcion";
}
// constructor con parametros
Producto::Producto(std::string _nombre, double _precio, std::string _descripcion){
  nombre = _nombre;
  precio = _precio; 
  descripcion = _descripcion;
}

// getter nombre
std::string Producto::getNombreProducto() {
  return nombre;
}
// getter precio
double Producto::getPrecioProducto(){
  return precio;
}
// getter descripcion
std::string Producto::getDescripcionProducto(){
  return descripcion;
}
//setter nombre
void Producto::setNombreProducto(std::string _nombre){
  nombre = _nombre;
}
// setter precio
void Producto::setPrecioProducto(double _precio){
  precio = _precio;
}
// setter descripcion 
void Producto::setDescripcionProducto(std::string _descripcion){
  descripcion = _descripcion;
}
// imprimir nombre
void Producto::imprimirNombreProducto(){
    std::cout << nombre << std::endl;
}
// imprimir precio
void Producto::imprimirPrecioProducto(){
  std::cout << " $ " << precio << std::endl;
}
// imprimir descripcion 
void Producto::imprimirDescripcionProducto(){
  std::cout << " ------- " << descripcion << std::endl;
}