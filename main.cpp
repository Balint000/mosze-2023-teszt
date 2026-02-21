#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // Hiba_1: NELEMENTS nincs definialva (N_ELEMENTS helyes)
    int *b = new int[NELEMENTS]; 
    // Hiba_2: szimpla idezojel; hianyzo pontosvesszo
    std::cout << '1-100 ertekek duplazasa' 
    // Hiba_3: hianyos for ciklus
    for (int i = 0;) 
    {
        b[i] = i * 2;
    }
    // Hiba_4: hibas feltetel: a feltetel (i) miatt 0-nal azonnal kilep
    for (int i = 0; i; i++) 
    {
        std::cout << "Ertek:" // Hiba_5: hianyzo pontosvesszo
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // Hiba_6: nincs inicializalva (memoria-szemet lesz benne)
    // Hiba_7: vesszo hasznalata pontosvesszo helyett
    for (int i = 0; i < N_ELEMENTS, i++) 
    {
        atlag += b[i] // Hiba_8: hianyzo pontosvesszo
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    // Hiba_9: a lefoglalt memoria nincs felszabaditva (delete[] b)
    return 0;
}
