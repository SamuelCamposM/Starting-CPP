#include <iostream>

int main()
{
    char sexo[10];
    int edad;
    float estatura;

    std::cout << "Escribe lo siguiente";
    std::cout << "\n Sexo";
    std::cin >> sexo;
    std::cout << "\n edad";
    std::cin >> edad;
    std::cout << "\n Estatura";
    std::cin >> estatura;

    std::cout << "Ahi estan tus datos\n\n";
    std::cout << "Sexo: " << sexo << "\n";
    std::cout << "Edad: " << edad << "\n";
    std::cout << "Estatura: " << estatura << "\n";

    system("pause");
    return 0;
}