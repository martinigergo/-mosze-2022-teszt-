#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //csillag rossz helyen van, []-ben eliras
    std::cout << '1-100 ertekek duplazasa' // hianyos a vege,lezaras
    for (int i = 0;) // int utan a zarojelben levo resz hibas
    {
        b[i] = i * 2; //[]-ben levo resz hibas
    }
    for (int i = 0; i; i++) //kozepso i resz hianyos
    {
        std::cout << "Ertek:" // hianyos a vege,lezaras
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //hianyos az atlag utani resz
    for (int i = 0; i < N_ELEMENTS, i++) 
    {
        atlag += b[i] //; hiany
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
