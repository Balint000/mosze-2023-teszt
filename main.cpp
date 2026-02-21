#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; 
    std::cout << "1-100 ertekek duplazasa" << std::endl; 

    for (int i = 0; i < N_ELEMENTS; i++) 
    {
        b[i] = i * 2;
    }

    for (int i = 0; i < N_ELEMENTS; i++) 
    {
        std::cout << "Ertek: " << b[i] << std::endl;
    }    

    std::cout << "Atlag szamitasa: " << std::endl;
    double atlag = 0; // double a pontosabb eredmenyert es 0-rol indulunk
    for (int i = 0; i < N_ELEMENTS; i++) 
    {
        atlag += b[i];
    }

    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    delete[] b; // Memoria felszabaditva
    return 0;
}
