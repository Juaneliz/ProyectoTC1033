#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#include <iostream>
#include <string>
#include "Pelicula.h"

class Funciones : public Pelicula{
private:
    Pelicula pelicula;
    std::string clasificacion;
    std::string idioma;
    int horario;
    std::string subtitulos;

public:
    Funciones(Pelicula& p);
    Funciones(Pelicula& p, std::string cl, std::string i, int h, std::string s);

    Pelicula& get_pelicula();
    std::string get_idioma();
    int get_horario();
    std::string get_subtitulos();
    std::string get_clasificacion();

    void set_pelicula(Pelicula& p);
    void set_idioma(std::string);
    void set_horario(int);
    void set_subtitulos(std::string);
    void set_clasificacion(std::string);
    void display_infopeli();
};

// Implementación
Funciones::Funciones(Pelicula& p) : pelicula(p), clasificacion(""), idioma(""), horario(0), subtitulos("español") {}

Funciones::Funciones(Pelicula& p, std::string cl, std::string i, int h, std::string s)
    : pelicula(p), clasificacion(cl), idioma(i), horario(h), subtitulos(s) {}

Pelicula& Funciones::get_pelicula() { return pelicula; }
std::string Funciones::get_idioma() { return idioma; }
int Funciones::get_horario() { return horario; }
std::string Funciones::get_subtitulos() { return subtitulos; }
std::string Funciones::get_clasificacion() { return clasificacion; }

void Funciones::set_idioma(std::string i) { idioma = i; }
void Funciones::set_horario(int h) { horario = h; }
void Funciones::set_subtitulos(std::string s) { subtitulos = s; }
void Funciones::set_clasificacion(std::string cl) { clasificacion = cl; }

void Funciones::display_infopeli() {
    std::cout << "Horario: " << horario
              << ", Idioma: " << idioma
              << ", Subtítulos: " << subtitulos
              << ", Clasificación: " << clasificacion
              << std::endl;
    pelicula.display_info();
}

#endif // FUNCIONES_H_
