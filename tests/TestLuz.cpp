#include <iostream>
#include "../equipamentos/Luz.h"

using namespace equipamentos;
using namespace std;

void testLuz() {
    Luz l(100);
    if (l.gerarCalor() == 0)
        cout << "PASSOU: Luz desligada\n";
    l.ligar();
    if (l.gerarCalor() == 100)
        cout << "PASSOU: Luz ligada\n";
}