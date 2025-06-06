#include <iostream>
#include "personagem.h"
#include "acoes.h"

using namespace std;

int main() {
    Personagem player;
    int escolha;

    cout << "🎮 Bem-vindo ao VidaSim++!\n";

    do {
        mostrarEstado(player);
        menuAcoes();

        cout << "\nEscolhe: ";
        while (!(cin >> escolha)) {
            cin.clear();              // limpa erro de input
            cin.ignore(10000, '\n');  // descarta lixo no buffer
            cout << "Entrada inválida! Por favor insere um número: ";
        }

        cout << "Escolheste a opção: " << escolha << endl; // DEBUG

        if (escolha == 0) {
            cout << "👋 Saíste do jogo.\n";
            break;
        }

        aplicarAcao(escolha, player);

        mostrarEstado(player); // DEBUG: Mostra estado após a ação

        if (!estaVivo(player)) {
            cout << "\n💀 Ficaste sem forças para continuar. Game Over!.\n";
            break;
        }

    } while (true);

    cin.ignore(); // Ignora qualquer caractere no buffer
    cin.get();    // Espera Enter antes de fechar a janela (caso esteja no terminal VSCode)

    return 0;
}
