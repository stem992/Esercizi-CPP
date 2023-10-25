#include <iostream>
using namespace std;

int main() {
    char operatore;
    double numero1, numero2;

    cout << "Digita 1 per l'operatore Somma(+)" << endl;
    cout << "Digita 2 per l'operatore Differenza(-)" << endl;
    cout << "Digita 3 per l'operatore Moltiplicazione(*)" << endl;
    cout << "Digita 4 per l'operatore Divisione(/)" << endl;

    cin >> operatore;

    cout << "Inserisci il primo numero: " << endl;
    cin >> numero1;

    cout << "Inserisci il secondo numero: " << endl;
    cin >> numero2;

    double risultato;
    switch (operatore) {
        case '1':
            risultato = numero1 + numero2;
            break;
        case '2':
            risultato = numero1 - numero2;
            break;
        case '3':
            risultato = numero1 * numero2;
            break;
        case '4':
            if (numero2 != 0) {
                risultato = numero1 / numero2;
            } else {
                cout << "Errore: Divisione per zero non consentita." << endl;
                return 1;  
            }
            break;
        default:
            cout << "Errore: Operatore non valido." << endl;
            return 1;  
    }

    cout << "Risultato: " << risultato << endl;

    return 0;  
}
