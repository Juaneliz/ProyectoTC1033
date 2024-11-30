#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#include <iostream>
#include <string>
#include "Pelicula.h"

class Funciones : public Pelicula {
private:
    Pelicula pelicula;         // Instancia de la clase Pelicula asociada a esta funcion
    std::string clasificacion; // Clasificacion de la pelicula 
    std::string idioma;       // Idioma en el que se proyecta la pelicula
    int horario;              // Horario de la funcion en formato 24 horas (ej. 1800 para 18:00)
    std::string subtitulos;   // Informacion sobre los subtitulos

public:
    // Constructor por defecto, establece valores por defecto
    Funciones(Pelicula& p);

    // Constructor con parametros, establece valores especificos
    Funciones(Pelicula& p, std::string cl, std::string i, int h, std::string s);

    // Metodos getter (accesores)
    Pelicula& get_pelicula();         // Devuelve la referencia al objeto Pelicula asociado
    std::string get_idioma();         // Devuelve el idioma de la funcion
    int get_horario();                // Devuelve el horario de la funcion
    std::string get_subtitulos();     // Devuelve el tipo de subtitulos
    std::string get_clasificacion();  // Devuelve la clasificacion de la pelicula

    // Metodos setter (mutadores)
    void set_pelicula(Pelicula& p);   // Establece el objeto Pelicula asociado a esta funcion
    void set_idioma(std::string i);   // Establece el idioma de la funcion
    void set_horario(int h);          // Establece el horario de la funcion
    void set_subtitulos(std::string s); // Establece la informacion de subtitulos
    void set_clasificacion(std::string cl); // Establece la clasificacion de la pelicula

    // Metodo para mostrar la informacion completa de la funcion y la pelicula
    void display_infopeli();          // Muestra toda la informacion de la funcion y la pelicula
};

// Implementacion de los metodos

// Constructor por defecto, inicializa con valores predeterminados
Funciones::Funciones(Pelicula& p)
    : pelicula(p), clasificacion(""), idioma(""), horario(0), subtitulos("espaniol") {}

// Constructor con parametros, establece todos los atributos
Funciones::Funciones(Pelicula& p, std::string cl, std::string i, int h, std::string s)
    : pelicula(p), clasificacion(cl), idioma(i), horario(h), subtitulos(s) {}

// Metodos getter (accesores)

// Devuelve la referencia al objeto Pelicula asociado a esta funcion
Pelicula& Funciones::get_pelicula() { 
    return pelicula; 
}

// Devuelve el idioma de la funcion 
std::string Funciones::get_idioma() { 
    return idioma; 
}

// Devuelve el horario de la funcion en formato de 24 horas (por ejemplo, 1800 para las 18:00)
int Funciones::get_horario() { 
    return horario; 
}

// Devuelve la informacion sobre los subtitulos
std::string Funciones::get_subtitulos() { 
    return subtitulos; 
}

// Devuelve la clasificacion de la pelicula
std::string Funciones::get_clasificacion() { 
    return clasificacion; 
}

// Metodos setter (mutadores)

// Establece el objeto Pelicula asociado a esta funcion
void Funciones::set_pelicula(Pelicula& p) { 
    pelicula = p; 
}

// Establece el idioma de la funcion (por ejemplo, "espaniol", "ingles")
void Funciones::set_idioma(std::string i) { 
    idioma = i; 
}

// Establece el horario de la funcion en formato 24 horas (ej. 1800 para las 18:00)
void Funciones::set_horario(int h) { 
    horario = h; 
}

// Establece la informacion de subtitulos (por ejemplo, "espaniol", "ninguno")
void Funciones::set_subtitulos(std::string s) { 
    subtitulos = s; 
}

// Establece la clasificacion de la pelicula (por ejemplo, "PG", "R")
void Funciones::set_clasificacion(std::string cl) { 
    clasificacion = cl; 
}

// Muestra toda la informacion de la funcion y la pelicula asociada
void Funciones::display_infopeli() {
    // Muestra los detalles de la funcion
    std::cout << "Horario: " << horario
              << ", Idioma: " << idioma
              << ", Subtitulos: " << subtitulos
              << ", Clasificacion: " << clasificacion
              << std::endl;

    // Llama a display_info() de la clase Pelicula para mostrar la informacion de la pelicula asociada
    pelicula.display_info();
}

#endif // FUNCIONES_H_
