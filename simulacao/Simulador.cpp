#include <iostream>

#include "Simulador.h"
#include "CalculadoraBTU.h"
#include "CalculadoraBTUAvancado.h"
#include "EntradaDados.h"

#include "../ambiente/Ambiente.h"
#include "../pessoas/Pessoa.h"
#include "../equipamentos/Televisao.h"
#include "../equipamentos/Computador.h"
#include "../equipamentos/Luz.h"

using namespace simulacao;
using namespace ambiente;
using namespace pessoas;
using namespace equipamentos;
using namespace std;

void Simulador::executar() {
    int opcao;
    do {
        mostrarMenu();
        cin >> opcao;
        executarOpcao(opcao);
    } while (opcao != 0);
}

void Simulador::mostrarMenu() {
    cout << "\n===== SIMULADOR AR CONDICIONADO =====\n";
    cout << "1 - Calcular BTU (Simples)\n";
    cout << "2 - Calcular BTU (Avancado - POO)\n";
    cout << "0 - Sair\n";
    cout << "Escolha uma opcao: ";
}

void Simulador::executarOpcao(int opcao) {
    switch (opcao) {
        case 1:
            executarBTUSimples();
            break;
        case 2:
            executarBTUAvancado();
            break;
        case 0:
            cout << "Encerrando..." << endl;
            break;
        default:
            cout << "Opcao invalida!" << endl;
    }
}

void Simulador::executarBTUSimples() {
    double area = EntradaDados::lerArea();
    int pessoas = EntradaDados::lerPessoas();
    int eletronicos = EntradaDados::lerEletronicos();
    bool sol = EntradaDados::lerSolDireto();
    double resultado = CalculadoraBTU::calcular(area, pessoas-1, eletronicos, sol);
    cout << "\nBTU (Simples): " << resultado << endl;
}

void Simulador::executarBTUAvancado() {
    double tempAtual = EntradaDados::lerTemperaturaAtual();
    double tempExterna = EntradaDados::lerTemperaturaExterna();
    double tamanho = EntradaDados::lerArea();
    Ambiente amb(tempAtual, tempExterna, tamanho);
    // Pessoas
    int numPessoas = EntradaDados::lerPessoas();
    for (int i = 0; i < numPessoas; i++)
        amb.adicionarPessoa(Pessoa());
    // TVs
    int numTV = EntradaDados::lerQuantidade("Quantidade de TVs: ");
    for (int i = 0; i < numTV; i++) {
        auto* tv = new Televisao();
        tv->ligar();
        amb.adicionarAparelho(tv);
    }
    // PCs
    int numPC = EntradaDados::lerQuantidade("Quantidade de computadores: ");
    for (int i = 0; i < numPC; i++) {
        auto* pc = new Computador();
        pc->ligar();
        amb.adicionarAparelho(pc);
    }
    // Luz padrão
    Luz luz(100);
    luz.ligar();
    amb.adicionarLuz(luz);
    // Sol
    bool sol = EntradaDados::lerSolDireto();
    amb.adicionarJanela(Janela(false, sol));
    double resultado = CalculadoraBTUAvancado::calcular(amb);
    cout << "\nBTU (Avancado): " << resultado << endl;
}