#include <iostream>
using namespace std;

#include "funciones.h"

//REGISTRAR JUGADORES
void registrarJugadores(){
    string nombreJugador1, nombreJugador2;
    cout << "CLUTCH" << endl;
    cout << "-------------------------------------" << endl;
    cout << "ANTES DE COMENZAR, INGRESE EL NOMBRE DE CADA JUGADOR." << endl;
    cout << "NOMBRE DE JUGADOR 1: " << endl;
    cin >> nombreJugador1;
    cout << "NOMBRE DE JUGADOR 2:" << endl;
    cin >> nombreJugador2;
    cout << endl;
    cout << "-------------------------------------" << endl;
}

//MENU DE JUEGO
void menuJugar(string nombresEstadistica[], int puntosEstadistica[]){
    registrarJugadores();
    system("cls");
    cout << "CLUTCH" << endl;
    cout << "-------------------------------------" << endl;
    cout << "QUE COMIENCE EL JUEGO..." << endl;
    cout << "BIENVENIDOS " << nombreJugador1[0] << " y " << nombreJugador2[0] << endl;
    cout << "-------------------------------------" << endl;
    desarrolloJuego(nombreJugador1[], nombreJugador2[], nombresEstadistica, puntosEstadistica);
}

//MENU DE ESTADISTICAS
void menuEstadisticas(string nombresEstadistica[], int puntosEstadistica[]){
    cout << "CLUTCH" << endl;
    cout << "-------------------------------------" << endl;
    void ordenamientoVectorMaMe(vecGanador[], vecPDV[]);
    cout << "NOMBRE DE JUGADOR " << " PDV " << endl;
    for(int i=0;i<100;i++){
        cout << " " << vecGanador[i] << " " << vecPDV[] << "\t" << endl;
    }
    cout << "-------------------------------------" << endl;

}

//MENU DE CREDITOS
void menuCreditos(){
    cout << endl<<endl;
    cout << "   .............................................."<<endl;
    cout << "   ..####..##......##...##..######..####..##..##."<<endl;
    cout << "   .##.....##......##...##....##...##.....##..##."<<endl;
    cout << "   .##.....##......##...##....##...##.....######."<<endl;
    cout << "   .##.....##......##...##....##...##.....##..##."<<endl;
    cout << "   ..####..######..#######....##....####..##..##."<<endl;
    cout << "   .............................................."<<endl;
    cout <<endl<<endl;
    cout << " INTEGRANTE: AGUILERA, ALEJANDRO EZEQUIEL" << endl;
    cout << " NUMERO DE LEGAJO: 28707" << endl;
    cout << " GRUPO 13: EL POLLUELO SOLITARIO" < endl;
}

//MENU DE DESARROLLO DE JUEGO

