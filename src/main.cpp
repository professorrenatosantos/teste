#include <iostream>

using namespace std;

void funcao1() {
    cout << "Executando função 1\n";
}

void funcao2() {
    cout << "Executando função 2\n";
}

void funcao3() {
    cout << "Executando função 3\n";
}

int main() {
    int opcao;
    do {
        cout << "\nMenu:\n";
        cout << "1. Função 1\n";
        cout << "2. Função 2\n";
        cout << "3. Função 3\n";
        cout << "4. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                funcao1();
                cout << "Estou a desenvolver o jogo 1 \n";
                break;
            case 2:
                funcao2();
                break;
            case 3:
                funcao3();
                break;
            case 4:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Opção inválida!\n";
        }
    } while (opcao != 4);

    return 0;
}