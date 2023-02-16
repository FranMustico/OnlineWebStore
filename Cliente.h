// Guardas 
#ifndef CLIENTE
#define CLIENTE_H
#include <iostream>

class Cliente{
    public:
        //Constructor default
        Cliente();
        //Constructor con parámetros
        Cliente(std::string, std::string, std::string,int, double);
        //Métodos de acceso
        std::string getNombreCliente();
        std::string getContra();
        std::string getDomicilio();
        std::string getNumTelefono();
        double getCredito();
        //Métodos modificadores
        void setNombreCliente(std::string);
        void setContra(std::string);
        void setDomicilio(std::string);
        void setNumero(std::string);
        void setCreditos(double);
        //Adicionales
        void imprimeNombreCliente();
        void imprimeContra();
        void imprimeDomicilio();
        void imprimeNumero();
        void imprimeCreditos();
    private:
    // atributos
        std::string nombre;
        std::string contra;
        std::string domicilio;
        std::string telefono;
        double creditos;

};

#endif