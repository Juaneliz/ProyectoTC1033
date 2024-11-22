#ifndef PELICULA_H_
#define PELICULA_H_

#include <iostream>
#include<string>

using namespace std;
class Pelicula{
    private:
    string genero;
    int duracion;
    int año;
    string actor_princ;
    string director;
    public:
    Pelicula();
    Pelicula(string g, int d, int k,string ap, string di): genero(g), duracion(d) ,año(k) ,actor_princ(ap), director(di){};   
    string get_genero();
    int get_duracion();
    int get_año();
    string get_actor_princ();
    string get_director();
    string display_info();

    void set_genero(string);
    void set_duracion(int);
    void set_año(int);
    void set_actor_princ(string);
    void set_director(string);
};

Pelicula::Pelicula(){
    genero="";
    duracion=0;
    año=0;
    actor_princ="";
    director="";
}
string Pelicula::get_genero(){
    return genero;
}
int Pelicula:: get_duracion(){
    return duracion;
}
int Pelicula::get_año(){
    return año;
}
string Pelicula::get_actor_princ(){
    return actor_princ;
}
string Pelicula::get_director(){
    return director;
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
void Pelicula::set_actor_princ(string ap){
    actor_princ=ap;
}
void Pelicula::set_director(string di){
    director=di;
}
string Pelicula::display_info(){
return "Informacion de pelicula:"+genero+"Duracion"+
    std::to_string(duracion)+"Anio:"+std::to_string(año)+
    actor_princ+"Director:"+director;

}
#endif