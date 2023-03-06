#include <iostream>
#include "Henkilo.h"

main()
{
    Henkilo hlo1;
    hlo1.setNimi("Pekka");
    hlo1.setIka(20);

    Henkilo hlo2;
    hlo2.setNimi("Pekka");
    hlo2.setIka(55);

    std::cout << "Nimi: " << hlo1.getNimi() << " Ika: " << hlo1.getIka() << std::endl;
    hlo1.printData();

    return 0;
}