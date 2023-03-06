#include "henkilo.h"
#include <iostream>

// Luokan metodien toteutukset

void Henkilo::setNimi(std::string aNimi)
{
    nimi = aNimi;
}

void Henkilo::setIka(int aIka)
{
    ika = aIka;
}

std::string Henkilo::getNimi()
{
    return nimi;
}

int Henkilo::getIka()
{
    return ika;
}

void Henkilo::printData()
{
    std::cout << "Henkilon tiedot" << std::endl;
    std::cout << "Nimi: " << nimi << std::endl;
    std::cout << "ika: " << ika << std::endl;
}