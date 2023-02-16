#include "Cliente.h"

// Constructor default
Cliente::Cliente(){
    nombre = "Nombre no registrado";
    contra = "Contraseña no registrada";
    domicilio = "Domicilio no registrado";
    telefono = "0000000000";
    creditos = 0;
}
// constructor con parametros
Cliente::Cliente(std::string _nombre, std::string _contra, std::string _domicilio, int _telefono, double _creditos){
    nombre = _nombre;
    contra = _contra;
    domicilio = _domicilio;
    telefono = _telefono;
    creditos = _creditos;
}
// Getter Nombre
std::string Cliente::getNombreCliente(){
    return nombre;
}
// Getter contraseña
std::string Cliente::getContra(){
    return contra;
}
// getter domicilio
std::string Cliente::getDomicilio(){
    return domicilio;
}
// getter Numero telefono
std::string Cliente::getNumTelefono(){
    return telefono;
}
// get credito
double Cliente::getCredito(){
    return creditos;
}
// setter nombre
void Cliente::setNombreCliente(std::string _nombre){
    nombre = _nombre;
}
// setter contraseña
void Cliente::setContra(std::string _contra){
    contra = _contra;
}
// set domicilio
void Cliente::setDomicilio(std::string _domicilio){
    domicilio = _domicilio;
}
// set numero 
void Cliente::setNumero(std::string _telefono){
    telefono = _telefono;
}
// set creditos
void Cliente::setCreditos(double _creditos){
    creditos = _creditos;
}
// imprime nombre cliente
void Cliente::imprimeNombreCliente(){
    std::cout << " ---- NOMBRE CLIENTE -----" << std::endl;
    std::cout << nombre;
    std::cout << "\n";
}
// imprime contra 
void Cliente::imprimeContra(){
    std::cout << " ----- CONTRASEÑA --------" << std::endl;
    std::cout << contra;
    std::cout << "\n";
}
// imprime domicilio
void Cliente::imprimeDomicilio(){
    std::cout << " ----- DOMICILIO --------- " << std::endl;
    std::cout << domicilio;
    std::cout << "\n";
}
// imprime numero 
void Cliente::imprimeNumero(){
    std::cout << " ----- NUMERO ------------ " << std::endl;
    std::cout << telefono;
    std::cout << "\n";
}
// imprime creditos
void Cliente::imprimeCreditos(){
    std::cout << " ----- CREDITOS ---------- " << std::endl;
    std::cout << creditos;
    std::cout << "\n";
}