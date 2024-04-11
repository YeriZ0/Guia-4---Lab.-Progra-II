#ifndef IAPERIENCIA_H
#define IAPERIENCIA_H

class iApariencia{
    public:
        iApariencia();
        virtual ~iApariencia();
        virtual void PintarWindow() = 0;
        virtual void DibujarSimbolo(char, int, bool) = 0;

    protected:

    private:
};


#endif // IAPERIENCIA_H
