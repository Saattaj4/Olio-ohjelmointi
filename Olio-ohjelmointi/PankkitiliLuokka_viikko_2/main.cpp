#include <iostream>
#include "pankkitili.h"

using namespace std;

int main()
{
    Pankkitili munTili;

    munTili.setSaldo(150);

    cout << "Saldo on "
         << munTili.getSaldo()
         << endl;

    Pankkitili toinenTili("5566");

    toinenTili.setSaldo(200);

    cout << "Saldo on "
         << toinenTili.getSaldo()
         << endl;
    return 0;
}
