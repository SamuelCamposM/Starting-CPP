#include <iostream>

int main()
{
    float n1, n2, suma, resta, mult, divi;
    std::cout << "Escriba 2 numeros";
    std::cin >> n1;
    std::cin >> n2;
    suma = n1 + n2;
    resta = n1 - n2;
    mult = n1 * n2;
    divi = n1 / n2;
    std::cout << "Resultado de la suma:" << suma << "\n";
    std::cout << "Resultado de la resta:" << resta << "\n";
    std::cout << "Resultado de la multipliacion:" << mult << "\n";
    std::cout << "Resultado de la division:" << divi << "\n";

    system("pause");
    return 0;
}