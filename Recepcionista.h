#ifndef RECEPCIONISTA_H
#define RECEPCIONISTA_H

#include "Citas.h"
#include <string>
using namespace std;

class Recepcionista : public Citas {
    public:
        ~Recepcionista();
        Recepcionista(string, int, float, string, int, string);
        void agregarCita();
        void cancelarCita();
        void actualizarCita();
};

#endif // RECEPCIONISTA_H
