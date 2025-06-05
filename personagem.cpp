#include <iostream>
#include "personagem.h"

using namespace std;

void mostrarEstado(const Personagem& p) {
    cout << "\n🌡️ Estado atual:\n";
    cout << "Fome: " << p.fome << "\n";
    cout << "Energia: " << p.energia << "\n";
    cout << "Felicidade: " << p.felicidade << "\n";
}

bool estaVivo(const Personagem& p) {
    return p.fome > 0 && p.energia > 0 && p.felicidade > 0;
}
