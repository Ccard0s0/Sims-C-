#include <iostream>
#include <algorithm>
#include "acoes.h"

using namespace std;

void menuAcoes() {
    cout << "\nQue ação queres tomar?\n";
    cout << "1 - Comer 🍽️ (+fome, -energia)\n";
    cout << "2 - Dormir 🛏️ (+energia, -fome)\n";
    cout << "3 - Sair com amigos 🎉 (+felicidade, -energia, -fome)\n";
    cout << "4 - Trabalhar 💼 (-energia, -felicidade, -fome)\n";
    cout << "5 - Fazer nada 😐 (-tudo aos poucos)\n";
    cout << "0 - Sair do jogo\n";
}

void aplicarAcao(int escolha, Personagem& p) {
    switch (escolha) {
        case 1:
            p.fome += 15;
            p.energia -= 5;
            cout << "🍽️ Comeste alguma coisa. Ficaste com mais fome (no bom sentido) e menos energia.\n";
            break;
        case 2:
            p.energia += 20;
            p.fome -= 10;
            cout << "😴 Dormiste bem! Recuperaste energia mas ficaste com mais fome.\n";
            break;
        case 3:
            p.felicidade += 20;
            p.energia -= 15;
            p.fome -= 10;
            cout << "🎉 Te divertiste com os amigos. Mais felicidade, menos energia e mais fome.\n";
            break;
        case 4:
            p.energia -= 20;
            p.felicidade -= 15;
            p.fome -= 10;
            cout << "💼 Trabalhaste muito. Estás mais cansado, com menos fome e menos feliz.\n";
            break;
        case 5:
            p.fome -= 5;
            p.energia -= 5;
            p.felicidade -= 5;
            cout << "😐 Fizeste nada. Lentamente tudo está a piorar.\n";
            break;
        default:
            cout << "❌ Opção inválida!\n";
            return; // Evita normalizar se a opção for inválida
    }

    // Limita os valores entre 0 e 100
    p.fome = min(max(p.fome, 0), 100);
    p.energia = min(max(p.energia, 0), 100);
    p.felicidade = min(max(p.felicidade, 0), 100);
}
