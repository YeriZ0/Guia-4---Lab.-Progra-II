#ifndef OSOSX_H
#define OSOSX_H

#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <string.h>

#include "iApariencia.h"

using namespace std;

class OSOSx : public iApariencia{
    public:
        OSOSx();
        virtual ~OSOSx();
        void PintarWindow();
    protected:

    private:
        char _OSx_titulo[100];
        char _OSx_area_trabajo[100];
        char _OSx_estado[100];
        void DibujarSimbolo(char, int, bool _saltarlinea = false);
        void CentrarTexto(char*);

};

#endif // OSOSX_H
