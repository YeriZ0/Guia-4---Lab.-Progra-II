#include "OSWindows.h"

#define MARCO '*'

OSWindows::OSWindows(){
    ///strcpy sirve para inicializar miembros de una clase con una cadena de caracteres
    strcpy(_win_titulo, "Microsoft Windows 2016");
    strcpy(_win_area_trabajo, "No hay nada en el area de trabajo.");
    strcpy(_win_estado, "Windows no esta activado");
}

OSWindows::~OSWindows(){
    //dtor
}

void OSWindows::PintarWindow(){

    //recuadro de titulo
    DibujarSimbolo(MARCO, 80, true);
    DibujarSimbolo(MARCO, 1);
    CentrarTexto(_win_titulo);
    DibujarSimbolo(MARCO, 1, true);
    DibujarSimbolo(MARCO, 80, true);

    //recuadro de contenido
    for(int c = 0; c < 11; c++){
        DibujarSimbolo(MARCO, 1);
        DibujarSimbolo(' ', 78);
        DibujarSimbolo(MARCO, 1, true);

        if(c == 5){
            DibujarSimbolo(MARCO, 1);
            CentrarTexto(_win_area_trabajo);
            DibujarSimbolo(MARCO, 1, true);
        }
    }

    //recuadro de estado del sistema
    DibujarSimbolo(MARCO, 80, true);
    DibujarSimbolo(MARCO, 1);
    CentrarTexto(_win_estado);
    DibujarSimbolo(MARCO, 1, true);
    DibujarSimbolo(MARCO, 80, true);

}

void OSWindows::DibujarSimbolo(char _simbolo, int _limite, bool _saltarlinea){
    for(int e = 0; e < _limite; e++){
        cout << _simbolo;
    }

    if(_saltarlinea){
        cout << "\n";
    }
}

void OSWindows::CentrarTexto(char *_ptexto){
    int longTexto, espacios, espImpar;

    longTexto = strlen(_ptexto);
    espacios = (78 - longTexto)/2; //espacios antes y despues del mensaje
    espImpar = (78 - longTexto)%2; //en caso de que el texto deje un espacio impar, se sumara 1

    for(int i = 0; i < espacios; i++){
        cout << ' ' ;
    }

    cout << _ptexto;

    for(int i = 0; i < espacios + espImpar; i++){
        cout << ' ' ;
    }
}
