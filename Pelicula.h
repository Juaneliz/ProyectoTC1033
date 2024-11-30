#ifndef PELICULA_H_
#define PELICULA_H_

#include <iostream>
#include <string>

using namespace std;

class Pelicula {
private:
    string nombre;           // Nombre de la pelicula
    string genero;           // Género de la pelicula
    int duracion;            // Duracion de la pelicula en minutos
    int anio;                 // Anio de estreno de la pelicula
    string actor_princ;      // Actor principal de la pelicula
    string director;         // Director de la pelicula

public:
    // Constructor por defecto
    Pelicula();
    
    // Constructor con parametros
    Pelicula(string n, string g, int d, int k, string ap, string di) 
        : nombre(n), genero(g), duracion(d), anio(k), actor_princ(ap), director(di) {}

    // Metodos getter (accesores)
    string get_nombre();        // Regresa el nombre de la pelicula
    string get_genero();        // Regresa el genero de la pelicula
    int get_duracion();         // Regresa la duracion de la pelicula
    int get_anio();              // Regresa el anio de estreno
    string get_actor_princ();   // Regresa el actor principal
    string get_director();      // Regresa el director de la pelicula

    // Metodos setter (mutadores)
    void set_nombre(string);    // Establece el nombre de la pelicula
    void set_genero(string);    // Establece el genero de la pelicula
    void set_duracion(int);     // Establece la duracion de la pelicula
    void set_anio(int);          // Establece el anio de estreno
    void set_actor_princ(string); // Establece el actor principal
    void set_director(string);  // Establece el director de la pelicula

    // Metodo para mostrar toda la informacion de la pelicula
    string display_info();      // Regresa un string con toda la informacion de la pelicula
};

// Implementacion de los metodos

// Constructor por defecto
Pelicula::Pelicula() {
    nombre = "";
    genero = "";
    duracion = 0;
    anio = 0;
    actor_princ = "";
    director = "";
}

// Metodos getter (accesores)
string Pelicula::get_nombre() {
    return nombre;  // Retorna el nombre de la pelicula
}

string Pelicula::get_genero() {
    return genero;  // Retorna el genero de la pelicula
}

int Pelicula::get_duracion() {
    return duracion;  // Retorna la duracion de la pelicula en minutos
}

int Pelicula::get_anio() {
    return anio;  // Retorna el anio de estreno de la pelicula
}

string Pelicula::get_actor_princ() {
    return actor_princ;  // Retorna el nombre del actor principal
}

string Pelicula::get_director() {
    return director;  // Retorna el nombre del director de la pelicula
}

// Metodos setter (mutadores)
void Pelicula::set_nombre(string n) {
    nombre = n;  // Establece el nombre de la pelicula
}

void Pelicula::set_genero(string g) {
    genero = g;  // Establece el genero de la pelicula
}

void Pelicula::set_duracion(int d) {
    duracion = d;  // Establece la duracion de la pelicula
}

void Pelicula::set_anio(int k) {
    anio = k;  // Establece el anio de estreno
}

void Pelicula::set_actor_princ(string ap) {
    actor_princ = ap;  // Establece el nombre del actor principal
}

void Pelicula::set_director(string di) {
    director = di;  // Establece el nombre del director
}

// Metodo para mostrar toda la informacion de la pelicula
string Pelicula::display_info() {
    // Retorna un string concatenado con toda la informacion de la pelicula
    return "Informacion de pelicula: " + nombre + " " +
           "Genero: " + genero + " " +
           "Duracion: " + std::to_string(duracion) + " " +
           "Anioo: " + std::to_string(anio) + " " +
           "Actor principal: " + actor_princ + " " +
           "Director: " + director;
}

#endif
