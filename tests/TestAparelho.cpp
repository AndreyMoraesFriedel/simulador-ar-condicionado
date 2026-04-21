#include <iostream>
#include "../equipamentos/Televisao.h"

using namespace equipamentos;
using namespace std;

void testTelevisao() {
    Televisao tv;
    if (tv.gerarCalor() == 0) {
        cout << "PASSOU: TV desligada não gera calor\n";
    }
    tv.ligar();
    if (tv.gerarCalor() > 0) {
        cout << "PASSOU: TV ligada gera calor\n";
    }
}