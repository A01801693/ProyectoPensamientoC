#include <iostream>
#include <string>
using namespace std;

class Persona {// Clase Persona
    private:
        string nombre;
    public:
        Persona(string);
        void mostrarPersona();
        string getNombre() { return nombre; }
};
Persona::Persona(string _nombre) {
    nombre = _nombre;
}
void Persona::mostrarPersona() {
    cout << "Nombre: " << nombre << endl;
}
//-----------------------------------------------------------------------------------------------------------------------Separar
class Paciente : public Persona {// Clase Paciente
    private:
        int edad;
        float peso;
        string alergias;
    public:
        ~Paciente();
        Paciente(string, int, float, string);
        void mostrarPaciente();
        int getEdad() { return edad; }
        float getPeso() { return peso; }
        string getAlergias() { return alergias; }
        void setEdad(int _edad) { edad = _edad; }
        void setPeso(float _peso) { peso = _peso; }
        void setAlergias(string _alergias) { alergias = _alergias; }
};
Paciente::Paciente(string _nombre, int _edad, float _peso, string _alergias) : Persona(_nombre) {
    edad = _edad;
    peso = _peso;
    alergias = _alergias;
}
Paciente::~Paciente() {
    // Destructor
}
void Paciente::mostrarPaciente() {
    mostrarPersona();
    cout << "Edad: " << edad << endl;
    cout << "Peso: " << peso << endl;
    cout << "Alergias: " << alergias << endl;
}
//-------------------------------------------------------------------------------------------------------------------------------------
class Citas : public Paciente { // Clase Citas
    private:
        int fecha;
        string tratamientoDental;
    public:
        ~Citas();
        Citas(string, int, float, string, int, string);
        void completarCita();
        int getFecha() { return fecha; }
        string getTratamientoDental() { return tratamientoDental; }
        void setFecha(int _fecha) { fecha = _fecha; }
        void setTratamientoDental(string _tratamientoDental) { tratamientoDental = _tratamientoDental; }
};
Citas::Citas(string _nombre, int _edad, float _peso, string _alergias, int _fecha, string _tratamientoDental)
    : Paciente(_nombre, _edad, _peso, _alergias) {
    fecha = _fecha;
    tratamientoDental = _tratamientoDental;
}
Citas::~Citas() {
    // Destructor
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
//--------------------------------------------------------------------------------------------------------------------
class Recepcionista : public Citas { // Clase Citas
    public:
        ~Recepcionista();
        Recepcionista(string, int, float, string, int, string);
        void agregarCita();
        void cancelarCita();
        void actualizarCita();
};
Recepcionista::Recepcionista(string _nombre, int _edad, float _peso, string _alergias, int _fecha, string _tratamientoDental)
    : Citas(_nombre, _edad, _peso, _alergias, _fecha, _tratamientoDental) {
}
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

//Dividirlo