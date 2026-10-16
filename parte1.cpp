
#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;

    bool longitud = false;
    bool mayuscula = false;
    bool numero = false;
    bool especial = false;

    cout << "Ingrese una contrasena: ";
    cin >> password;

    if (password.length() >= 8) {
        longitud = true;
    }

    for (int i = 0; i < password.length(); i++) {
        char caracter = password[i];

        if (caracter >= 'A' && caracter <= 'Z') {
            mayuscula = true;
        }

        if (caracter >= '0' && caracter <= '9') {
            numero = true;
        }

        if (caracter == '!' || caracter == '@' ||
            caracter == '#' || caracter == '$' ||
            caracter == '%' || caracter == '&' ||
            caracter == '*') {
            especial = true;
        }
    }

    int puntaje = longitud + mayuscula + numero + especial;

    cout << "\nReglas cumplidas: " << puntaje << " de 4" << endl;

    if (puntaje <= 2) {
        cout << "Seguridad de la contrasena: DEBIL" << endl;
    } else if (puntaje == 3) {
        cout << "Seguridad de la contrasena: MEDIA" << endl;
    } else {
        cout << "Seguridad de la contrasena: FUERTE" << endl;
    }

    return 0;
}