void desarrolloJuego(){
    int contRondas=0, turno;
    int CARTAS=20;
    bool finJuego=0, BT=0;
    string vCartas[CARTAS] = {
        "10 corazones",
        "10 pica",
        "10 diamante",
        "10 trebol",
        "J corazones",
        "J pica",
        "J diamante",
        "J trebol",
        "Q corazones",
        "Q pica",
        "Q diamante",
        "Q trebol",
        "K corazones",
        "K pica",
        "K diamante",
        "K trebol",
        "A corazones",
        "A pica",
        "A diamante",
        "A trebol"
    }
    cout << "CLUTCH" << endl;
    cout << "-------------------------------------" << endl;
    while(finJuego!=true){
    cout << "Ronda #" << contRondas << endl;
    cout << nombreJugador1 << " vs " << nombreJugador2 << endl;
    if(BT==0){
       cout << "TURNO DE " << nombreJugador1 << endl;
       turno = 1;
       BT = 1;
    }
    else{
        if(BT==1){
            cout << "TURNO DE " << nombreJugador2 << endl;
            turno = 2;
            BT = 0;
        }
    }
    cout << " ------------------------------------------------------------------------------------------------------------------ "
    cout << "|                                                                                                                  |"
    cout << "|        "<<nombreJugador1<<"                                                                                      |"
    cout << "|                                                                                                                  |"
    cout << "|   " " --------------- "  " --------------- "  " --------------- "  " --------------- "   " --------------- " "   |"
    cout << "|   " "|               |"  "|               |"  "|               |"  "|               |"   "|               |" "   |"
    cout << "|   " "|               |"  "|               |"  "|               |"  "|               |"   "|               |" "   |"
    cout << "|   " "|               |"  "|               |"  "|               |"  "|               |"   "|               |" "   |"
    cout << "|   " "| "<<VCJ1[0]<<" |"  "| "<<VCJ1[1]<<" |"  "| "<<VCJ1[2]<<" |"  "| "<<VCJ1[3]<<" |"   "| "<<VCJ1[4]<<" |" "   |"
    cout << "|   " "|               |"  "|               |"  "|               |"  "|               |"   "|               |" "   |"
    cout << "|   " "|               |"  "|               |"  "|               |"  "|               |"   "|               |" "   |"
    cout << "|   " "|               |"  "|               |"  "|               |"  "|               |"   "|               |" "   |"
    cout << "|   " "|               |"  "|               |"  "|               |"  "|               |"   "|               |" "   |"
    cout << "|   " " --------------- "  " --------------- "  " --------------- "  " --------------- "   " --------------- " "   |"
    cout << "|                                                                                                                  |"
    cout << "|        "<<nombreJugador1<<"                                                                                      |"
    cout << "|                                                                                                                  |"
    cout << "|   " " --------------- "  " --------------- "  " --------------- "  " --------------- "   " --------------- " "   |"
    cout << "|   " "|               |"  "|               |"  "|               |"  "|               |"   "|               |" "   |"
    cout << "|   " "|               |"  "|               |"  "|               |"  "|               |"   "|               |" "   |"
    cout << "|   " "|               |"  "|               |"  "|               |"  "|               |"   "|               |" "   |"
    cout << "|   " "| "<<VCJ2[0]<<" |"  "| "<<VCJ2<<[1]" |"  "| "<<VCJ2[2]<<" |"  "| "<<VCJ2[3]<<" |"   "| "<<VCJ2[4]<<" |" "   |"
    cout << "|   " "|               |"  "|               |"  "|               |"  "|               |"   "|               |" "   |"
    cout << "|   " "|               |"  "|               |"  "|               |"  "|               |"   "|               |" "   |"
    cout << "|   " "|               |"  "|               |"  "|               |"  "|               |"   "|               |" "   |"
    cout << "|   " "|               |"  "|               |"  "|               |"  "|               |"   "|               |" "   |"
    cout << "|   " " --------------- "  " --------------- "  " --------------- "  " --------------- "   " --------------- " "   |"
    cout << " ------------------------------------------------------------------------------------------------------------------ " << endl;
    dado = tirarDado();
    if(dado==1){

    }

    }
}

//TIRAR DADOS ALEATORIAMENTE

void tirarDado(){
    int i;
    int v[5];
    srand(time(NULL));
    for( i=0; i<5; i++ ){
        v[i]=(rand()%6)+1;
    }
}

//REPARTIR CARTAS ALEATORIAMENTE

void repartirCartas(){
    int i;
    int vCartas[CARTAS];
      for(int x=0;x<4;x++){
        srand(time(NULL));
        for( i=0; i<5; i++ ){
            v[i]=(rand()%20)+1;
        }
    }
}

//ACCIONES SEGUN NUMERO DEL DADO

accionesDado(int dado, int turno){
    int num;
    if(turno==1){
        if(dado==1){
            cout << "ELIGE UNA CARTA DE TU CORRAL PARA INTERCAMBIAR POR UNA DEL MAZO." << endl;
            cin >> num;
            aux = VCJ2[num];
            VCJ2 [num] = mazo;
            mazo = aux;
        }
    }
}

//LEVANTAR CARTA DEL MAZO ALEATORIA

void levantarDelMazo(){
    int i;
    int mazo[15];
    srand(time(NULL));
    for( i=0; i<1; i++ ){
        v[i]=(rand()%10)+1;
    }
}

