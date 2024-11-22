#ifndef CODIGO_PROYECTO_H_
#define CODIGO_PROYECTO_H_

#include <iostream>
#include <string>
#include "Funciones.h"

class Cine {
private:
    Funciones func; // Composición: Funciones como miembro
    float precio;
    int boletos;
    float total; // Cambiado a float para evitar problemas con la precisión

public:
    Cine(Funciones f); // Constructor por defecto
    Cine(Funciones f, float p, int b); // Constructor con parámetros

    Funciones get_func();
    float get_precio();
    int get_boletos();
    
    void set_func(Funciones f);
    void set_precio(float p);
    void set_boletos(int b);

    void calcular_precio_total();
    void info_final();
};

// Implementación
Cine::Cine(Funciones f) : func(f), precio(0), boletos(0), total(0) {}

Cine::Cine(Funciones f, float p, int b) : func(f), precio(p), boletos(b){}

Funciones Cine::get_func() { 
    return func; }
float Cine::get_precio() { 
    return precio; }
int Cine::get_boletos() {
     return boletos; }

void Cine::set_func(Funciones f) {
     func = f; }
void Cine::set_precio(float p) { 
    precio = p; }
void Cine::set_boletos(int b) {
     boletos = b; }

void Cine::calcular_precio_total() {
    total = boletos * precio;
    std::cout << "El precio total es: " << total << std::endl;
}

void Cine::info_final() {
    std::cout << "Boletos: " << boletos
              << ", Precio: " << precio
              << ", Total: " << total << std::endl;
    func.display_infopeli();
}

class Esfera : public Cine {
private:
    int bole;        // Cantidad de boletos VIP
    float precio_vip; // Precio VIP por boleto
    float vip_total; // Total VIP

public:
    // Constructor con parámetros
    Esfera(Funciones f, int b)
        : Cine(f, 150, b), bole(b), precio_vip(150), vip_total(0) {}

    void precio_viptotal();
};

// Métodos
void Esfera::precio_viptotal() {
    vip_total = bole * precio_vip;
    std::cout << "Precio total VIP (Esfera): " << vip_total << std::endl;
}

class Antea : public Cine {
private:
    int bole;        // Cantidad de boletos VIP
    float precio_vip; // Precio VIP por boleto
    float vip_total; // Total VIP

public:
    // Constructor con parámetros
    Antea(Funciones f, int b)
        : Cine(f, 200, b), bole(b), precio_vip(200), vip_total(0) {}

    void precio_viptotal();
};

// Métodos
void Antea::precio_viptotal() {
    vip_total = bole * precio_vip;
    std::cout << "Precio total VIP (Antea): " << vip_total << std::endl;
}

class Victoria : public Cine {
private:
    int bole;        // Cantidad de boletos VIP
    float precio_vip; // Precio VIP por boleto
    float vip_total; // Total VIP

public:
    // Constructor con parámetros
    Victoria(Funciones f, int b)
        : Cine(f, 100, b), bole(b), precio_vip(100), vip_total(0) {}

    void precio_viptotal();
};

// Métodos
void Victoria::precio_viptotal() {
    vip_total = bole * precio_vip;
    std::cout << "Precio total VIP (Victoria): " << vip_total << std::endl;
}

#endif // CINE_H_
