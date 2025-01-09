#include <iostream>
#include <ctime>

using namespace std;
// Prototyyppi
int game(int maxnum);

int main()
{
    int arvausten_lkm = 0;
    int maxnum = 40;
    arvausten_lkm = game(maxnum);
    return 0;
}

int game(int maxnum) {

    int satunnaisluku;
    int arvaus = 0;
    int arvausten_lkm = 0;
    cout << "Korkein arvo = "<<maxnum<<endl;


    // 1. Arvotaan satunnaisluku
    srand(time(NULL));
    satunnaisluku = rand() % maxnum;

    while (arvaus != satunnaisluku){
        // 2. Kysytään arvaus
        cout << "Anna luku? "
             << endl;
        cin  >> arvaus;
        arvausten_lkm++;
        // 3. Tarkistetaan, onko arvaus pienempi, suurempi vai yhtäsuuri
        // 3.1 Jos arvaus yhtäsuuri kuin satunnaisluku
        if (arvaus == satunnaisluku){
            cout << "Oikein arvasit!"
                 << endl;
            cout << "Arvausten lukumaara: "
                 << arvausten_lkm
                 << endl;
        }
        // 3.2 Jos arvays pienempi kuin satunnaisluku
        if (arvaus > satunnaisluku){
            cout << "Pienempi"
                 << endl;
        }
        // 3.3 Jos arvaus isompi kuin satunnaisluku
        if (arvaus < satunnaisluku){
            cout << "Suurempi"
                 << endl;
        }
        // 4. Kerrotaan tarkistuksen tulos

        // 5.Jos ei ollut sama kuin haettu luku, palataan kohtaan 2.
    }

    return arvausten_lkm;
}
