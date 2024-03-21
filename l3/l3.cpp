// l3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Nod.h"
int main()
{
    nod* cap;
    int poz;
    std::cout << " Introduceti elemente pana la 0 " << std::endl;
    cap = citireLista();
    afisareLista(cap);
    //ex 1
 /*   std::cout << "\n" << "Introduceti elementul de cautat " << " \n";
    int elem;
    std::cin >> elem;
    if (cautaLista(cap, elem))
    {
        std::cout << "\n" << "Elementul cautat a fost gasit " << " \n";
    }
    else
    {
        std::cout << " \n" << "Elementul cautat nu a fost gasit " << " \n";
    }
    std::cout << "Introduceti elementul de inserat in lista si pozitia acestuia" << " \n";
  
    std::cin >> elem >> poz;
    inserareElement(cap, poz, elem);
    std::cout << "\n" << "Noua lista dupa inserare este " << "\n";
    afisareLista(cap);
    std::cout << "\n" << "Introduceti pozitia elementului de sters " << "\n";
    std::cin >> poz;
    stergereElement(cap, poz);
    afisareLista(cap); 
    std::cout << " ";
    parcurgereLista(cap);
    */
    //ex 2

    nod* cap2;
    std::cout << "Introduceti elementele listei secundare " << "\n";
    cap2 = citireLista();
    //lipireListe(cap, cap2);
    intercalareListe(cap, cap2);
    afisareLista(cap);
}
 
