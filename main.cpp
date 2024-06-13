/*
Autor: Oscar Hernandez
Fecha: 12/06/2024
*/
#include <iostream>
#include <string>
#include "Recepcionista.h"
using namespace std;

int main() {
    string nombre;
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    Recepcionista recepcionista(nombre, 0, 0.0, "", 0, "");

    int menu;
    do {
        cout << "Menu" << endl;
        cout << "1. Agregar Cita" << endl;
        cout << "2. Editar Cita" << endl;
        cout << "3. Cancelar Cita" << endl;
        cout << "4. Salir" << endl;
        cout << nombre << " ¿qué desea hacer? ";
        cin >> menu;

        switch (menu) {
            case 1:
                recepcionista.agregarCita();
                break;
            case 2:
                recepcionista.actualizarCita();
                break;
            case 3:
                recepcionista.cancelarCita();
                break;
            case 4:
                return 0;
            default:
                cout << "OPCION INVALIDA" << endl;
                break;
        }
    } while (menu != 4);

    return 0;
}
