#include <iostream>
#include <string>
#include "Codigo_proyecto.h"
#include "Pelicula.h"
#include "Funciones.h"
using namespace std;


void catalogo_pelis(){
        cout << "\nMenu:\n";
    cout << "1. Ingresar una Pelicula\n";
    cout << "2. Ingresar funcion de pelicula \n";
    cout << "3. Buscar Cine \n";
    cout << "4. Calcular costos de boletos \n";
    cout << "Selecciona una opcion: \n";
}

int main() {
    int opcion;
    string nombre;
    string genero;
    string actor_princ;
    string director;
    int duracion;
    int año;
    float precio;
    int boletos;
        
    // Crear un objeto de Pelicula fuera del switch, para que esté disponible en todos los case
    Pelicula peli("", "", 0, 0, "", "");  // Inicializamos con valores por defecto
    Funciones funcion1(peli, "", "", 0, ""); // Función inicial vacía
    Cine cine(funcion1,0,0);
    while (true) {
        catalogo_pelis();

        cout << "Escoge el número de la acción que quieres realizar (sin espacios y con número entero): " << endl;
        cin >> opcion;


        if (opcion < 1 || opcion > 5) {
            cout << "Opción errónea, vuelve a intentarlo" << endl;
            return 0;
        }

        switch(opcion){
            case 1: {
                cout << "Da el nombre de la pelicula (sin espacios): ";
                cin >> nombre;
                cout << "Agrega el género (sin espacio): ";
                cin >> genero;
                cout << "Agrega la duración de la pelicula en minutos: ";
                cin >> duracion;
                cout << "Agrega el año de estreno: ";
                cin >> año;
                cout << "Agrega el actor principal (si no lo conoces, pon 'ninguno'): ";
                cin >> actor_princ;
                cout << "Agrega el director (si no lo conoces, pon 'ninguno'): ";
                cin >> director;

                // Creación del objeto Pelicula
                peli = Pelicula(nombre, genero, duracion, año, actor_princ, director);
                cout << "\nPelicula agregada: " << endl;
                cout << peli.display_info() << endl;
                break;
            }
            case 2: {
                if (peli.get_nombre() == "") {
                    cout << "Primero debes agregar una película." << endl;
                    break;
                }
                string clasificacion, idioma, subtitulos;
                int horario;

                cout << "Qué clasificación tiene la película (sin espacios): ";
                cin >> clasificacion;
                cout << "Agrega el idioma (sin espacio): ";
                cin >> idioma;
                cout << "Agrega la hora de la función (en formato 24 horas, ej. 1800 para 18:00): ";
                cin >> horario;
                cout << "Agrega qué idioma tendrá subtítulos (si no hay, pon 'ninguno'): ";
                cin >> subtitulos;

                // Crear una función para esta película
                funcion1 = Funciones(peli, clasificacion, idioma, horario, subtitulos);
                cout << "\nFuncion agregada: " << endl;
                funcion1.display_infopeli();
                break;
            }
            case 3:{
                string nombre;
                cout<<"Que nombre tiene el cine"<<endl;
                cin>>nombre;
                cout<<"Cuantos boletos tiene"<<endl;
                cin>>boletos;
                cout<<"Que precio tienen los boletos"<<endl;
                cin>>precio;
                cout<<"Cine creado"<<nombre<<endl;
                cine= Cine(funcion1,precio,boletos);
                cine.calcular_precio_total();
                cine.info_final();

                break;  
            }
            case 4:{
                int opc_cin;
                int boletos_vip;
                cout<<"Existen tres cines con posibilidad de vip"<<endl;

                cout<<"1 esfera"<<endl;
                cout<<"2 antea"<<endl;
                cout<<"3 victoria"<<endl;
                cout<<"Escoge cine en numero"<<endl;
                cin>>opc_cin;
                if (opc_cin == 1) {
                // Cine Esfera
                cout<<"Cuantos boletos vip vas a querer"<<endl;
                cin>>boletos_vip;
                Esfera esfera(funcion1, boletos_vip);
                esfera.precio_viptotal();  // Calcula y muestra el precio VIP para Esfera
                } 
                else if (opc_cin == 2) {
                    // Cine Antea
                    Antea antea(funcion1, boletos_vip);
                    antea.precio_viptotal();  // Calcula y muestra el precio VIP para Antea
                } 
                else if (opc_cin == 3) {
                    // Cine Victoria
                    Victoria victoria(funcion1, boletos_vip);
                    victoria.precio_viptotal();  // Calcula y muestra el precio VIP para Victoria
                } 
                else {
                    cout << "Opción no válida. Por favor selecciona 1, 2 o 3." << endl;
                }
                break;
         
            }

        }
    }
    return 0;

}
