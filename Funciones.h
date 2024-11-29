#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#include <iostream>
#include <string>
#include "Pelicula.h"

class Funciones : public Pelicula {
private:
    Pelicula pelicula;         // Instancia de la clase Pelicula asociada a esta función
    std::string clasificacion; // Clasificación de la película 
    std::string idioma;       // Idioma en el que se proyecta la película
    int horario;              // Horario de la función en formato 24 horas (ej. 1800 para 18:00)
    std::string subtitulos;   // Información sobre los subtítulos

public:
    // Constructor por defecto, establece valores por defecto
    Funciones(Pelicula& p);

    // Constructor con parámetros, establece valores específicos
    Funciones(Pelicula& p, std::string cl, std::string i, int h, std::string s);

    // Métodos getter (accesores)
    Pelicula& get_pelicula();         // Devuelve la referencia al objeto Pelicula asociado
    std::string get_idioma();         // Devuelve el idioma de la función
    int get_horario();                // Devuelve el horario de la función
    std::string get_subtitulos();     // Devuelve el tipo de subtítulos
    std::string get_clasificacion();  // Devuelve la clasificación de la película

    // Métodos setter (mutadores)
    void set_pelicula(Pelicula& p);   // Establece el objeto Pelicula asociado a esta función
    void set_idioma(std::string i);   // Establece el idioma de la función
    void set_horario(int h);          // Establece el horario de la función
    void set_subtitulos(std::string s); // Establece la información de subtítulos
    void set_clasificacion(std::string cl); // Establece la clasificación de la película

    // Método para mostrar la información completa de la función y la película
    void display_infopeli();          // Muestra toda la información de la función y la película
};

// Implementación de los métodos

// Constructor por defecto, inicializa con valores predeterminados
Funciones::Funciones(Pelicula& p)
    : pelicula(p), clasificacion(""), idioma(""), horario(0), subtitulos("español") {}

// Constructor con parámetros, establece todos los atributos
Funciones::Funciones(Pelicula& p, std::string cl, std::string i, int h, std::string s)
    : pelicula(p), clasificacion(cl), idioma(i), horario(h), subtitulos(s) {}

// Métodos getter (accesores)

// Devuelve la referencia al objeto Pelicula asociado a esta función
Pelicula& Funciones::get_pelicula() { 
    return pelicula; 
}

// Devuelve el idioma de la función 
std::string Funciones::get_idioma() { 
    return idioma; 
}

// Devuelve el horario de la función en formato de 24 horas (por ejemplo, 1800 para las 18:00)
int Funciones::get_horario() { 
    return horario; 
}

// Devuelve la información sobre los subtítulos
std::string Funciones::get_subtitulos() { 
    return subtitulos; 
}

// Devuelve la clasificación de la película
std::string Funciones::get_clasificacion() { 
    return clasificacion; 
}

// Métodos setter (mutadores)

// Establece el objeto Pelicula asociado a esta función
void Funciones::set_pelicula(Pelicula& p) { 
    pelicula = p; 
}

// Establece el idioma de la función (por ejemplo, "español", "inglés")
void Funciones::set_idioma(std::string i) { 
    idioma = i; 
}

// Establece el horario de la función en formato 24 horas (ej. 1800 para las 18:00)
void Funciones::set_horario(int h) { 
    horario = h; 
}

// Establece la información de subtítulos (por ejemplo, "español", "ninguno")
void Funciones::set_subtitulos(std::string s) { 
    subtitulos = s; 
}

// Establece la clasificación de la película (por ejemplo, "PG", "R")
void Funciones::set_clasificacion(std::string cl) { 
    clasificacion = cl; 
}

// Muestra toda la información de la función y la película asociada
void Funciones::display_infopeli() {
    // Muestra los detalles de la función
    std::cout << "Horario: " << horario
              << ", Idioma: " << idioma
              << ", Subtítulos: " << subtitulos
              << ", Clasificación: " << clasificacion
              << std::endl;

    // Llama a display_info() de la clase Pelicula para mostrar la información de la película asociada
    pelicula.display_info();
}

#endif // FUNCIONES_H_
