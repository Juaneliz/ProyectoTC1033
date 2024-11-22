#include <iostream>
#include <string>
#include "Codigo_proyecto.h"
#include "Pelicula.h"
#include "Funciones.h"
using namespace std;

int main(){
    Pelicula Soncomoninos("comedia",120,2015,"Adam Sandler","Zack Snyder");
    cout<<Soncomoninos.get_genero()<<endl;
    cout<<Soncomoninos.display_info()<<endl;

    Funciones funcion2(Soncomoninos,"pg-13","ingles",8,"subtitulada en espaniol");
    funcion2.display_infopeli();

    Cine Antea(funcion2,175.4,5);
    Antea.calcular_precio_total();
    Antea.info_final();

    Esfera esfera(funcion2,4);
    esfera.precio_viptotal();

    return 0;
}