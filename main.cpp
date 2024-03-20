#include <iostream>

using namespace std;

int main() {
    cout << "06 Programa que indica miles, centenas, decenas y unidades de un numero" << endl;
    int numero, unidadDeMil, centena, decena, unidad;

    // Ingresar el número.
    // Nota: El número debe ser mayor o igual a 0 y menor a 1000!
    cout << "Ingrese el numero: ";
    cin >> numero;


    // Calcular el perímetro del círculo.
    unidadDeMil = numero / 1000;
    centena = (numero % 1000) / 100;
    decena = (numero % 100) / 10;
    unidad = (numero % 10);


    // Mostrar el resultado en consola.
    cout << "El numero " << numero << " tiene:" << endl;
    cout << "Unidades de Mil: " << unidadDeMil << "." << endl;
    cout << "Centenas: " << centena << "." << endl;
    cout << "Decenas: " << decena << "." << endl;
    cout << "Unidades: " << unidad << ".";
    return 0;
}
