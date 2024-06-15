#ifndef PACIENTE_H
#define PACIENTE_H
#include "Persona.h"
#include <string>
using namespace std;

class Paciente : public Persona {
    private:
        int edad;
        float peso;
        string alergias;
    public:
        ~Paciente();
        Paciente(string, int, float, string);
        void mostrarPaciente();
        int getEdad();
        float getPeso();
        string getAlergias();
        void setEdad(int);
        void setPeso(float);
        void setAlergias(string);
};

#endif
