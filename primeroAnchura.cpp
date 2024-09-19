#include <iostream>
#include <string>

using namespace std;

// Función para realizar la búsqueda de decisiones
void buscarOpciones() {
    string opcionVerificar, posicionCorrecta;

    // Preguntar si verificar la posición
    cout << "¿Desea verificar la posición? (si/no): ";
    cin >> opcionVerificar;
    cin.ignore(); // Limpiar el buffer de entrada

    if (opcionVerificar == "si") {
        // Si se verifica, preguntar si es correcta
        cout << "¿La posición es correcta? (si/no): ";
        cin >> posicionCorrecta;
        cin.ignore(); // Limpiar el buffer de entrada

        if (posicionCorrecta == "si") {
            cout << "Continuar con el montaje. (Montaje Completo)" << endl;
        } else {
            cout << "Posición incorrecta. Se necesita ajuste." << endl;
            string ajuste;
            cout << "¿Realizar ajuste lateral o rotacional? (lateral/rotacional): ";
            cin >> ajuste;
            cin.ignore(); // Limpiar el buffer de entrada

            if (ajuste == "lateral") {
                cout << "Ajustando lateralmente..." << endl;
                // Simular resultado del ajuste lateral
                cout << "¿Posición correcta después del ajuste? (si/no): ";
                cin >> posicionCorrecta;
                cin.ignore(); // Limpiar el buffer de entrada
                if (posicionCorrecta == "si") {
                    cout << "Montaje completado con éxito." << endl;
                } else {
                    cout << "Posición incorrecta después del ajuste lateral. Detención de línea." << endl;
                }
            } else if (ajuste == "rotacional") {
                cout << "Ajustando rotacionalmente..." << endl;
                // Simular resultado del ajuste rotacional
                cout << "¿Posición correcta después del ajuste? (si/no): ";
                cin >> posicionCorrecta;
                cin.ignore(); // Limpiar el buffer de entrada
                if (posicionCorrecta == "si") {
                    cout << "Montaje completado con éxito." << endl;
                } else {
                    cout << "Posición incorrecta después del ajuste rotacional. Detención de línea." << endl;
                }
            } else {
                cout << "Opción de ajuste no válida." << endl;
            }
        }
    } else if (opcionVerificar == "no") {
        cout << "No se verifica la posición. Proceder con el montaje." << endl;
        // Simular consecuencias de no verificar
        cout << "Detención de línea debido a error en el montaje." << endl;
    } else {
        cout << "Opción no válida. Por favor, ingrese 'si' o 'no'." << endl;
    }

    // Pausa para permitir al usuario leer los resultados antes de cerrar
    cout << "\nPresione Enter para continuar...";
    cin.get();
}

int main() {
    cout << "Iniciando proceso de verificación y ajuste:" << endl;
    buscarOpciones(); // Llamar a la función para iniciar el proceso

    return 0;
}
