#include <iostream>
#include <string>
/* Iniciamos abriendo las bibliotecas
iniciales para que no tengamos un error de sintaxis a
lo largo del proyecto*/

class Pelicula{
    private:
    std::string genero;
    int duracion;
    int año;
    public:
    Pelicula();
    Pelicula(std::string g, int d, int k): genero(g), duracion(d),año(k){};   
    std::string get_genero();
    int get_duracion();
    int get_año();

    void set_genero(std::string);
    void set_duracion(int);
    void set_año(int);
};

Pelicula::Pelicula(){
    genero="";
    duracion=0;
    año=0;
}
std::string Pelicula::get_genero(){
    return genero;
}
int Pelicula:: get_duracion(){
    return duracion;
}
int Pelicula::get_año(){
    return año;
}
 void Pelicula::set_genero(std::string g){
    genero=g;
}
void Pelicula:: set_duracion(int d){
    duracion=d;
}
void Pelicula::set_año(int k){
    año=k;
}

class Cine{
    private:
    std:: string lugar;
    float precio;
    int boletos;
    public:
    Cine();
    Cine(std:: string l, float p, int b): lugar(l), precio(p),boletos(b){};   
    std::string get_lugar();
    float get_precio();
    int get_boletos();

    void set_lugar(std::string);
    void set_precio(float);
    void set_boletos(int);
};


Cine::Cine(){
    lugar="";
    precio=0;
    boletos=0;
}
std::string Cine::get_lugar(){
    return lugar;
}
float Cine::get_precio(){
    return precio;
}
int Cine::get_boletos(){
    return boletos;
}
 void Cine::set_lugar(std::string l){
    lugar=l;
}
void Cine:: set_precio(float p){
    precio=p;
}
void Cine::set_boletos(int b){
    boletos=b;
}
class Funciones{
    private:
    std::string pelicula;
    std::string actor_princ;
    int horario;
    public:
    Funciones();
    Funciones(std:: string pe, std::string ap, int a): pelicula(pe), actor_princ(ap),horario(a){};   
    std::string get_pelicula();
    std::string get_actor_princ();
    int get_horario();

    void set_pelicula(std::string);
    void set_actor_princ(std::string);
    void set_horario(int);
};


Funciones::Funciones(){
    pelicula="";
    actor_princ="";
    horario=0;
}
std::string Funciones::get_pelicula(){
    return pelicula;
}
std::string Funciones::get_actor_princ(){
    return actor_princ;
}
int Funciones::get_horario(){
    return horario;
}
 void Funciones::set_pelicula(std::string pe){
    pelicula=pe;
}
void Funciones:: set_actor_princ(std::string ap){
    actor_princ=ap;
}
void Funciones::set_horario(int a){
    horario=a;
}
