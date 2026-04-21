#include <iostream>
using namespace std;
void testPessoaCalor();
void testTelevisao();
void testLuz();
void testCompressor();
void testControleConvencional();

int main() {
    cout << "==== INICIANDO TESTES ====\n\n";
    testPessoaCalor();
    testTelevisao();
    testLuz();
    testCompressor();
    testControleConvencional();
    cout << "\n==== FIM DOS TESTES ====\n";
    return 0;
}