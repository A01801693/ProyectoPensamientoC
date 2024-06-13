#include "Paciente.h"
#include <iostream>
using namespace std;

Paciente::Paciente(string _nombre, int _edad, float _peso, string _alergias) 
    : Persona(_nombre), edad(_edad), peso(_peso), alergias(_alergias) {}

Paciente::~Paciente() {
    // Destructor
}

void Paciente::mostrarPaciente() {
    mostrarPersona();
    cout << "Edad: " << edad << endl;
    cout << "Peso: " << peso << endl;
    cout << "Alergias: " << alergias << endl;
}

int Paciente::getEdad() { return edad; }
float Paciente::getPeso() { return peso; }
string Paciente::getAlergias() { return alergias; }
void Paciente::setEdad(int _edad) { edad = _edad; }
void Paciente::setPeso(float _peso) { peso = _peso; }
void Paciente::setAlergias(string _alergias) { alergias = _alergias; }
