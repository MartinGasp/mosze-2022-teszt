#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];
    std::cout << '1-100 ertekek duplazasa' << std::endl;
    for (int i = 0;) // hiányos for ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // rosszul van kitöltve
    {
        std::cout << "Ertek:" // nem írja ki a számot
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //nincs kezdő érték megadva az átlag változónak
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
