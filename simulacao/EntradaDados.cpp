#include <iostream>
#include "EntradaDados.h"
using namespace std;

namespace simulacao {

    double EntradaDados::lerArea() {
        double area;
        cout << "Informe a area (m²): ";
        cin >> area;
        return area;
    }

    int EntradaDados::lerPessoas() {
        int p;
        std::cout << "Quantidade de pessoas: ";
        std::cin >> p;
        return p;
    }

    int EntradaDados::lerEletronicos() {
        int e;
        cout << "Quantidade de eletronicos: ";
        cin >> e;
        return e;
    }

    bool EntradaDados::lerSolDireto() {
        char resposta;
        cout << "Recebe sol direto? (s/n): ";
        cin >> resposta;
        return (resposta == 's' || resposta == 'S');
    }

    double EntradaDados::lerTemperaturaAtual() {
        double t;
        std::cout << "Temperatura atual: ";
        std::cin >> t;
        return t;
    }

    double EntradaDados::lerTemperaturaExterna() {
        double t;
        std::cout << "Temperatura externa: ";
        std::cin >> t;
        return t;
    }

    int EntradaDados::lerQuantidade(const char* mensagem) {
        int q;
        std::cout << mensagem;
        std::cin >> q;
        return q;
    }

}