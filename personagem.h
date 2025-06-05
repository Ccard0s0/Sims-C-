#ifndef PERSONAGEM_H
#define PERSONAGEM_H

struct Personagem {
    int fome = 50;
    int energia = 50;
    int felicidade = 50;
};

void mostrarEstado(const Personagem& p);
bool estaVivo(const Personagem& p);

#endif
