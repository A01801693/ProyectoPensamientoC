#include "Citas.h"
#include <iostream>
using namespace std;

Citas::Citas(string _nombre, int _edad, float _peso, string _alergias, int _fecha, string _tratamientoDental)
    : Paciente(_nombre, _edad, _peso, _alergias), fecha(_fecha), tratamientoDental(_tratamientoDental) {}

Citas::~Citas() {
  
}

void Citas::completarCita() {
    int estado;
    string _estado;
    cout << "¿Se completó la cita?" << endl;
    cout << "1. SI" << endl;
    cout << "2. NO" << endl;
    cin >> estado;
    switch (estado) {
        case 1:
            cout << "Cita Concluida" << endl;
            _estado = "Afirmativo";
            break;
        case 2:
            cout << "Cita sin Concluir" << endl;
            _estado = "Negativo";
            break;
        default:
            cout << "¡OPCION INVALIDA!" << endl;
            break;
    }
}

int Citas::getFecha() { return fecha; }
string Citas::getTratamientoDental() { return tratamientoDental; }
void Citas::setFecha(int _fecha) { fecha = _fecha; }
void Citas::setTratamientoDental(string _tratamientoDental) { tratamientoDental = _tratamientoDental; }
