#include <iostream>
#include <string>
#include "Codigo_proyecto.h"

int main(){
    Pelicula terror("terror",155,2000);
    std::cout<< terror.get_genero()<<std::endl;
    std::cout<< terror.get_duracion()<<std::endl;
    std::cout<< terror.get_año()<<std::endl;

    Pelicula romantica("romantica",120,1800);
    std::cout<<"Pelicula: "<<romantica.get_genero()<<std::endl;
    std::cout<<"Duracion: "<<romantica.get_duracion()<<std::endl;
    std::cout<<"Horario en horas militar: "<<romantica.get_año()<<std::endl;

    Pelicula peli;
    std::cout<< peli.get_genero()<<std::endl;
    std::cout<< peli.get_duracion()<<std::endl;
    std::cout<< peli.get_año()<<std::endl;
    /*Fin de objetos de primera clase

    Inicio objetos segunda clase*/
    Cine Juriquilla("Juriquilla",89.2,3);
    std::cout<<"Lugar: "<<Juriquilla.get_lugar()<<std::endl;
    std::cout<<"Precio: "<<Juriquilla.get_precio()<<std::endl;
    std::cout<<"Boleto: "<<Juriquilla.get_boletos()<<std::endl;
    /* Final de objetos segunda clase
    
    Inicio objetos tercera clase*/
    Funciones Transformers("Transformers","Mark Wahlberg",2016);
    std::cout<<"Pelicula: "<<Transformers.get_pelicula()<<std::endl;
    std::cout<<"Actor: "<<Transformers.get_actor_princ()<<std::endl;
    std::cout<<"año" <<Transformers.get_horario()<<std::endl;





    return 0;
}