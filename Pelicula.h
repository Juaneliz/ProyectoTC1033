#ifndef PELICULA_H_
#define PELICULA_H_

#include <iostream>
#include <string>

using namespace std;

class Pelicula {
private:
    string nombre;           // Nombre de la película
    string genero;           // Género de la película
    int duracion;            // Duración de la película en minutos
    int anio;                 // Año de estreno de la película
    string actor_princ;      // Actor principal de la película
    string director;         // Director de la película

public:
    // Constructor por defecto
    Pelicula();
    
    // Constructor con parámetros
    Pelicula(string n, string g, int d, int k, string ap, string di) 
        : nombre(n), genero(g), duracion(d), anio(k), actor_princ(ap), director(di) {}

    // Métodos getter (accesores)
    string get_nombre();        // Regresa el nombre de la película
    string get_genero();        // Regresa el género de la película
    int get_duracion();         // Regresa la duración de la película
    int get_anio();              // Regresa el año de estreno
    string get_actor_princ();   // Regresa el actor principal
    string get_director();      // Regresa el director de la película

    // Métodos setter (mutadores)
    void set_nombre(string);    // Establece el nombre de la película
    void set_genero(string);    // Establece el género de la película
    void set_duracion(int);     // Establece la duración de la película
    void set_anio(int);          // Establece el año de estreno
    void set_actor_princ(string); // Establece el actor principal
    void set_director(string);  // Establece el director de la película

    // Método para mostrar toda la información de la película
    string display_info();      // Regresa un string con toda la información de la película
};

// Implementación de los métodos

// Constructor por defecto
Pelicula::Pelicula() {
    nombre = "";
    genero = "";
    duracion = 0;
    anio = 0;
    actor_princ = "";
    director = "";
}

// Métodos getter (accesores)
string Pelicula::get_nombre() {
    return nombre;  // Retorna el nombre de la película
}

string Pelicula::get_genero() {
    return genero;  // Retorna el género de la película
}

int Pelicula::get_duracion() {
    return duracion;  // Retorna la duración de la película en minutos
}

int Pelicula::get_anio() {
    return anio;  // Retorna el año de estreno de la película
}

string Pelicula::get_actor_princ() {
    return actor_princ;  // Retorna el nombre del actor principal
}

string Pelicula::get_director() {
    return director;  // Retorna el nombre del director de la película
}

// Métodos setter (mutadores)
void Pelicula::set_nombre(string n) {
    nombre = n;  // Establece el nombre de la película
}

void Pelicula::set_genero(string g) {
    genero = g;  // Establece el género de la película
}

void Pelicula::set_duracion(int d) {
    duracion = d;  // Establece la duración de la película
}

void Pelicula::set_anio(int k) {
    anio = k;  // Establece el año de estreno
}

void Pelicula::set_actor_princ(string ap) {
    actor_princ = ap;  // Establece el nombre del actor principal
}

void Pelicula::set_director(string di) {
    director = di;  // Establece el nombre del director
}

// Método para mostrar toda la información de la película
string Pelicula::display_info() {
    // Retorna un string concatenado con toda la información de la película
    return "Información de película: " + nombre + " " +
           "Género: " + genero + " " +
           "Duración: " + std::to_string(duracion) + " " +
           "Año: " + std::to_string(anio) + " " +
           "Actor principal: " + actor_princ + " " +
           "Director: " + director;
}

#endif
