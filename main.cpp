#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

#include "funciones.h"

int main(){
    //El system lo uso para el cambio de color en el programa.
    system("color c0");
    SetConsoleTitle("CLUTCH");
    int opcionElegida;
    char opcionSalir;
    string nombresEstadistica[50];
    int puntosEstadistica[50], nombreJugador1[50], nombreJugador2[50];
        cout << endl<<endl;
        cout << "   .............................................."<<endl;
        cout << "   ..####..##......##...##..######..####..##..##."<<endl;
        cout << "   .##.....##......##...##....##...##.....##..##."<<endl;
        cout << "   .##.....##......##...##....##...##.....######."<<endl;
        cout << "   .##.....##......##...##....##...##.....##..##."<<endl;
        cout << "   ..####..######..#######....##....####..##..##."<<endl;
        cout << "   .............................................."<<endl;
        cout <<endl<<endl;
        cout << "  --- BIENVENIDO A CLUTCH ---" << endl;
        cout << " --------------------------" << endl;
        cout <<  "  1- JUGAR" << endl;;
        cout <<  "  2- ESTADISTICAS" << endl;
        cout <<  "  3- CREDITOS" << endl;
        cout << " ---------------------------" << endl;
        cout <<  "  0- SALIR" << endl;
        cout << endl;
        cout << " ELIJA UNA OPCION: " ;
        cin >> opcionElegida;
        switch(opcionElegida){
            case 1: menuJugar(nombresEstadistica, puntosEstadistica);
            break;
            case 2: menuEstadisticas(nombresEstadistica, puntosEstadistica);
            break;
            case 3: menuCreditos();
            break;
            case 0:
                cout << "¿ESTA SEGURO DE QUE DESEA SALIR DEL JUEGO? S/N: " << endl;
                cin >> opcionSalir;
                if(opcionSalir=='s'||opcionSalir=='S'){
                    cout << "¡CHAU, NOS VEMOS LA PROXIMA!" << endl;
                }
                else{
                    if(opcionSalir=='n'||opcionSalir=='N'){

                    }
                    else{
                        cout << "OPCION EQUIVOCADA, ESCOJA ENTRE S/N." << endl;
                    }
                }
            default:
                    cout << " --- BIENVENIDO A CLUTCH ---" << endl;
                    cout << "OPCION EQUIVOCADA." << endl;
        }

return 0;
}
