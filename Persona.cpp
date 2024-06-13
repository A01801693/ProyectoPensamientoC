#include "Persona.h"
#include <iostream>
using namespace std;

Persona::Persona(string _nombre) {
    nombre = _nombre;
}

void Persona::mostrarPersona() {
    cout << "Nombre: " << nombre << endl;
}

string Persona::getNombre() {
    return nombre;
}
