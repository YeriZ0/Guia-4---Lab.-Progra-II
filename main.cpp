#include <iostream>
#include <stdlib.h>
#include <thread>
#include <chrono>

#include "OSWindows.h"
#include "OSLinux.h"
#include "OSOSx.h"

using namespace std;

char menu(){
    char opcion;

    cout << "********** Particiones del disco ********** \n" << endl;
    cout << "1. Particion - Windows 2016" << endl;
    cout << "2. Particion - Linux Ubuntu 16.7.9-4" << endl;
    cout << "3. Particion - Mac OSX" << endl;
    cout << "4. Apagar el equipo" << endl;
    cout << "\nSeleccione una particion para bootear: "; cin >> opcion;

    return opcion;
}

int main(){

    char Menu;
    OSWindows win;
    OSLinux lin;
    OSOSx mac;

    do{
        system("cls");
        Menu = menu();
        switch(Menu){
            case '1':
                system("cls");
                win.PintarWindow();
                system("pause");
                system("cls");
                break;
            case '2':
                system("cls");
                lin.PintarWindow();
                system("pause");
                system("cls");
                break;
            case '3':
                system("cls");
                mac.PintarWindow();
                system("pause");
                system("cls");
                break;
            case '4':
                system("cls");
                cout << "\nSaliendo del menu de booteo..." << endl;
                break;
            default:
                cout << "Seleccione una opcion valida." << endl;
                break;
        }
    }while(Menu != '4');


    return 0;
}
