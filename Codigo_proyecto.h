#include <iostream>
#include <string>
/* Iniciamos abriendo las bibliotecas
iniciales para que no tengamos un error de sintaxis a
lo largo del proyecto*/

class Tipo_pelicula{
    private:
    std::string genero;
    int duracion;
    int horario;
    public:
    Tipo_pelicula();
    Tipo_pelicula(std::string g, int d, int k): genero(g), duracion(d),horario(k){};   
    std::string get_genero();
    int get_duracion();
    int get_horario();

    void set_genero(std::string);
    void set_duracion(int);
    void set_horario(int);
};

Tipo_pelicula::Tipo_pelicula(){
    genero="";
    duracion=0;
    horario=0;
}
std::string Tipo_pelicula::get_genero(){
    return genero;
}
int Tipo_pelicula:: get_duracion(){
    return duracion;
}
int Tipo_pelicula::get_horario(){
    return horario;
}
 void Tipo_pelicula::set_genero(std::string g){
    genero=g;
}
void Tipo_pelicula:: set_duracion(int d){
    duracion=d;
}
void Tipo_pelicula::set_horario(int k){
    horario=k;
}

class Lugar_funcion{
    private:
    std:: string lugar;
    float precio;
    int boletos;
    public:
    Lugar_funcion();
    Lugar_funcion(std:: string l, float p, int b): lugar(l), precio(p),boletos(b){};   
    std::string get_lugar();
    float get_precio();
    int get_boletos();

    void set_lugar(std::string);
    void set_precio(float);
    void set_boletos(int);
};


Lugar_funcion::Lugar_funcion(){
    lugar="";
    precio=0;
    boletos=0;
}
std::string Lugar_funcion::get_lugar(){
    return lugar;
}
float Lugar_funcion::get_precio(){
    return precio;
}
int Lugar_funcion::get_boletos(){
    return boletos;
}
 void Lugar_funcion::set_lugar(std::string l){
    lugar=l;
}
void Lugar_funcion:: set_precio(float p){
    precio=p;
}
void Lugar_funcion::set_boletos(int b){
    boletos=b;
}
class Pelicula{
    private:
    std::string pelicula;
    std::string actor_princ;
    int año;
    public:
    Pelicula();
    Pelicula(std:: string pe, std::string ap, int a): pelicula(pe), actor_princ(ap),año(a){};   
    std::string get_pelicula();
    std::string get_actor_princ();
    int get_año();

    void set_pelicula(std::string);
    void set_actor_princ(std::string);
    void set_año(int);
};


Pelicula::Pelicula(){
    pelicula="";
    actor_princ="";
    año=0;
}
std::string Pelicula::get_pelicula(){
    return pelicula;
}
std::string Pelicula::get_actor_princ(){
    return actor_princ;
}
int Pelicula::get_año(){
    return año;
}
 void Pelicula::set_pelicula(std::string pe){
    pelicula=pe;
}
void Pelicula:: set_actor_princ(std::string ap){
    actor_princ=ap;
}
void Pelicula::set_año(int a){
    año=a;
}
