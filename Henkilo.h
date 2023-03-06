#pragma once
#include<string>

class Henkilo
{
public:
    // Metodit, Jäsenfunktiot
    // Datalle yleensä luodaan setterit ja getterit
    void setNimi(std::string aNimi);
    void setIka(int aIka);
    std::string getNimi();
    int getIka();
    void printData();
private:
    // Tietojäsenet, jäsenmuuttujat, attribuutit,  member variables, properties
    std::string nimi{"-"};
    int ika{0};
};