#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // ez itt N_ELEMENTS kéne legyen
    std::cout << "1-100 ertekek duplazasa\n"; // nincs ";", és aposztrof helyett idézőjelekkel kellett volna a stringet megadni, nincs endline
    for (int i = 0; i <= 100; i++) // itt hiányzik, hogy i 100-ig menjen, illetve az inkrementálás
    {
        b[i] = i * 2;
    }
    for (int i = 0; i <= 100; i++) // nem ír ki semmit, mivel nincs az i-nek feltétel szabva
    {
        std::cout << "Ertek: " << b[i] << std::endl; // nincs ";", az "Ertek" után nincs semmi kiírva, illetve kéne sortörés
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; // nincs megadva kezdőérték
    for (int i = 0; i < N_ELEMENTS; i++) // az N_ELEMENTS után "," helyet ";" kell
    {
        atlag += b[i]; // nincs ";"
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
