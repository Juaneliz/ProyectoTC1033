#ifndef CODIGO_PROYECTO_H_
#define CODIGO_PROYECTO_H_

#include <iostream>
#include <string>
#include "Funciones.h"

class Cine {
private:
    Funciones func;    // Composicion: Funciones como miembro 
    float precio;      // Precio del boleto
    int boletos;       // Numero de boletos comprados
    float total;       // Total de la compra 

public:
    // Constructor por defecto: inicializa un cine con una funcion y valores predeterminados
    Cine(Funciones f);

    // Constructor con parametros: permite especificar la funcion, el precio y los boletos
    Cine(Funciones f, float p, int b);

    // Metodos getter (accesores): Devuelven los valores de los atributos privados
    Funciones get_func();   // Devuelve la funcion asociada a este cine
    float get_precio();     // Devuelve el precio del boleto
    int get_boletos();      // Devuelve el numero de boletos

    // Metodos setter (mutadores): Permiten modificar los valores de los atributos privados
    void set_func(Funciones f);     // Establece la funcion asociada a este cine
    void set_precio(float p);       // Establece el precio del boleto
    void set_boletos(int b);        // Establece el numero de boletos comprados

    // Metodo para calcular el precio total (precio * boletos)
    void calcular_precio_total();

    // Muestra la informacion final del cine, incluyendo los boletos y el precio total
    void info_final();
};

// Implementacion de la clase Cine

// Constructor por defecto: establece los valores predeterminados para precio y boletos
Cine::Cine(Funciones f) : func(f) {
    precio = 70;    // Precio por defecto del boleto
    boletos = 0;    // Numero de boletos por defecto es 0
}

// Constructor con parametros: permite especificar los valores de precio y boletos
Cine::Cine(Funciones f, float p, int b) : func(f), precio(p), boletos(b) {}

// Metodos getter (accesores)

// Devuelve la funcion asociada a este cine
Funciones Cine::get_func() { 
    return func; 
}

// Devuelve el precio del boleto
float Cine::get_precio() { 
    return precio; 
}

// Devuelve el numero de boletos
int Cine::get_boletos() {
    return boletos; 
}

// Metodos setter (mutadores)

// Establece la funcion asociada a este cine
void Cine::set_func(Funciones f) {
    func = f;
}

// Establece el precio del boleto
void Cine::set_precio(float p) { 
    precio = p; 
}

// Establece el numero de boletos comprados
void Cine::set_boletos(int b) {
    boletos = b; 
}

// Metodo para calcular el precio total (precio * boletos)
void Cine::calcular_precio_total() {
    total = boletos * precio;   // Calcula el total multiplicando los boletos por el precio
    std::cout << "El precio total es: " << total << std::endl; // Muestra el total en consola
}

// Muestra la informacion final del cine, incluyendo boletos, precio y total
void Cine::info_final() {
    std::cout << "Boletos: " << boletos
              << ", Precio: " << precio
              << ", Total: " << total << std::endl;   // Muestra los detalles de la compra
    func.display_infopeli();  // Muestra los detalles de la funcion asociada al cine
}

// Clase derivada de Cine: Esfera (un tipo de cine que tiene boletos VIP)
class Esfera : public Cine {
private:
    int bole;        // Cantidad de boletos VIP
    float precio_vip; // Precio VIP por boleto
    float vip_total; // Total VIP (boletos VIP * precio VIP)

public:
    // Constructor con parametros: inicializa la clase base (Cine) con precio 150 y boletos
    Esfera(Funciones f, int b)
        : Cine(f, 150, b), bole(b), precio_vip(150), vip_total(0) {}

    // Metodo para calcular el precio total VIP 
    void precio_viptotal();
};

// Implementacion del metodo precio_viptotal para Esfera
void Esfera::precio_viptotal() {
    vip_total = bole * precio_vip;   // Calcula el total VIP
    std::cout << "Precio total VIP (Esfera): " << vip_total << std::endl; // Muestra el total VIP
}

// Clase derivada de Cine: Antea )
class Antea : public Cine {
private:
    int bole;        // Cantidad de boletos VIP
    float precio_vip; // Precio VIP por boleto
    float vip_total; // Total VIP

public:
    // Constructor con parametros: 
    Antea(Funciones f, int b)
        : Cine(f, 200, b), bole(b), precio_vip(200), vip_total(0) {}

    // Metodo para calcular el precio total VIP (boletos VIP * precio VIP)
    void precio_viptotal();
};

// Implementacion del metodo precio_viptotal para Antea
void Antea::precio_viptotal() {
    vip_total = bole * precio_vip;   // Calcula el total VIP
    std::cout << "Precio total VIP (Antea): " << vip_total << std::endl; // Muestra el total VIP
}

// Clase derivada de Cine: Victoria (otro tipo de cine con boletos VIP)
class Victoria : public Cine {
private:
    int bole;        // Cantidad de boletos VIP
    float precio_vip; // Precio VIP por boleto
    float vip_total; // Total VIP

public:
    // Constructor con parametros: inicializa la clase base (Cine) con precio 100 y boletos
    Victoria(Funciones f, int b)
        : Cine(f, 100, b), bole(b), precio_vip(100), vip_total(0) {}

    // Metodo para calcular el precio total VIP (boletos VIP * precio VIP)
    void precio_viptotal();
};

// Implementacion del metodo precio_viptotal para Victoria
void Victoria::precio_viptotal() {
    vip_total = bole * precio_vip;   // Calcula el total VIP
    std::cout << "Precio total VIP (Victoria): " << vip_total << std::endl; // Muestra el total VIP
}

#endif // CODIGO_PROYECTO_H_
