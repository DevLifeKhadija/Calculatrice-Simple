#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Entrez l'opérateur (+, -, *, /) : ";
    cin >> op;

    cout << "Entrez deux nombres : ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            } else {
                cout << "Erreur : Division par zéro !" << endl;
            }
            break;
        default:
            cout << "Erreur : Opérateur non valide !" << endl;
            break;
    }

    return 0;
}
