#include "Recepcionista.h"
#include <iostream>
using namespace std;

Recepcionista::Recepcionista(string _nombre, int _edad, float _peso, string _alergias, int _fecha, string _tratamientoDental)
    : Citas(_nombre, _edad, _peso, _alergias, _fecha, _tratamientoDental) {}

Recepcionista::~Recepcionista() {
    // Destructor
}

void Recepcionista::agregarCita() {
    cout << "Agregar cita" << endl;

    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;
    setEdad(edad);

    float peso;
    cout << "Ingrese su peso: ";
    cin >> peso;
    setPeso(peso);

    string alergias;
    cout << "¿Tiene alergias? ¿A qué? ";
    cin.ignore();
    getline(cin, alergias);
    setAlergias(alergias);

    int fecha;
    cout << "Día de la cita (diamesaño): ";
    cin >> fecha;
    setFecha(fecha);

    string tratamientoDental;
    cout << "Tratamiento dental: ";
    cin.ignore();
    getline(cin, tratamientoDental);
    setTratamientoDental(tratamientoDental);

    cout << "Cita agregada con éxito." << endl;
}

void Recepcionista::cancelarCita() {
    cout << "Cancelando cita" << endl;
}

void Recepcionista::actualizarCita() {
    cout << "Actualizar cita" << endl;

    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;
    setEdad(edad);

    float peso;
    cout << "Ingrese su peso: ";
    cin >> peso;
    setPeso(peso);

    string alergias;
    cout << "¿Tiene alergias? ¿A qué? ";
    cin.ignore();
    getline(cin, alergias);
    setAlergias(alergias);

    int fecha;
    cout << "Día de la cita (diamesaño): ";
    cin >> fecha;
    setFecha(fecha);

    string tratamientoDental;
    cout << "Tratamiento dental: ";
    cin.ignore();
    getline(cin, tratamientoDental);
    setTratamientoDental(tratamientoDental);

    cout << "Cita actualizada con éxito." << endl;
}
