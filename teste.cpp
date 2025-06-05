#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Insere um número: ";
    while (!(cin >> n)) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Valor inválido. Tenta de novo: ";
    }
    cout << "Leste: " << n << endl;
    return 0;
}
