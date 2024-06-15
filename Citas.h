#ifndef CITAS_H
#define CITAS_H

#include "Paciente.h"
#include <string>
using namespace std;

class Citas : public Paciente {
    private:
        int fecha;
        string tratamientoDental;
    public:
        ~Citas();
        Citas(string, int, float, string, int, string);
        void completarCita();
        int getFecha();
        string getTratamientoDental();
        void setFecha(int);
        void setTratamientoDental(string);
};

#endif
